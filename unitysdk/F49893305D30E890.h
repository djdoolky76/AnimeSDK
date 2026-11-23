#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A8B07A588EBDED16.h"

namespace ABC::CustomRenderPipeline { class ChromaticAberration; }
namespace TA::CameraPostEffectSystem { class VolumeDataBase; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering { class VolumeComponent; }

#define F49893305D30E890_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x2855A00)
#define F49893305D30E890_AB63E4FCA9FE995B_OFFSET UNITYSDK_OFFSET(0x28552E0)
#define F49893305D30E890_E0583C67B2722B88_OFFSET UNITYSDK_OFFSET(0x28554B0)
#define F49893305D30E890_E096355BB294D1ED_OFFSET UNITYSDK_OFFSET(0x18249B0)
#define F49893305D30E890_E2AB669FA28D392E_OFFSET UNITYSDK_OFFSET(0x28558A0)
#define F49893305D30E890_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x28557E0)
#define F49893305D30E890__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F49893305D30E890_TypeDefinitionIndex = 16061;

class F49893305D30E890 : public ::A8B07A588EBDED16
{
public:
	::ABC::CustomRenderPipeline::ChromaticAberration* BD8B6D2938FD3811; // 0x40

	::System::Void AB63E4FCA9FE995B(::TA::CameraPostEffectSystem::VolumeDataBase* F220A2D27F7C6B6C)
	{
		return ((::System::Void(*)(::PVOID, ::TA::CameraPostEffectSystem::VolumeDataBase*))((::PBYTE)hIl2Cpp + F49893305D30E890_AB63E4FCA9FE995B_OFFSET))(this, F220A2D27F7C6B6C);
	}

	::System::Void A1E97155B145443C(::UnityEngine::Rendering::Volume* B44B351D79166B65)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + F49893305D30E890_A1E97155B145443C_OFFSET))(this, B44B351D79166B65);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F49893305D30E890_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void E0583C67B2722B88(::System::Single AD78C8EF4081E0D4, ::TA::CameraPostEffectSystem::VolumeDataBase* EC867F4360A15CE3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::TA::CameraPostEffectSystem::VolumeDataBase*))((::PBYTE)hIl2Cpp + F49893305D30E890_E0583C67B2722B88_OFFSET))(this, AD78C8EF4081E0D4, EC867F4360A15CE3);
	}

	::TA::CameraPostEffectSystem::VolumeDataBase* E2AB669FA28D392E()
	{
		return ((::TA::CameraPostEffectSystem::VolumeDataBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + F49893305D30E890_E2AB669FA28D392E_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F49893305D30E890__CTOR_OFFSET))(this);
	}

	::UnityEngine::Rendering::VolumeComponent* E096355BB294D1ED()
	{
		return ((::UnityEngine::Rendering::VolumeComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + F49893305D30E890_E096355BB294D1ED_OFFSET))(this);
	}
};
