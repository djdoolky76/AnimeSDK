#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortMonsterRank; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FGDIDAIANCC_COMPARE_OFFSET UNITYSDK_OFFSET(0x1574C2C0)
#define FGDIDAIANCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1574C2A0)
#define FGDIDAIANCC_JIGJDOFEJMI_OFFSET UNITYSDK_OFFSET(0x1574C430)
#define FGDIDAIANCC_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1574C480)

inline static constexpr unsigned int FGDIDAIANCC_TypeDefinitionIndex = 59174;

	class FGDIDAIANCC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetSortMonsterRank* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortMonsterRank*))((::PBYTE)hIl2Cpp + FGDIDAIANCC_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FGDIDAIANCC_COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Void JIGJDOFEJMI(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + FGDIDAIANCC_JIGJDOFEJMI_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + FGDIDAIANCC_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
