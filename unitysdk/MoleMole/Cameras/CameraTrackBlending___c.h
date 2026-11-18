#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CAMERAS_CAMERATRACKBLENDING___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFA8BC80)
#define MOLEMOLE_CAMERAS_CAMERATRACKBLENDING___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFA8BCC0)
#define MOLEMOLE_CAMERAS_CAMERATRACKBLENDING___C__GENERATEBLENDERBUILDER_B__4_1_OFFSET UNITYSDK_OFFSET(0xFA8BD30)
#define MOLEMOLE_CAMERAS_CAMERATRACKBLENDING___C__GENERATECUTBUILDER_B__2_0_OFFSET UNITYSDK_OFFSET(0xFA8BCD0)
#define MOLEMOLE_CAMERAS_CAMERATRACKBLENDING___C__GENERATECUTBUILDER_B__2_1_OFFSET UNITYSDK_OFFSET(0xFA8BD20)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraTrackBlending___c_TypeDefinitionIndex = 64995;

	class CameraTrackBlending___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__2_1()
		{
			return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(CameraTrackBlending___c_TypeDefinitionIndex)->GetStaticField(0x34350);
		}
		static ::System::Func_2<::PipelineCamera::ICameraDataBlender*, ::PipelineCamera::ICameraDataBlender*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::PipelineCamera::ICameraDataBlender*, ::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(CameraTrackBlending___c_TypeDefinitionIndex)->GetStaticField(0x34358);
		}
		static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__4_1()
		{
			return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(CameraTrackBlending___c_TypeDefinitionIndex)->GetStaticField(0x34360);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CameraTrackBlending___c_TypeDefinitionIndex)->GetStaticField(0x34368);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKBLENDING___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKBLENDING___C__CTOR_OFFSET))(this);
		}

		::PipelineCamera::ICameraDataBlender* _GenerateCutBuilder_b__2_0(::PipelineCamera::ICameraDataBlender* _)
		{
			return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKBLENDING___C__GENERATECUTBUILDER_B__2_0_OFFSET))(this, _);
		}

		::System::Void _GenerateCutBuilder_b__2_1(::PipelineCamera::ICameraDataBlender* _)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKBLENDING___C__GENERATECUTBUILDER_B__2_1_OFFSET))(this, _);
		}

		::System::Void _GenerateBlenderBuilder_b__4_1(::PipelineCamera::ICameraDataBlender* _)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKBLENDING___C__GENERATEBLENDERBUILDER_B__4_1_OFFSET))(this, _);
		}
	};
}
