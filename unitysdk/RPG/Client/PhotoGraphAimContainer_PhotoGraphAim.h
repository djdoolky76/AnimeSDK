#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PhotoGraphAimUnionNodeType.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class SmoothMask; }

#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM_CTOR_OFFSET UNITYSDK_OFFSET(0xE54C930)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM_SWITCHTONORMAL_OFFSET UNITYSDK_OFFSET(0xE54DA10)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM_SWITCHTOSUCCESS_OFFSET UNITYSDK_OFFSET(0xE54DAF0)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphAimContainer_PhotoGraphAim_TypeDefinitionIndex = 71382;

	class PhotoGraphAimContainer_PhotoGraphAim : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* TargetEntity; // 0x10
		::UnityEngine::Transform* NodeFail; // 0x18
		::UnityEngine::Collider* TargetCollider; // 0x20
		::UnityEngine::Transform* NodeSuccess; // 0x28
		::UnityEngine::RectTransform* RectPending; // 0x30
		::UnityEngine::RectTransform* Rect; // 0x38
		::UnityEngine::Animation* AnimationBg; // 0x40
		::UnityEngine::UI::Image* NodeImage; // 0x48
		::UnityEngine::UI::SmoothMask* ProgressSM; // 0x50
		::UnityEngine::Animation* AnimationPending; // 0x58
		::UnityEngine::Transform* TargetTransform; // 0x60
		::UnityEngine::GameObject* PendingAimGO; // 0x68
		::UnityEngine::GameObject* ManualAimGO; // 0x70
		::UnityEngine::Transform* NodeStatus; // 0x78
		::System::Int32 HandlerIndex; // 0x80
		::System::Single ShowTagDirRange; // 0x84
		::UnityEngine::Vector3 ExtraAimTagOffset; // 0x88
		::RPG::GameCore::PhotoGraphAimIdentifyType IdentifyType; // 0x94
		::RPG::Client::PhotoGraphAimUnionNodeType AimNodeType; // 0x98
		::System::Int32 UnionNodeUnitIndex; // 0x9C
		::System::Int32 UnionIndex; // 0xA0
		::UnityEngine::Vector3 WorldPos; // 0xA4
		::System::Boolean UseAimUnion; // 0xB0
		::System::Boolean _IsSuccessStyle; // 0xB1
		::System::Boolean ShowTag; // 0xB2
		::System::Boolean IsInUse; // 0xB3
		::System::Int32 UnionNodeIndex; // 0xB4
		::UnityEngine::Vector3 TransformOffset; // 0xB8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM_CTOR_OFFSET))(this);
		}

		::System::Void SwitchToNormal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM_SWITCHTONORMAL_OFFSET))(this);
		}

		::System::Void SwitchToSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM_SWITCHTOSUCCESS_OFFSET))(this);
		}

	};
}
