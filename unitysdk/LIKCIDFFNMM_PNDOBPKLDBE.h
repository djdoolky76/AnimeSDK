#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class LIKCIDFFNMM_KJOAHIGBLJN;
namespace MoleMole::Config { class ConfigCameraShakes; }

#define LIKCIDFFNMM_PNDOBPKLDBE_CGOBMPLJEFF_OFFSET UNITYSDK_OFFSET(0x1518CD80)
#define LIKCIDFFNMM_PNDOBPKLDBE__CTOR_OFFSET UNITYSDK_OFFSET(0x1518CD70)

inline static constexpr unsigned int LIKCIDFFNMM_PNDOBPKLDBE_TypeDefinitionIndex = 43017;

class LIKCIDFFNMM_PNDOBPKLDBE : public ::System::Object
{
public:
	::Foundation::AssetPath OIIHCACKLHD; // 0x10
	::LIKCIDFFNMM_KJOAHIGBLJN* FGBNBFHOKAA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_PNDOBPKLDBE__CTOR_OFFSET))(this);
	}

	::System::Void CGOBMPLJEFF(::MoleMole::Config::ConfigCameraShakes* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraShakes*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_PNDOBPKLDBE_CGOBMPLJEFF_OFFSET))(this, DFMKILICPFB);
	}
};
