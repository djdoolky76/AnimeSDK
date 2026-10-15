#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NJIOAKCLACC.h"
namespace RPG::GameCore { class AdventureTriggerAttack; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GPLMMPJLOIH_CTOR_OFFSET UNITYSDK_OFFSET(0x15B60130)
#define GPLMMPJLOIH_GKAIEDGLJGF_OFFSET UNITYSDK_OFFSET(0x15B60140)

inline static constexpr unsigned int GPLMMPJLOIH_TypeDefinitionIndex = 57932;

	class GPLMMPJLOIH : public ::NJIOAKCLACC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureTriggerAttack* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureTriggerAttack*))((::PBYTE)hIl2Cpp + GPLMMPJLOIH_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void GKAIEDGLJGF(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GameEntity* a2, ::System::UInt32 a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>* a5)
		{
			return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>*))((::PBYTE)hIl2Cpp + GPLMMPJLOIH_GKAIEDGLJGF_OFFSET))(a1, a2, a3, a4, a5);
		}

	};
