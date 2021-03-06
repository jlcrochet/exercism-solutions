module ArmstrongNumbers
  def self.armstrong_number?(n : Int) : Bool
    str = n.to_s

    return str
      .each_char
      .sum { |char| char.to_i ** str.size } == n
  end
end
