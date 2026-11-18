#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class HKLPMEAJCLP_IHCIGPALKBL;
namespace MoleMole::Config { class ConfigMaterialPropertyModifierMap; }

#define HKLPMEAJCLP_DBNNJCIFPIL_IJHFBCEJLBF_OFFSET UNITYSDK_OFFSET(0x101198E0)
#define HKLPMEAJCLP_DBNNJCIFPIL__CTOR_OFFSET UNITYSDK_OFFSET(0x101198D0)

inline static constexpr unsigned int HKLPMEAJCLP_DBNNJCIFPIL_TypeDefinitionIndex = 91256;

class HKLPMEAJCLP_DBNNJCIFPIL : public ::System::Object
{
public:
	::Foundation::AssetPath OIIHCACKLHD; // 0x10
	::HKLPMEAJCLP_IHCIGPALKBL* FGBNBFHOKAA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLPMEAJCLP_DBNNJCIFPIL__CTOR_OFFSET))(this);
	}

	::System::Void IJHFBCEJLBF(::MoleMole::Config::ConfigMaterialPropertyModifierMap* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyModifierMap*))((::PBYTE)hIl2Cpp + HKLPMEAJCLP_DBNNJCIFPIL_IJHFBCEJLBF_OFFSET))(this, DFMKILICPFB);
	}
};
