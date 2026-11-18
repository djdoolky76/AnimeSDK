#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLevelEndPerforms; }
namespace System { class Action; }

#define KCEKFHKICNP_CKDCICDBEHP_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x18609900)
#define KCEKFHKICNP_CKDCICDBEHP__CTOR_OFFSET UNITYSDK_OFFSET(0x186098F0)

inline static constexpr unsigned int KCEKFHKICNP_CKDCICDBEHP_TypeDefinitionIndex = 72376;

class KCEKFHKICNP_CKDCICDBEHP : public ::System::Object
{
public:
	::Foundation::AssetPath PJNJFACFJHP; // 0x10
	::System::Action* IBNICCGMILF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEKFHKICNP_CKDCICDBEHP__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigLevelEndPerforms* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLevelEndPerforms*))((::PBYTE)hIl2Cpp + KCEKFHKICNP_CKDCICDBEHP_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
