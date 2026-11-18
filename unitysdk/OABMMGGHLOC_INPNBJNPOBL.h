#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSpecialEffectHitWall; }
namespace System { class Action; }

#define OABMMGGHLOC_INPNBJNPOBL_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x14F4F5E0)
#define OABMMGGHLOC_INPNBJNPOBL__CTOR_OFFSET UNITYSDK_OFFSET(0x14F4F5D0)

inline static constexpr unsigned int OABMMGGHLOC_INPNBJNPOBL_TypeDefinitionIndex = 50045;

class OABMMGGHLOC_INPNBJNPOBL : public ::System::Object
{
public:
	::Foundation::AssetPath PJNJFACFJHP; // 0x10
	::System::Action* IBNICCGMILF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABMMGGHLOC_INPNBJNPOBL__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigSpecialEffectHitWall* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSpecialEffectHitWall*))((::PBYTE)hIl2Cpp + OABMMGGHLOC_INPNBJNPOBL_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
