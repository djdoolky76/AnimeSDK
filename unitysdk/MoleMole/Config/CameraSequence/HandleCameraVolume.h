#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CoreDataSequence.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace MoleMole { class AdvancedCollisionConfigData; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET UNITYSDK_OFFSET(0x18B8D230)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x18B8D2A0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_DOMCFKKMFEK_OFFSET UNITYSDK_OFFSET(0x18B8DBA0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_GETRATESCALE_OFFSET UNITYSDK_OFFSET(0x18B8D450)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_GETSEQUENCEDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x18B8D4F0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_GETSEQUENCELENGTH_OFFSET UNITYSDK_OFFSET(0x18B8D400)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x18B8D4E0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_ISLOOP_OFFSET UNITYSDK_OFFSET(0x18B8D4A0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_LFLKMPLFIME_OFFSET UNITYSDK_OFFSET(0x18B8DC50)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B8DB20)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x18B8DAC0)

namespace MoleMole::Config::CameraSequence
{
	inline static constexpr unsigned int HandleCameraVolume_TypeDefinitionIndex = 86235;

	class HandleCameraVolume : public ::PipelineCamera::CameraSequence::CoreDataSequence
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_CollisionData()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(HandleCameraVolume_TypeDefinitionIndex)->GetStaticField(0x10530);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_NearClipPlane()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(HandleCameraVolume_TypeDefinitionIndex)->GetStaticField(0x10538);
		}
		::System::Single playLength; // 0x18
		::System::Single NearClipPlane; // 0x1C
		::MoleMole::AdvancedCollisionConfigData* CollisionData; // 0x20
		::System::Boolean HandleLineOfSightCollision; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME__CCTOR_OFFSET))();
		}

		::System::Void BuildRuntimeDataProviderDataPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET))(this);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector KFJNBMIFJNC)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_COLLECTVARIABLE_OFFSET))(this, KFJNBMIFJNC);
		}

		::System::Single GetSequenceLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_GETSEQUENCELENGTH_OFFSET))(this);
		}

		::System::Single GetRateScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_GETRATESCALE_OFFSET))(this);
		}

		::System::Boolean IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_ISLOOP_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData GetSequenceDataInternal(::System::Single NMJENEBEBAB, ::PipelineCamera::WorldBasicCameraData& LJBPECKCCEA, ::PipelineCamera::CameraSequence::CameraSequenceContext*& AAOCANGHBDG)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_GETSEQUENCEDATAINTERNAL_OFFSET))(this, NMJENEBEBAB, LJBPECKCCEA, AAOCANGHBDG);
		}

		::System::Single DOMCFKKMFEK(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_DOMCFKKMFEK_OFFSET))(this, AAOCANGHBDG);
		}

		::MoleMole::AdvancedCollisionConfigData* LFLKMPLFIME(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::MoleMole::AdvancedCollisionConfigData*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_LFLKMPLFIME_OFFSET))(this, AAOCANGHBDG);
		}
	};
}
