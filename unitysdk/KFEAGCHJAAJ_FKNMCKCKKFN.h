#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KFEAGCHJAAJ;
namespace System { class Action; }

#define KFEAGCHJAAJ_FKNMCKCKKFN_CCEKKGOJLFK_OFFSET UNITYSDK_OFFSET(0x15B86CA0)
#define KFEAGCHJAAJ_FKNMCKCKKFN__CTOR_OFFSET UNITYSDK_OFFSET(0x15B86C90)

inline static constexpr unsigned int KFEAGCHJAAJ_FKNMCKCKKFN_TypeDefinitionIndex = 81430;

class KFEAGCHJAAJ_FKNMCKCKKFN : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::KFEAGCHJAAJ* KLHPEBKNIFB; // 0x18
	::System::Boolean GKFAGCKPFOH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEAGCHJAAJ_FKNMCKCKKFN__CTOR_OFFSET))(this);
	}

	::System::Void CCEKKGOJLFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEAGCHJAAJ_FKNMCKCKKFN_CCEKKGOJLFK_OFFSET))(this);
	}
};
