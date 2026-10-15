#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuelSettleReason.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

#define IOBDBFMECEI_KFEEEEFEDGL_CTOR_OFFSET UNITYSDK_OFFSET(0x164FCBA0)
#define IOBDBFMECEI_KFEEEEFEDGL_GET_ELIMINATEDTEAMS_OFFSET UNITYSDK_OFFSET(0x164FDC20)
#define IOBDBFMECEI_KFEEEEFEDGL_GET_SETTLEREASON_OFFSET UNITYSDK_OFFSET(0x164FDC00)
#define IOBDBFMECEI_KFEEEEFEDGL_SET_ELIMINATEDTEAMS_OFFSET UNITYSDK_OFFSET(0x164FDC30)
#define IOBDBFMECEI_KFEEEEFEDGL_SET_SETTLEREASON_OFFSET UNITYSDK_OFFSET(0x164FDC10)

	class IOBDBFMECEI_KFEEEEFEDGL : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraDuelTeamType>* _EliminatedTeams_k__BackingField; // 0x10
		::RPG::Client::LittleGame::ChimeraDuelSettleReason _SettleReason_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBDBFMECEI_KFEEEEFEDGL_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ChimeraDuelSettleReason get_SettleReason()
		{
			return ((::RPG::Client::LittleGame::ChimeraDuelSettleReason(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBDBFMECEI_KFEEEEFEDGL_GET_SETTLEREASON_OFFSET))(this);
		}

		::System::Void set_SettleReason(::RPG::Client::LittleGame::ChimeraDuelSettleReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuelSettleReason))((::PBYTE)hIl2Cpp + IOBDBFMECEI_KFEEEEFEDGL_SET_SETTLEREASON_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::ChimeraDuelTeamType>* get_EliminatedTeams()
		{
			return ((::Il2CppArray<::RPG::GameCore::ChimeraDuelTeamType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBDBFMECEI_KFEEEEFEDGL_GET_ELIMINATEDTEAMS_OFFSET))(this);
		}

		::System::Void set_EliminatedTeams(::Il2CppArray<::RPG::GameCore::ChimeraDuelTeamType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ChimeraDuelTeamType>*))((::PBYTE)hIl2Cpp + IOBDBFMECEI_KFEEEEFEDGL_SET_ELIMINATEDTEAMS_OFFSET))(this, a1);
		}

	};
