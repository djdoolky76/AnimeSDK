#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A8B07A588EBDED16.h"

namespace ABC::CustomRenderPipeline { class ColorGrading; }
namespace TA::CameraPostEffectSystem { class VolumeDataBase; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering { class VolumeComponent; }

#define B3A108D7513FBC27_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x286EEE0)
#define B3A108D7513FBC27_AB63E4FCA9FE995B_OFFSET UNITYSDK_OFFSET(0x286E400)
#define B3A108D7513FBC27_E0583C67B2722B88_OFFSET UNITYSDK_OFFSET(0x286E740)
#define B3A108D7513FBC27_E096355BB294D1ED_OFFSET UNITYSDK_OFFSET(0x18249B0)
#define B3A108D7513FBC27_E2AB669FA28D392E_OFFSET UNITYSDK_OFFSET(0x286ED20)
#define B3A108D7513FBC27_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x286ECC0)
#define B3A108D7513FBC27__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B3A108D7513FBC27_TypeDefinitionIndex = 16119;

class B3A108D7513FBC27 : public ::A8B07A588EBDED16
{
public:
	::ABC::CustomRenderPipeline::ColorGrading* ADDE55778A40E546; // 0x40

	::System::Void AB63E4FCA9FE995B(::TA::CameraPostEffectSystem::VolumeDataBase* F220A2D27F7C6B6C)
	{
		return ((::System::Void(*)(::PVOID, ::TA::CameraPostEffectSystem::VolumeDataBase*))((::PBYTE)hIl2Cpp + B3A108D7513FBC27_AB63E4FCA9FE995B_OFFSET))(this, F220A2D27F7C6B6C);
	}

	::UnityEngine::Rendering::VolumeComponent* E096355BB294D1ED()
	{
		return ((::UnityEngine::Rendering::VolumeComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + B3A108D7513FBC27_E096355BB294D1ED_OFFSET))(this);
	}

	::TA::CameraPostEffectSystem::VolumeDataBase* E2AB669FA28D392E()
	{
		return ((::TA::CameraPostEffectSystem::VolumeDataBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + B3A108D7513FBC27_E2AB669FA28D392E_OFFSET))(this);
	}

	::System::Void A1E97155B145443C(::UnityEngine::Rendering::Volume* B44B351D79166B65)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + B3A108D7513FBC27_A1E97155B145443C_OFFSET))(this, B44B351D79166B65);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B3A108D7513FBC27__CTOR_OFFSET))(this);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B3A108D7513FBC27_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void E0583C67B2722B88(::System::Single AD78C8EF4081E0D4, ::TA::CameraPostEffectSystem::VolumeDataBase* EC867F4360A15CE3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::TA::CameraPostEffectSystem::VolumeDataBase*))((::PBYTE)hIl2Cpp + B3A108D7513FBC27_E0583C67B2722B88_OFFSET))(this, AD78C8EF4081E0D4, EC867F4360A15CE3);
	}
};
