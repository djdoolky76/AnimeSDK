#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifyCharacterOutlineTargetRender; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class Renderer; }

#define OBDLPMBNHDK_CTOR_OFFSET UNITYSDK_OFFSET(0xBD380E0)
#define OBDLPMBNHDK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD38110)
#define OBDLPMBNHDK_IMPCLGNNONP_OFFSET UNITYSDK_OFFSET(0xBD38390)
#define OBDLPMBNHDK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD38150)

inline static constexpr unsigned int OBDLPMBNHDK_TypeDefinitionIndex = 55189;

	class OBDLPMBNHDK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyCharacterOutlineTargetRender* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyCharacterOutlineTargetRender*))((::PBYTE)hIl2Cpp + OBDLPMBNHDK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDLPMBNHDK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDLPMBNHDK_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::PoolList_1<::UnityEngine::Renderer*>* IMPCLGNNONP(::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::PoolList_1<::UnityEngine::Renderer*>*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OBDLPMBNHDK_IMPCLGNNONP_OFFSET))(this, a1, a2);
		}

	};
