#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

class AB74579FB18469C1_A220CD9C9BE877C9;
namespace System { class String; }

#define AB74579FB18469C1_A7B54E4E25945903_FF6204A42A8C9872_OFFSET UNITYSDK_OFFSET(0x39F9EA0)
#define AB74579FB18469C1_A7B54E4E25945903__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AB74579FB18469C1_A7B54E4E25945903_TypeDefinitionIndex = 11887;

class AB74579FB18469C1_A7B54E4E25945903 : public ::System::Object
{
public:
	::System::DateTime A21FC1443223A956; // 0x10
	::AB74579FB18469C1_A220CD9C9BE877C9* EE7A1F7E14032494; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AB74579FB18469C1_A7B54E4E25945903__CTOR_OFFSET))(this);
	}

	::System::Void FF6204A42A8C9872(::System::Int32 B714679C324FF96E, ::System::String* B4B6D6374ADCCE26)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + AB74579FB18469C1_A7B54E4E25945903_FF6204A42A8C9872_OFFSET))(this, B714679C324FF96E, B4B6D6374ADCCE26);
	}
};
