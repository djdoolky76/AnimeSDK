#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMaterialPropertyModifierMap; }

#define CDLHOGBBAKN_DGEIFIFFNNK_IJHFBCEJLBF_OFFSET UNITYSDK_OFFSET(0x16A127F0)
#define CDLHOGBBAKN_DGEIFIFFNNK__CTOR_OFFSET UNITYSDK_OFFSET(0x16A127E0)

inline static constexpr unsigned int CDLHOGBBAKN_DGEIFIFFNNK_TypeDefinitionIndex = 46177;

class CDLHOGBBAKN_DGEIFIFFNNK : public ::System::Object
{
public:
	::Foundation::AssetPath OIIHCACKLHD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLHOGBBAKN_DGEIFIFFNNK__CTOR_OFFSET))(this);
	}

	::System::Void IJHFBCEJLBF(::MoleMole::Config::ConfigMaterialPropertyModifierMap* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyModifierMap*))((::PBYTE)hIl2Cpp + CDLHOGBBAKN_DGEIFIFFNNK_IJHFBCEJLBF_OFFSET))(this, DFMKILICPFB);
	}
};
