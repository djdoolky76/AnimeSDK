#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E0B58AD87D1F143C/E602D86BC88653D1.h"
#include "unitysdk/System/Object.h"

template <typename T> class FA9B773E8C9B97E9;

#define ED07C85166B987DD_BC027A3F1442DAD8_OFFSET UNITYSDK_OFFSET(0x22074C0)
#define ED07C85166B987DD__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ED07C85166B987DD_TypeDefinitionIndex = 9061;

class ED07C85166B987DD : public ::System::Object
{
public:
	::FA9B773E8C9B97E9<::System::UInt32>* ADC0AB53CDD5AE5C; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ED07C85166B987DD__CTOR_OFFSET))(this);
	}

	::E0B58AD87D1F143C::E602D86BC88653D1 BC027A3F1442DAD8()
	{
		return ((::E0B58AD87D1F143C::E602D86BC88653D1(*)(::PVOID))((::PBYTE)hIl2Cpp + ED07C85166B987DD_BC027A3F1442DAD8_OFFSET))(this);
	}
};
