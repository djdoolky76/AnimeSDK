#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class NCKIOAOLDCL;
namespace MoleMole::Config { class ConfigCameraCutscenes; }

#define NCKIOAOLDCL_IJKIOIEFMEO_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x12FDE220)
#define NCKIOAOLDCL_IJKIOIEFMEO__CTOR_OFFSET UNITYSDK_OFFSET(0x12FDE210)

inline static constexpr unsigned int NCKIOAOLDCL_IJKIOIEFMEO_TypeDefinitionIndex = 53839;

class NCKIOAOLDCL_IJKIOIEFMEO : public ::System::Object
{
public:
	::Foundation::AssetPath CJBJONJDOLI; // 0x10
	::NCKIOAOLDCL* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKIOAOLDCL_IJKIOIEFMEO__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::ConfigCameraCutscenes* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraCutscenes*))((::PBYTE)hIl2Cpp + NCKIOAOLDCL_IJKIOIEFMEO_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
