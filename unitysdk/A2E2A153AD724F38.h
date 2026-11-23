#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A8B07A588EBDED16.h"

namespace ABC::CustomRenderPipeline { class CustomPPMatPass; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace TA::CameraPostEffectSystem { class CustomPPMatBaseData; }
namespace TA::CameraPostEffectSystem { class VolumeDataBase; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering { class VolumeComponent; }

#define A2E2A153AD724F38_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x28C5BF0)
#define A2E2A153AD724F38_AB63E4FCA9FE995B_OFFSET UNITYSDK_OFFSET(0x28C5110)
#define A2E2A153AD724F38_AD3EC9B3CC1D2AC8_OFFSET UNITYSDK_OFFSET(0x28C5B10)
#define A2E2A153AD724F38_AE33BB96FC8C13CA_OFFSET UNITYSDK_OFFSET(0x28C5820)
#define A2E2A153AD724F38_AF0B454B3DDC8AD6_OFFSET UNITYSDK_OFFSET(0x28C5550)
#define A2E2A153AD724F38_E0583C67B2722B88_OFFSET UNITYSDK_OFFSET(0x28C54A0)
#define A2E2A153AD724F38_E096355BB294D1ED_OFFSET UNITYSDK_OFFSET(0x18249B0)
#define A2E2A153AD724F38_E2AB669FA28D392E_OFFSET UNITYSDK_OFFSET(0x28C5950)
#define A2E2A153AD724F38_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x28C58D0)
#define A2E2A153AD724F38__CTOR_OFFSET UNITYSDK_OFFSET(0x28C5D40)

inline static constexpr unsigned int A2E2A153AD724F38_TypeDefinitionIndex = 16342;

class A2E2A153AD724F38 : public ::A8B07A588EBDED16
{
public:
	::ABC::CustomRenderPipeline::CustomPPMatPass* A69815951698275C; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* BBF5B9EB389CD91D; // 0x48

	::System::Void E0583C67B2722B88(::System::Single AD78C8EF4081E0D4, ::TA::CameraPostEffectSystem::VolumeDataBase* EC867F4360A15CE3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::TA::CameraPostEffectSystem::VolumeDataBase*))((::PBYTE)hIl2Cpp + A2E2A153AD724F38_E0583C67B2722B88_OFFSET))(this, AD78C8EF4081E0D4, EC867F4360A15CE3);
	}

	::System::Int32 AD3EC9B3CC1D2AC8(::System::String* E0860F033D7E626C)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A2E2A153AD724F38_AD3EC9B3CC1D2AC8_OFFSET))(this, E0860F033D7E626C);
	}

	::System::Void AE33BB96FC8C13CA(::Il2CppArray<::TA::CameraPostEffectSystem::CustomPPMatBaseData*>* FD0C96F4F31FC961)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::TA::CameraPostEffectSystem::CustomPPMatBaseData*>*))((::PBYTE)hIl2Cpp + A2E2A153AD724F38_AE33BB96FC8C13CA_OFFSET))(this, FD0C96F4F31FC961);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A2E2A153AD724F38_FCC7443573DD0222_OFFSET))(this);
	}

	::TA::CameraPostEffectSystem::VolumeDataBase* E2AB669FA28D392E()
	{
		return ((::TA::CameraPostEffectSystem::VolumeDataBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + A2E2A153AD724F38_E2AB669FA28D392E_OFFSET))(this);
	}

	::System::Void A1E97155B145443C(::UnityEngine::Rendering::Volume* B44B351D79166B65)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + A2E2A153AD724F38_A1E97155B145443C_OFFSET))(this, B44B351D79166B65);
	}

	::System::Void AB63E4FCA9FE995B(::TA::CameraPostEffectSystem::VolumeDataBase* F220A2D27F7C6B6C)
	{
		return ((::System::Void(*)(::PVOID, ::TA::CameraPostEffectSystem::VolumeDataBase*))((::PBYTE)hIl2Cpp + A2E2A153AD724F38_AB63E4FCA9FE995B_OFFSET))(this, F220A2D27F7C6B6C);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A2E2A153AD724F38__CTOR_OFFSET))(this);
	}

	::System::Void AF0B454B3DDC8AD6(::TA::CameraPostEffectSystem::CustomPPMatBaseData* B4BE79FDE44A1EB2)
	{
		return ((::System::Void(*)(::PVOID, ::TA::CameraPostEffectSystem::CustomPPMatBaseData*))((::PBYTE)hIl2Cpp + A2E2A153AD724F38_AF0B454B3DDC8AD6_OFFSET))(this, B4BE79FDE44A1EB2);
	}

	::UnityEngine::Rendering::VolumeComponent* E096355BB294D1ED()
	{
		return ((::UnityEngine::Rendering::VolumeComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + A2E2A153AD724F38_E096355BB294D1ED_OFFSET))(this);
	}
};
