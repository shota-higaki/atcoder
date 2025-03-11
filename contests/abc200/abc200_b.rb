# B - 200th ABC-200
# https://atcoder.jp/contests/abc200/tasks/abc200_b

n, k = gets.split(' ').map(&:to_i)
k.times do
  if n % 200 == 0
    n /= 200
  else
    n = n.to_s + '200'
    n = n.to_i
  end
end

puts n