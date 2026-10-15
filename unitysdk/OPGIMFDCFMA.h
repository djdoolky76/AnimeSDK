#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ShowWayPoint; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define OPGIMFDCFMA_CTOR_OFFSET UNITYSDK_OFFSET(0xBFA2CE0)
#define OPGIMFDCFMA_JEEGIKIJOMC_OFFSET UNITYSDK_OFFSET(0xBFA2E20)
#define OPGIMFDCFMA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFA2D10)

inline static constexpr unsigned int OPGIMFDCFMA_TypeDefinitionIndex = 58709;

	class OPGIMFDCFMA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowWayPoint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowWayPoint*))((::PBYTE)hIl2Cpp + OPGIMFDCFMA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPGIMFDCFMA_ONTASKBEGIN_OFFSET))(this);
		}

		static ::System::Void JEEGIKIJOMC(::RPG::GameCore::GameEntity* a1, ::UnityEngine::GameObject* a2, ::RPG::MVector3 a3, ::System::String* a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Boolean a7, ::System::String* a8)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::UnityEngine::GameObject*, ::RPG::MVector3, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + OPGIMFDCFMA_JEEGIKIJOMC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

	};
