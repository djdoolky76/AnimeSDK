#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class SkillTypeToAttackTagsConfig; }
namespace System { class Action; }

#define OEHADFJKOIA_DNHEAHIBKEG_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x13A509D0)
#define OEHADFJKOIA_DNHEAHIBKEG__CTOR_OFFSET UNITYSDK_OFFSET(0x13A509C0)

inline static constexpr unsigned int OEHADFJKOIA_DNHEAHIBKEG_TypeDefinitionIndex = 79091;

class OEHADFJKOIA_DNHEAHIBKEG : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHADFJKOIA_DNHEAHIBKEG__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::SkillTypeToAttackTagsConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SkillTypeToAttackTagsConfig*))((::PBYTE)hIl2Cpp + OEHADFJKOIA_DNHEAHIBKEG_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
