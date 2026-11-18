#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class LIKCIDFFNMM_BHKPAPCFIHG;
namespace MoleMole::Config { class ConfigCameraCutscenes; }

#define LIKCIDFFNMM_EBLBFEFLHHG_OAALJJGEIOF_OFFSET UNITYSDK_OFFSET(0x15660E50)
#define LIKCIDFFNMM_EBLBFEFLHHG__CTOR_OFFSET UNITYSDK_OFFSET(0x15660E40)

inline static constexpr unsigned int LIKCIDFFNMM_EBLBFEFLHHG_TypeDefinitionIndex = 43018;

class LIKCIDFFNMM_EBLBFEFLHHG : public ::System::Object
{
public:
	::LIKCIDFFNMM_BHKPAPCFIHG* FGBNBFHOKAA; // 0x10
	::Foundation::AssetPath OIIHCACKLHD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_EBLBFEFLHHG__CTOR_OFFSET))(this);
	}

	::System::Void OAALJJGEIOF(::MoleMole::Config::ConfigCameraCutscenes* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraCutscenes*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_EBLBFEFLHHG_OAALJJGEIOF_OFFSET))(this, DFMKILICPFB);
	}
};
