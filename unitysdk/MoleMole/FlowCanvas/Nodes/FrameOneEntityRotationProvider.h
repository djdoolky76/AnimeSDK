#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x10D09DB0)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_DBGONPGOBOH_OFFSET UNITYSDK_OFFSET(0x10D0A870)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_FAJBAMPHKNA_OFFSET UNITYSDK_OFFSET(0x10D0A2D0)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_GETDATA_OFFSET UNITYSDK_OFFSET(0x10D09F50)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x10D0A1C0)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_HDLFCIOLGGL_OFFSET UNITYSDK_OFFSET(0x10D0AA20)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_IEPHBBCGGDO_OFFSET UNITYSDK_OFFSET(0x10D0A960)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_INMGLPLEEIK_OFFSET UNITYSDK_OFFSET(0x10D0A000)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_KHDHDAGABMA_OFFSET UNITYSDK_OFFSET(0x10D0A420)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_KIDNAEDFDFH_OFFSET UNITYSDK_OFFSET(0x10D0A360)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_MFJEEENLADM_OFFSET UNITYSDK_OFFSET(0x10D0AB30)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_SETPATH_OFFSET UNITYSDK_OFFSET(0x10D09D10)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D0A1F0)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x10D0A1D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int FrameOneEntityRotationProvider_TypeDefinitionIndex = 44820;

	class FrameOneEntityRotationProvider
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_LastCameraData()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOneEntityRotationProvider_TypeDefinitionIndex)->GetStaticField(0xCC40);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_roll()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOneEntityRotationProvider_TypeDefinitionIndex)->GetStaticField(0xCC48);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_pitch()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOneEntityRotationProvider_TypeDefinitionIndex)->GetStaticField(0xCC50);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_yaw()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOneEntityRotationProvider_TypeDefinitionIndex)->GetStaticField(0xCC58);
		}
		::System::Boolean overridePitch; // 0x40
		::System::Byte _padding0[0x3];
		::System::Single pitch; // 0x44
		::System::Boolean overrideYaw; // 0x48
		::System::Byte _padding1[0x3];
		::System::Single yaw; // 0x4C
		::System::Boolean overrideRoll; // 0x50
		::System::Byte _padding2[0x3];
		::System::Single roll; // 0x54
		::PipelineCamera::WorldBasicCameraData LastCameraData; // 0x58
		::System::Boolean makeContextDependent; // 0x84
		::System::Boolean useRelativeYaw; // 0x85

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER__CCTOR_OFFSET))();
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& CJBJONJDOLI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_SETPATH_OFFSET))(this, CJBJONJDOLI);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector KFJNBMIFJNC)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_COLLECTVARIABLE_OFFSET))(this, KFJNBMIFJNC);
		}

		::UnityEngine::Quaternion GetData(::System::Single FNIOPKPHDEH, ::PipelineCamera::CameraSequence::CameraSequenceContext*& AAOCANGHBDG, ::System::UInt32 BKLGNCBNEGM, ::Nap::NapECS::EcsWorld* HNGJFALIMGN)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::UInt32, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_GETDATA_OFFSET))(this, FNIOPKPHDEH, AAOCANGHBDG, BKLGNCBNEGM, HNGJFALIMGN);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void FAJBAMPHKNA(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_FAJBAMPHKNA_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Single KIDNAEDFDFH(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_KIDNAEDFDFH_OFFSET))(this, AAOCANGHBDG);
		}

		::UnityEngine::Vector3 KHDHDAGABMA(::PipelineCamera::CameraSequence::CameraSequenceContext*& AAOCANGHBDG)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_KHDHDAGABMA_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void DBGONPGOBOH(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_DBGONPGOBOH_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Single IEPHBBCGGDO(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_IEPHBBCGGDO_OFFSET))(this, AAOCANGHBDG);
		}

		::PipelineCamera::WorldBasicCameraData HDLFCIOLGGL(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_HDLFCIOLGGL_OFFSET))(this, AAOCANGHBDG);
		}

		::UnityEngine::Quaternion INMGLPLEEIK(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG, ::System::UInt32 BKLGNCBNEGM, ::Nap::NapECS::EcsWorld* HNGJFALIMGN)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::System::UInt32, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_INMGLPLEEIK_OFFSET))(this, AAOCANGHBDG, BKLGNCBNEGM, HNGJFALIMGN);
		}

		::System::Single MFJEEENLADM(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_MFJEEENLADM_OFFSET))(this, AAOCANGHBDG);
		}
	};
}
