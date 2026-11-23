#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/CameraPostEffectSystem/VolumeDataBase.h"

namespace TA::CameraPostEffectSystem { class CustomPPMatBaseData; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class VolumeComponent; }

#define TA_CAMERAPOSTEFFECTSYSTEM_CUSTOMPPMATPASSVOLUMEDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x28C4EF0)
#define TA_CAMERAPOSTEFFECTSYSTEM_CUSTOMPPMATPASSVOLUMEDATA_COPYFROM_OFFSET UNITYSDK_OFFSET(0x28C4F60)
#define TA_CAMERAPOSTEFFECTSYSTEM_CUSTOMPPMATPASSVOLUMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x276AAD0)

namespace TA::CameraPostEffectSystem
{
	inline static constexpr unsigned int CustomPPMatPassVolumeData_TypeDefinitionIndex = 16309;

	class CustomPPMatPassVolumeData : public ::TA::CameraPostEffectSystem::VolumeDataBase
	{
	public:
		::System::Boolean Open; // 0x10
		::System::Byte _padding0[0x7];
		::UnityEngine::Material* SampleMat; // 0x18
		::System::Boolean SampleMatNeedColorSample; // 0x20
		::System::Boolean SampleMatUseHalfSource; // 0x21
		::System::Byte _padding1[0x2];
		::System::Int32 CustomPassIndex; // 0x24
		::Il2CppArray<::TA::CameraPostEffectSystem::CustomPPMatBaseData*>* MatDatas; // 0x28

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_CAMERAPOSTEFFECTSYSTEM_CUSTOMPPMATPASSVOLUMEDATA_CLEAR_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_CAMERAPOSTEFFECTSYSTEM_CUSTOMPPMATPASSVOLUMEDATA__CTOR_OFFSET))(this);
		}

		::System::Void CopyFrom(::UnityEngine::Rendering::VolumeComponent* BEEE7A5A60941632)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeComponent*))((::PBYTE)hIl2Cpp + TA_CAMERAPOSTEFFECTSYSTEM_CUSTOMPPMATPASSVOLUMEDATA_COPYFROM_OFFSET))(this, BEEE7A5A60941632);
		}
	};
}
