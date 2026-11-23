#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A8B07A588EBDED16.h"

namespace ABC::CustomRenderPipeline { class RadialBlur; }
namespace TA::CameraPostEffectSystem { class VolumeDataBase; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering { class VolumeComponent; }

#define EE32DD387E1C5200_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x28A9880)
#define EE32DD387E1C5200_AB63E4FCA9FE995B_OFFSET UNITYSDK_OFFSET(0x28A8AA0)
#define EE32DD387E1C5200_E0583C67B2722B88_OFFSET UNITYSDK_OFFSET(0x28A8E10)
#define EE32DD387E1C5200_E096355BB294D1ED_OFFSET UNITYSDK_OFFSET(0x18249B0)
#define EE32DD387E1C5200_E2AB669FA28D392E_OFFSET UNITYSDK_OFFSET(0x28A9590)
#define EE32DD387E1C5200_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x28A9530)
#define EE32DD387E1C5200__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int EE32DD387E1C5200_TypeDefinitionIndex = 16247;

class EE32DD387E1C5200 : public ::A8B07A588EBDED16
{
public:
	::ABC::CustomRenderPipeline::RadialBlur* EF1F6C8F6FA491DB; // 0x40

	::TA::CameraPostEffectSystem::VolumeDataBase* E2AB669FA28D392E()
	{
		return ((::TA::CameraPostEffectSystem::VolumeDataBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + EE32DD387E1C5200_E2AB669FA28D392E_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EE32DD387E1C5200__CTOR_OFFSET))(this);
	}

	::System::Void AB63E4FCA9FE995B(::TA::CameraPostEffectSystem::VolumeDataBase* F220A2D27F7C6B6C)
	{
		return ((::System::Void(*)(::PVOID, ::TA::CameraPostEffectSystem::VolumeDataBase*))((::PBYTE)hIl2Cpp + EE32DD387E1C5200_AB63E4FCA9FE995B_OFFSET))(this, F220A2D27F7C6B6C);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EE32DD387E1C5200_FCC7443573DD0222_OFFSET))(this);
	}

	::UnityEngine::Rendering::VolumeComponent* E096355BB294D1ED()
	{
		return ((::UnityEngine::Rendering::VolumeComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + EE32DD387E1C5200_E096355BB294D1ED_OFFSET))(this);
	}

	::System::Void E0583C67B2722B88(::System::Single AD78C8EF4081E0D4, ::TA::CameraPostEffectSystem::VolumeDataBase* EC867F4360A15CE3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::TA::CameraPostEffectSystem::VolumeDataBase*))((::PBYTE)hIl2Cpp + EE32DD387E1C5200_E0583C67B2722B88_OFFSET))(this, AD78C8EF4081E0D4, EC867F4360A15CE3);
	}

	::System::Void A1E97155B145443C(::UnityEngine::Rendering::Volume* B44B351D79166B65)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + EE32DD387E1C5200_A1E97155B145443C_OFFSET))(this, B44B351D79166B65);
	}
};
