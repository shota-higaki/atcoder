# C - Ringo's Favorite Numbers 2
# https://atcoder.jp/contests/abc200/tasks/abc200_c

n = gets.to_i
a = gets.split.map(&:to_i)

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
