#pragma once
#include "unitysdk/unitysdk.h"
class PICFCJAFLNF;
namespace RPG::Client::PetMarble { class PetMarblePlayer; }

#define LCEGGGCLLDC_CTOR_OFFSET UNITYSDK_OFFSET(0x65B040)
#define LCEGGGCLLDC_GET_ALLYTEAMPLAYER_OFFSET UNITYSDK_OFFSET(0x6C95B0)
#define LCEGGGCLLDC_GET_BRIDGE_OFFSET UNITYSDK_OFFSET(0x7F5730)
#define LCEGGGCLLDC_GET_ENEMYTEAMPLAYER_OFFSET UNITYSDK_OFFSET(0x6C9390)
#define LCEGGGCLLDC_GET_SELFPLAYER_OFFSET UNITYSDK_OFFSET(0x6C8DB0)
#define LCEGGGCLLDC_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x3E6D050)
#define LCEGGGCLLDC_SET_ALLYTEAMPLAYER_OFFSET UNITYSDK_OFFSET(0xB88D90)
#define LCEGGGCLLDC_SET_BRIDGE_OFFSET UNITYSDK_OFFSET(0x3D6A850)
#define LCEGGGCLLDC_SET_ENEMYTEAMPLAYER_OFFSET UNITYSDK_OFFSET(0xFDBF90)
#define LCEGGGCLLDC_SET_SELFPLAYER_OFFSET UNITYSDK_OFFSET(0x6C8D40)

inline static constexpr unsigned int LCEGGGCLLDC_TypeDefinitionIndex = 76880;

	struct alignas(8) LCEGGGCLLDC
	{
		::RPG::Client::PetMarble::PetMarblePlayer* _SelfPlayer_k__BackingField; // 0x10
		::RPG::Client::PetMarble::PetMarblePlayer* _AllyTeamPlayer_k__BackingField; // 0x18
		::RPG::Client::PetMarble::PetMarblePlayer* _EnemyTeamPlayer_k__BackingField; // 0x20
		::PICFCJAFLNF* _Bridge_k__BackingField; // 0x28
		::System::Void _ctor(::PICFCJAFLNF* a1, ::RPG::Client::PetMarble::PetMarblePlayer* a2, ::RPG::Client::PetMarble::PetMarblePlayer* a3, ::RPG::Client::PetMarble::PetMarblePlayer* a4)
		{
			return ((::System::Void(*)(::PVOID, ::PICFCJAFLNF*, ::RPG::Client::PetMarble::PetMarblePlayer*, ::RPG::Client::PetMarble::PetMarblePlayer*, ::RPG::Client::PetMarble::PetMarblePlayer*))((::PBYTE)hIl2Cpp + LCEGGGCLLDC_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEGGGCLLDC_PJPFIHFAHGO_OFFSET))(this);
		}

		::RPG::Client::PetMarble::PetMarblePlayer* get_SelfPlayer()
		{
			return ((::RPG::Client::PetMarble::PetMarblePlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEGGGCLLDC_GET_SELFPLAYER_OFFSET))(this);
		}

		::System::Void set_SelfPlayer(::RPG::Client::PetMarble::PetMarblePlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PetMarble::PetMarblePlayer*))((::PBYTE)hIl2Cpp + LCEGGGCLLDC_SET_SELFPLAYER_OFFSET))(this, a1);
		}

		::RPG::Client::PetMarble::PetMarblePlayer* get_AllyTeamPlayer()
		{
			return ((::RPG::Client::PetMarble::PetMarblePlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEGGGCLLDC_GET_ALLYTEAMPLAYER_OFFSET))(this);
		}

		::System::Void set_AllyTeamPlayer(::RPG::Client::PetMarble::PetMarblePlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PetMarble::PetMarblePlayer*))((::PBYTE)hIl2Cpp + LCEGGGCLLDC_SET_ALLYTEAMPLAYER_OFFSET))(this, a1);
		}

		::RPG::Client::PetMarble::PetMarblePlayer* get_EnemyTeamPlayer()
		{
			return ((::RPG::Client::PetMarble::PetMarblePlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEGGGCLLDC_GET_ENEMYTEAMPLAYER_OFFSET))(this);
		}

		::System::Void set_EnemyTeamPlayer(::RPG::Client::PetMarble::PetMarblePlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PetMarble::PetMarblePlayer*))((::PBYTE)hIl2Cpp + LCEGGGCLLDC_SET_ENEMYTEAMPLAYER_OFFSET))(this, a1);
		}

		::PICFCJAFLNF* get_Bridge()
		{
			return ((::PICFCJAFLNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEGGGCLLDC_GET_BRIDGE_OFFSET))(this);
		}

		::System::Void set_Bridge(::PICFCJAFLNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PICFCJAFLNF*))((::PBYTE)hIl2Cpp + LCEGGGCLLDC_SET_BRIDGE_OFFSET))(this, a1);
		}

	};
