#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortByWeaknessMatch; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OIEOGPLJNNO_COMPARE_OFFSET UNITYSDK_OFFSET(0xBE7B590)
#define OIEOGPLJNNO_CTOR_OFFSET UNITYSDK_OFFSET(0xBE7AEC0)
#define OIEOGPLJNNO_GIMONDLPJPC_OFFSET UNITYSDK_OFFSET(0xBE7B640)
#define OIEOGPLJNNO_JIGJDOFEJMI_OFFSET UNITYSDK_OFFSET(0xBE7B1A0)
#define OIEOGPLJNNO_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xBE7AEE0)

inline static constexpr unsigned int OIEOGPLJNNO_TypeDefinitionIndex = 59180;

	class OIEOGPLJNNO
	{
	public:
		::RPG::GameCore::AttackDamageType BKLEKCIBCDC; // 0x18
		::RPG::GameCore::AttackDamageType MNFMJJCAOFE; // 0x1C
		::System::Void _ctor(::RPG::GameCore::TargetSortByWeaknessMatch* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByWeaknessMatch*))((::PBYTE)hIl2Cpp + OIEOGPLJNNO_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + OIEOGPLJNNO_TRANSFORM_OFFSET))(this, a1, a2);
		}

		::System::Void JIGJDOFEJMI(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + OIEOGPLJNNO_JIGJDOFEJMI_OFFSET))(this, a1);
		}

		::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OIEOGPLJNNO_COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Int32 GIMONDLPJPC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OIEOGPLJNNO_GIMONDLPJPC_OFFSET))(this, a1);
		}

	};
