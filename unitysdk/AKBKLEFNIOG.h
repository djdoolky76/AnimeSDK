#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKBKLEFNIOG;
namespace System { class String; }

#define AKBKLEFNIOG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x12CC8F60)
#define AKBKLEFNIOG_CTOR_OFFSET UNITYSDK_OFFSET(0x12CC8FF0)
#define AKBKLEFNIOG_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x12CC9000)
#define AKBKLEFNIOG_GET_COINLOOT_OFFSET UNITYSDK_OFFSET(0x12CC9130)
#define AKBKLEFNIOG_GET_ENEMYHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x12CC9190)
#define AKBKLEFNIOG_GET_ENEMYID_OFFSET UNITYSDK_OFFSET(0x12CC9150)
#define AKBKLEFNIOG_GET_ENEMYNAME_OFFSET UNITYSDK_OFFSET(0x12CC9170)
#define AKBKLEFNIOG_GET_ENEMYTALKCONTENT_OFFSET UNITYSDK_OFFSET(0x12CC91D0)
#define AKBKLEFNIOG_GET_PLAYERTALKCONTENT_OFFSET UNITYSDK_OFFSET(0x12CC91B0)
#define AKBKLEFNIOG_SET_COINLOOT_OFFSET UNITYSDK_OFFSET(0x12CC9140)
#define AKBKLEFNIOG_SET_ENEMYHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x12CC91A0)
#define AKBKLEFNIOG_SET_ENEMYID_OFFSET UNITYSDK_OFFSET(0x12CC9160)
#define AKBKLEFNIOG_SET_ENEMYNAME_OFFSET UNITYSDK_OFFSET(0x12CC9180)
#define AKBKLEFNIOG_SET_ENEMYTALKCONTENT_OFFSET UNITYSDK_OFFSET(0x12CC91E0)
#define AKBKLEFNIOG_SET_PLAYERTALKCONTENT_OFFSET UNITYSDK_OFFSET(0x12CC91C0)

	class AKBKLEFNIOG : public ::System::Object
	{
	public:
		::System::String* _EnemyName_k__BackingField; // 0x10
		::System::String* _EnemyTalkContent_k__BackingField; // 0x18
		::System::String* _EnemyHeadIconPath_k__BackingField; // 0x20
		::System::String* _PlayerTalkContent_k__BackingField; // 0x28
		::System::UInt32 _EnemyID_k__BackingField; // 0x30
		::System::UInt32 _CoinLoot_k__BackingField; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBKLEFNIOG_CTOR_OFFSET))(this);
		}

		static ::AKBKLEFNIOG* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::AKBKLEFNIOG*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AKBKLEFNIOG_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBKLEFNIOG_DIOEAJEHHND_OFFSET))(this);
		}

		::System::UInt32 get_CoinLoot()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBKLEFNIOG_GET_COINLOOT_OFFSET))(this);
		}

		::System::Void set_CoinLoot(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKBKLEFNIOG_SET_COINLOOT_OFFSET))(this, a1);
		}

		::System::UInt32 get_EnemyID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBKLEFNIOG_GET_ENEMYID_OFFSET))(this);
		}

		::System::Void set_EnemyID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKBKLEFNIOG_SET_ENEMYID_OFFSET))(this, a1);
		}

		::System::String* get_EnemyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBKLEFNIOG_GET_ENEMYNAME_OFFSET))(this);
		}

		::System::Void set_EnemyName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKBKLEFNIOG_SET_ENEMYNAME_OFFSET))(this, a1);
		}

		::System::String* get_EnemyHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBKLEFNIOG_GET_ENEMYHEADICONPATH_OFFSET))(this);
		}

		::System::Void set_EnemyHeadIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKBKLEFNIOG_SET_ENEMYHEADICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_PlayerTalkContent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBKLEFNIOG_GET_PLAYERTALKCONTENT_OFFSET))(this);
		}

		::System::Void set_PlayerTalkContent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKBKLEFNIOG_SET_PLAYERTALKCONTENT_OFFSET))(this, a1);
		}

		::System::String* get_EnemyTalkContent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBKLEFNIOG_GET_ENEMYTALKCONTENT_OFFSET))(this);
		}

		::System::Void set_EnemyTalkContent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKBKLEFNIOG_SET_ENEMYTALKCONTENT_OFFSET))(this, a1);
		}

	};
