#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA___C_GMDOLJPOMNE_OFFSET UNITYSDK_OFFSET(0x174E3220)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA___C_MLBOFPFMAOF_OFFSET UNITYSDK_OFFSET(0x174E3230)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x174E31D0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x174E3210)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ScopedOverShoulderCamera___c_TypeDefinitionIndex = 51954;

	class ScopedOverShoulderCamera___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__25_1()
		{
			return (::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(ScopedOverShoulderCamera___c_TypeDefinitionIndex)->GetStaticField(0x4A9F0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ScopedOverShoulderCamera___c_TypeDefinitionIndex)->GetStaticField(0x4A9F8);
		}
		static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__26_3()
		{
			return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(ScopedOverShoulderCamera___c_TypeDefinitionIndex)->GetStaticField(0x4AA00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA___C__CTOR_OFFSET))(this);
		}

		::System::Void GMDOLJPOMNE(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA___C_GMDOLJPOMNE_OFFSET))(this, PIIPCLCCOIG);
		}

		::System::Void MLBOFPFMAOF(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA___C_MLBOFPFMAOF_OFFSET))(this, FKMJKPGNCJI);
		}
	};
}
