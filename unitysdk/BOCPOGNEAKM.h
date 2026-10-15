#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortByModifierValue; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BOCPOGNEAKM_COMPARE_OFFSET UNITYSDK_OFFSET(0xC18DB50)
#define BOCPOGNEAKM_CTOR_OFFSET UNITYSDK_OFFSET(0xC18DB30)
#define BOCPOGNEAKM_JIGJDOFEJMI_OFFSET UNITYSDK_OFFSET(0xC18DD60)
#define BOCPOGNEAKM_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xC18DDB0)

	class BOCPOGNEAKM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetSortByModifierValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByModifierValue*))((::PBYTE)hIl2Cpp + BOCPOGNEAKM_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BOCPOGNEAKM_COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Void JIGJDOFEJMI(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + BOCPOGNEAKM_JIGJDOFEJMI_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + BOCPOGNEAKM_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
