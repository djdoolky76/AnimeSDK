#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A8B07A588EBDED16.h"

namespace ABC::CustomRenderPipeline { class MotionBlur; }
namespace TA::CameraPostEffectSystem { class VolumeDataBase; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering { class VolumeComponent; }

#define FCB5638443F1071F_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x28CD670)
#define FCB5638443F1071F_AB63E4FCA9FE995B_OFFSET UNITYSDK_OFFSET(0x28CCDF0)
#define FCB5638443F1071F_E0583C67B2722B88_OFFSET UNITYSDK_OFFSET(0x28CD020)
#define FCB5638443F1071F_E096355BB294D1ED_OFFSET UNITYSDK_OFFSET(0x18249B0)
#define FCB5638443F1071F_E2AB669FA28D392E_OFFSET UNITYSDK_OFFSET(0x28CD4B0)
#define FCB5638443F1071F_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x28CD450)
#define FCB5638443F1071F__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FCB5638443F1071F_TypeDefinitionIndex = 16353;

class FCB5638443F1071F : public ::A8B07A588EBDED16
{
public:
	::ABC::CustomRenderPipeline::MotionBlur* ECC02D479B4840EE; // 0x40

	::System::Void A1E97155B145443C(::UnityEngine::Rendering::Volume* B44B351D79166B65)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + FCB5638443F1071F_A1E97155B145443C_OFFSET))(this, B44B351D79166B65);
	}

	::System::Void AB63E4FCA9FE995B(::TA::CameraPostEffectSystem::VolumeDataBase* F220A2D27F7C6B6C)
	{
		return ((::System::Void(*)(::PVOID, ::TA::CameraPostEffectSystem::VolumeDataBase*))((::PBYTE)hIl2Cpp + FCB5638443F1071F_AB63E4FCA9FE995B_OFFSET))(this, F220A2D27F7C6B6C);
	}

	::UnityEngine::Rendering::VolumeComponent* E096355BB294D1ED()
	{
		return ((::UnityEngine::Rendering::VolumeComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCB5638443F1071F_E096355BB294D1ED_OFFSET))(this);
	}

	::System::Void E0583C67B2722B88(::System::Single AD78C8EF4081E0D4, ::TA::CameraPostEffectSystem::VolumeDataBase* EC867F4360A15CE3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::TA::CameraPostEffectSystem::VolumeDataBase*))((::PBYTE)hIl2Cpp + FCB5638443F1071F_E0583C67B2722B88_OFFSET))(this, AD78C8EF4081E0D4, EC867F4360A15CE3);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCB5638443F1071F_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCB5638443F1071F__CTOR_OFFSET))(this);
	}

	::TA::CameraPostEffectSystem::VolumeDataBase* E2AB669FA28D392E()
	{
		return ((::TA::CameraPostEffectSystem::VolumeDataBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCB5638443F1071F_E2AB669FA28D392E_OFFSET))(this);
	}
};
