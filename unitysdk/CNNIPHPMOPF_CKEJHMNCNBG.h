#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityAttackEffectNames; }
namespace System { class Action; }

#define CNNIPHPMOPF_CKEJHMNCNBG_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x13E16180)
#define CNNIPHPMOPF_CKEJHMNCNBG__CTOR_OFFSET UNITYSDK_OFFSET(0x13E16170)

inline static constexpr unsigned int CNNIPHPMOPF_CKEJHMNCNBG_TypeDefinitionIndex = 60861;

class CNNIPHPMOPF_CKEJHMNCNBG : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::Foundation::AssetPath PJNJFACFJHP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNIPHPMOPF_CKEJHMNCNBG__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigEntityAttackEffectNames* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAttackEffectNames*))((::PBYTE)hIl2Cpp + CNNIPHPMOPF_CKEJHMNCNBG_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
