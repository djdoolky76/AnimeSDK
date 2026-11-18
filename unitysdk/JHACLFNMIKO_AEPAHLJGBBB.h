#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define JHACLFNMIKO_AEPAHLJGBBB_BEIEMFDIBGB_OFFSET UNITYSDK_OFFSET(0x19459930)
#define JHACLFNMIKO_AEPAHLJGBBB__CTOR_OFFSET UNITYSDK_OFFSET(0x19459920)

inline static constexpr unsigned int JHACLFNMIKO_AEPAHLJGBBB_TypeDefinitionIndex = 54603;

class JHACLFNMIKO_AEPAHLJGBBB : public ::System::Object
{
public:
	::System::Action* CAAFEGLOALC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHACLFNMIKO_AEPAHLJGBBB__CTOR_OFFSET))(this);
	}

	::System::Void BEIEMFDIBGB(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + JHACLFNMIKO_AEPAHLJGBBB_BEIEMFDIBGB_OFFSET))(this, NAPFALLANDL);
	}
};
