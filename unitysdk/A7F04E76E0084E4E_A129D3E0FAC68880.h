#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A7F04E76E0084E4E;
namespace System { class String; }

#define A7F04E76E0084E4E_A129D3E0FAC68880_A78E185DC292A3FA_OFFSET UNITYSDK_OFFSET(0x39B5EA0)
#define A7F04E76E0084E4E_A129D3E0FAC68880__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A7F04E76E0084E4E_A129D3E0FAC68880_TypeDefinitionIndex = 12561;

class A7F04E76E0084E4E_A129D3E0FAC68880 : public ::System::Object
{
public:
	::System::String* E0C0689B1CEBE48C; // 0x10
	::A7F04E76E0084E4E* A544919C800E2923; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7F04E76E0084E4E_A129D3E0FAC68880__CTOR_OFFSET))(this);
	}

	::System::Void A78E185DC292A3FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7F04E76E0084E4E_A129D3E0FAC68880_A78E185DC292A3FA_OFFSET))(this);
	}
};
