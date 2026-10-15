#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TargetSortByCustomFormationIndexClientOnly; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLGLAMNEIOJ_COMPARE_OFFSET UNITYSDK_OFFSET(0xD778830)
#define CLGLAMNEIOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xD778810)
#define CLGLAMNEIOJ_JIGJDOFEJMI_OFFSET UNITYSDK_OFFSET(0xD7788E0)
#define CLGLAMNEIOJ_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xD778930)

inline static constexpr unsigned int CLGLAMNEIOJ_TypeDefinitionIndex = 59168;

	class CLGLAMNEIOJ
	{
	public:
		::RPG::GameCore::GameEntityList* FNHAHBHFCLA; // 0x18
		::System::Void _ctor(::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly*))((::PBYTE)hIl2Cpp + CLGLAMNEIOJ_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLGLAMNEIOJ_COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Void JIGJDOFEJMI(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLGLAMNEIOJ_JIGJDOFEJMI_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLGLAMNEIOJ_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
