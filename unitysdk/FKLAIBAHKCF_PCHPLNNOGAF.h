#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAttackDistanceAttenuation; }
namespace System { class Action; }

#define FKLAIBAHKCF_PCHPLNNOGAF_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x14ADA300)
#define FKLAIBAHKCF_PCHPLNNOGAF__CTOR_OFFSET UNITYSDK_OFFSET(0x14AD9AD0)

inline static constexpr unsigned int FKLAIBAHKCF_PCHPLNNOGAF_TypeDefinitionIndex = 57194;

class FKLAIBAHKCF_PCHPLNNOGAF : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::Foundation::AssetPath PJNJFACFJHP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLAIBAHKCF_PCHPLNNOGAF__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigAttackDistanceAttenuation* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAttackDistanceAttenuation*))((::PBYTE)hIl2Cpp + FKLAIBAHKCF_PCHPLNNOGAF_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
