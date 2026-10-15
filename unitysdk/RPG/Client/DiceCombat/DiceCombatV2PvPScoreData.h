#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEIFEIGCEGF;
class EHMEPOMCGNG;
namespace RPG::Client::DiceCombat { class DiceCombatV2PvPScoreData; }
namespace System { class String; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSCOREDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xCCABA40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSCOREDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xCCABCA0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSCOREDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xCCABCB0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSCOREDATA_GET_SCORE_OFFSET UNITYSDK_OFFSET(0xCCABCD0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSCOREDATA_SET_DESC_OFFSET UNITYSDK_OFFSET(0xCCABCC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSCOREDATA_SET_SCORE_OFFSET UNITYSDK_OFFSET(0xCCABCE0)

namespace RPG::Client::DiceCombat
{
	class DiceCombatV2PvPScoreData : public ::System::Object
	{
	public:
		::System::String* _Desc_k__BackingField; // 0x10
		::BEIFEIGCEGF* _Row; // 0x18
		::System::UInt32 _Score_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSCOREDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2PvPScoreData* Create(::EHMEPOMCGNG* a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2PvPScoreData*(*)(::EHMEPOMCGNG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSCOREDATA_CREATE_OFFSET))(a1);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSCOREDATA_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSCOREDATA_SET_DESC_OFFSET))(this, a1);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSCOREDATA_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSCOREDATA_SET_SCORE_OFFSET))(this, a1);
		}

	};
}
