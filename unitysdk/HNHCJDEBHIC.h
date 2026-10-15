#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightEquipCategory.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class AddGridFightTargetEquip; }
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HNHCJDEBHIC_CTOR_OFFSET UNITYSDK_OFFSET(0x15D87490)
#define HNHCJDEBHIC_EDCNNJELGDH_OFFSET UNITYSDK_OFFSET(0x15D87A80)
#define HNHCJDEBHIC_EGIKHKAGNIF_OFFSET UNITYSDK_OFFSET(0x15D88080)
#define HNHCJDEBHIC_FDADBODDKOB_OFFSET UNITYSDK_OFFSET(0x15D87BA0)
#define HNHCJDEBHIC_MEDCOMCDFCK_OFFSET UNITYSDK_OFFSET(0x15D87C40)
#define HNHCJDEBHIC_OENKDDPJFDA_OFFSET UNITYSDK_OFFSET(0x15D87EB0)
#define HNHCJDEBHIC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D874C0)

inline static constexpr unsigned int HNHCJDEBHIC_TypeDefinitionIndex = 54813;

	class HNHCJDEBHIC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddGridFightTargetEquip* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddGridFightTargetEquip*))((::PBYTE)hIl2Cpp + HNHCJDEBHIC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNHCJDEBHIC_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint FDADBODDKOB(::RPG::GameCore::GridFightEquipCategory a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GridFightEquipCategory))((::PBYTE)hIl2Cpp + HNHCJDEBHIC_FDADBODDKOB_OFFSET))(this, a1);
		}

		::System::UInt32 EDCNNJELGDH(::RPG::GameCore::BattleGridFightAvatarData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + HNHCJDEBHIC_EDCNNJELGDH_OFFSET))(this, a1);
		}

		::System::Boolean OENKDDPJFDA(::RPG::GameCore::BattleGridFightAvatarData* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + HNHCJDEBHIC_OENKDDPJFDA_OFFSET))(this, a1, a2);
		}

		::System::Void MEDCOMCDFCK(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + HNHCJDEBHIC_MEDCOMCDFCK_OFFSET))(this, a1);
		}

		::System::UInt32 EGIKHKAGNIF(::RPG::GameCore::BattleGridFightAvatarData* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + HNHCJDEBHIC_EGIKHKAGNIF_OFFSET))(this, a1, a2);
		}

	};
