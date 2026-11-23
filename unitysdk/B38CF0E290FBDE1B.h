#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A8B07A588EBDED16.h"

namespace ABC::CustomRenderPipeline { class DOF; }
namespace TA::CameraPostEffectSystem { class VolumeDataBase; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering { class VolumeComponent; }

#define B38CF0E290FBDE1B_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x289CDE0)
#define B38CF0E290FBDE1B_AB63E4FCA9FE995B_OFFSET UNITYSDK_OFFSET(0x289BF30)
#define B38CF0E290FBDE1B_E0583C67B2722B88_OFFSET UNITYSDK_OFFSET(0x289C300)
#define B38CF0E290FBDE1B_E096355BB294D1ED_OFFSET UNITYSDK_OFFSET(0x18249B0)
#define B38CF0E290FBDE1B_E2AB669FA28D392E_OFFSET UNITYSDK_OFFSET(0x289CB20)
#define B38CF0E290FBDE1B_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x289CAC0)
#define B38CF0E290FBDE1B__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B38CF0E290FBDE1B_TypeDefinitionIndex = 16212;

class B38CF0E290FBDE1B : public ::A8B07A588EBDED16
{
public:
	::ABC::CustomRenderPipeline::DOF* BCD71D32553F9872; // 0x40

	::System::Void AB63E4FCA9FE995B(::TA::CameraPostEffectSystem::VolumeDataBase* F220A2D27F7C6B6C)
	{
		return ((::System::Void(*)(::PVOID, ::TA::CameraPostEffectSystem::VolumeDataBase*))((::PBYTE)hIl2Cpp + B38CF0E290FBDE1B_AB63E4FCA9FE995B_OFFSET))(this, F220A2D27F7C6B6C);
	}

	::UnityEngine::Rendering::VolumeComponent* E096355BB294D1ED()
	{
		return ((::UnityEngine::Rendering::VolumeComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + B38CF0E290FBDE1B_E096355BB294D1ED_OFFSET))(this);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B38CF0E290FBDE1B_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void E0583C67B2722B88(::System::Single AD78C8EF4081E0D4, ::TA::CameraPostEffectSystem::VolumeDataBase* EC867F4360A15CE3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::TA::CameraPostEffectSystem::VolumeDataBase*))((::PBYTE)hIl2Cpp + B38CF0E290FBDE1B_E0583C67B2722B88_OFFSET))(this, AD78C8EF4081E0D4, EC867F4360A15CE3);
	}

	::TA::CameraPostEffectSystem::VolumeDataBase* E2AB669FA28D392E()
	{
		return ((::TA::CameraPostEffectSystem::VolumeDataBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + B38CF0E290FBDE1B_E2AB669FA28D392E_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B38CF0E290FBDE1B__CTOR_OFFSET))(this);
	}

	::System::Void A1E97155B145443C(::UnityEngine::Rendering::Volume* B44B351D79166B65)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + B38CF0E290FBDE1B_A1E97155B145443C_OFFSET))(this, B44B351D79166B65);
	}
};
