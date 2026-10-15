#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortByModifierStatusCount; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PMHLLOHJHCN_COMPARE_OFFSET UNITYSDK_OFFSET(0xC315E50)
#define PMHLLOHJHCN_CTOR_OFFSET UNITYSDK_OFFSET(0xC315E30)
#define PMHLLOHJHCN_JIGJDOFEJMI_OFFSET UNITYSDK_OFFSET(0xC315F50)
#define PMHLLOHJHCN_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xC315FA0)

inline static constexpr unsigned int PMHLLOHJHCN_TypeDefinitionIndex = 59175;

	class PMHLLOHJHCN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetSortByModifierStatusCount* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByModifierStatusCount*))((::PBYTE)hIl2Cpp + PMHLLOHJHCN_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PMHLLOHJHCN_COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Void JIGJDOFEJMI(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + PMHLLOHJHCN_JIGJDOFEJMI_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + PMHLLOHJHCN_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
