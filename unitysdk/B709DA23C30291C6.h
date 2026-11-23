#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define B709DA23C30291C6_AD1165A57E8DD038_OFFSET UNITYSDK_OFFSET(0x4206760)
#define B709DA23C30291C6_E716ECB389A5FB1F_OFFSET UNITYSDK_OFFSET(0x4206660)
#define B709DA23C30291C6_FC4E8CBA8522D377_OFFSET UNITYSDK_OFFSET(0x4206700)

inline static constexpr unsigned int B709DA23C30291C6_TypeDefinitionIndex = 18710;

class B709DA23C30291C6 : public ::System::Object
{
public:
	static ::System::Char FC4E8CBA8522D377(::System::Char A97F5B807CC19082)
	{
		return ((::System::Char(*)(::System::Char))((::PBYTE)hIl2Cpp + B709DA23C30291C6_FC4E8CBA8522D377_OFFSET))(A97F5B807CC19082);
	}

	static ::System::String* AD1165A57E8DD038(::System::Collections::Generic::List_1<::System::UInt32>* A86281B5C4FE1ED9)
	{
		return ((::System::String*(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + B709DA23C30291C6_AD1165A57E8DD038_OFFSET))(A86281B5C4FE1ED9);
	}

	static ::System::Int32 E716ECB389A5FB1F(::System::String* B9AEC57275825552)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + B709DA23C30291C6_E716ECB389A5FB1F_OFFSET))(B9AEC57275825552);
	}
};
