#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StartAim; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class Transform; }

#define CEEHGIEOAAI_CTOR_OFFSET UNITYSDK_OFFSET(0xC7813D0)
#define CEEHGIEOAAI_IGNDAMIAFMN_OFFSET UNITYSDK_OFFSET(0xC781E90)
#define CEEHGIEOAAI_JAMHIBAPEBG_OFFSET UNITYSDK_OFFSET(0xC781BE0)
#define CEEHGIEOAAI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC781400)
#define CEEHGIEOAAI_PAGDGFKJLOC_OFFSET UNITYSDK_OFFSET(0xC781FD0)

	class CEEHGIEOAAI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartAim* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartAim*))((::PBYTE)hIl2Cpp + CEEHGIEOAAI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEHGIEOAAI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean IGNDAMIAFMN(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CEEHGIEOAAI_IGNDAMIAFMN_OFFSET))(this, a1);
		}

		::System::Boolean JAMHIBAPEBG(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CEEHGIEOAAI_JAMHIBAPEBG_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean PAGDGFKJLOC(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CEEHGIEOAAI_PAGDGFKJLOC_OFFSET))(this, a1, a2);
		}

	};
