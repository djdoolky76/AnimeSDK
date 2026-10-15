#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class FollowRotate; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class PropSetFollowRotate; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class GameObject; }

#define MAJBOCOKHJH_CTOR_OFFSET UNITYSDK_OFFSET(0xB848870)
#define MAJBOCOKHJH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8488A0)
#define MAJBOCOKHJH_MAOMBHJOFBD_OFFSET UNITYSDK_OFFSET(0xB848E80)
#define MAJBOCOKHJH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB848A70)

inline static constexpr unsigned int MAJBOCOKHJH_TypeDefinitionIndex = 53182;

	class MAJBOCOKHJH
	{
	public:
		::RPG::Client::FollowRotate* OIDJLMDFALJ; // 0x28
		::System::Boolean LIAOBNHFODI; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropSetFollowRotate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropSetFollowRotate*))((::PBYTE)hIl2Cpp + MAJBOCOKHJH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJBOCOKHJH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJBOCOKHJH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void MAOMBHJOFBD(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + MAJBOCOKHJH_MAOMBHJOFBD_OFFSET))(this, a1, a2);
		}

	};
