#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }

#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GETMOVEMENTMAG_OFFSET UNITYSDK_OFFSET(0xE122710)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GETPOSITION_OFFSET UNITYSDK_OFFSET(0xE122800)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GET_HASVALIDTARGET_OFFSET UNITYSDK_OFFSET(0xE1226B0)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GET_NEEDREFRESHDATA_OFFSET UNITYSDK_OFFSET(0xE123550)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GET_PLAYERCMP_OFFSET UNITYSDK_OFFSET(0xE122100)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_NEXTGENERATION_OFFSET UNITYSDK_OFFSET(0xE124110)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_ONCROWDMAINCONTROLTARGETCHANGED_OFFSET UNITYSDK_OFFSET(0xE123D80)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE123930)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_ONINIT_OFFSET UNITYSDK_OFFSET(0xE123560)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_ONLOCALAVATARCHANGE_OFFSET UNITYSDK_OFFSET(0xE123BB0)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0xE1228C0)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_REFRESHLOCALAVATARPOSE_OFFSET UNITYSDK_OFFSET(0xE122E90)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_REFRESHPLAYERCMP_OFFSET UNITYSDK_OFFSET(0xE122160)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_TRYGETLOCALAVATARPOSE_OFFSET UNITYSDK_OFFSET(0xE122E00)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_TRYGETLOCALAVATARPOSITION_OFFSET UNITYSDK_OFFSET(0xE122B30)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_TRYGETMAINCONTROLPOSITION_OFFSET UNITYSDK_OFFSET(0xE122A70)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT__CTOR_OFFSET UNITYSDK_OFFSET(0xE124160)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdPlayerAgent_TypeDefinitionIndex = 39638;

	class NPCCrowdPlayerAgent : public ::System::Object
	{
	public:
		::MoleMole::Battle::Entity* _mainControlEntity; // 0x10
		::GEIHCPAOKKK* _playerCmp; // 0x18
		::System::Boolean localAvatarPoseValid; // 0x20
		::System::Boolean forceLocalAvatarGeneration; // 0x21
		::System::Boolean _followLocalAvatar; // 0x22
		::System::Byte _padding0[0x1];
		::System::Int32 localAvatarTargetGeneration; // 0x24
		::System::Int32 lastUpdateFrame; // 0x28
		::UnityEngine::Vector3 lastPos; // 0x2C
		::System::Int32 localAvatarPoseFrame; // 0x38
		::System::Int32 localAvatarTargetInstanceId; // 0x3C
		::UnityEngine::Vector3 curPos; // 0x40
		::UnityEngine::Vector3 localAvatarPos; // 0x4C
		::UnityEngine::Vector3 localAvatarForward; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT__CTOR_OFFSET))(this);
		}

		::GEIHCPAOKKK* get_playerCmp()
		{
			return ((::GEIHCPAOKKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GET_PLAYERCMP_OFFSET))(this);
		}

		::System::Boolean get_HasValidTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GET_HASVALIDTARGET_OFFSET))(this);
		}

		::System::Single GetMovementMag()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GETMOVEMENTMAG_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GETPOSITION_OFFSET))(this);
		}

		::System::Boolean TryGetMainControlPosition(::UnityEngine::Vector3& position)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_TRYGETMAINCONTROLPOSITION_OFFSET))(this, position);
		}

		::System::Boolean TryGetLocalAvatarPosition(::UnityEngine::Vector3& position)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_TRYGETLOCALAVATARPOSITION_OFFSET))(this, position);
		}

		::System::Boolean TryGetLocalAvatarPose(::UnityEngine::Vector3& position, ::UnityEngine::Vector3& forward, ::System::Int32& generation)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_TRYGETLOCALAVATARPOSE_OFFSET))(this, position, forward, generation);
		}

		::System::Boolean get_NeedRefreshData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GET_NEEDREFRESHDATA_OFFSET))(this);
		}

		::System::Void RefreshData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_REFRESHDATA_OFFSET))(this);
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_ONINIT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_ONDESTROY_OFFSET))(this);
		}

		::System::Void RefreshPlayerCmp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_REFRESHPLAYERCMP_OFFSET))(this);
		}

		::System::Void OnLocalAvatarChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_ONLOCALAVATARCHANGE_OFFSET))(this, args);
		}

		::System::Void OnCrowdMainControlTargetChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_ONCROWDMAINCONTROLTARGETCHANGED_OFFSET))(this, args);
		}

		::System::Void RefreshLocalAvatarPose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_REFRESHLOCALAVATARPOSE_OFFSET))(this);
		}

		static ::System::Int32 NextGeneration(::System::Int32 generation)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_NEXTGENERATION_OFFSET))(generation);
		}
	};
}
