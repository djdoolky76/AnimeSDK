#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NCDMMMLNAMM;
namespace MoleMole::Battle { class ChallengeSubTypeItem; }
namespace System { class Action; }

#define NCDMMMLNAMM_NOHAKMHDBDK_OLLNPJCGECN_OFFSET UNITYSDK_OFFSET(0x13B57390)
#define NCDMMMLNAMM_NOHAKMHDBDK_PLMHMFLJPDK_OFFSET UNITYSDK_OFFSET(0x13B57410)
#define NCDMMMLNAMM_NOHAKMHDBDK__CTOR_OFFSET UNITYSDK_OFFSET(0x13B57380)

inline static constexpr unsigned int NCDMMMLNAMM_NOHAKMHDBDK_TypeDefinitionIndex = 65683;

class NCDMMMLNAMM_NOHAKMHDBDK : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::NCDMMMLNAMM* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCDMMMLNAMM_NOHAKMHDBDK__CTOR_OFFSET))(this);
	}

	::System::Void OLLNPJCGECN(::MoleMole::Battle::ChallengeSubTypeItem* IPMMCGDMODG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ChallengeSubTypeItem*))((::PBYTE)hIl2Cpp + NCDMMMLNAMM_NOHAKMHDBDK_OLLNPJCGECN_OFFSET))(this, IPMMCGDMODG);
	}

	::System::Void PLMHMFLJPDK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCDMMMLNAMM_NOHAKMHDBDK_PLMHMFLJPDK_OFFSET))(this);
	}
};
