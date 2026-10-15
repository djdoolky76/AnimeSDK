#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PFPPACPMFDJ;
namespace RPG::Client::ChenLingBattle { class EffectChangeData; }
namespace RPG::Client::ChenLingBattle { class GridIndex; }

#define RPG_CLIENT_CHENLINGBATTLE_EFFECTCHANGEDATA_CREATEBYDEATH_OFFSET UNITYSDK_OFFSET(0xCA55C40)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECTCHANGEDATA_CREATEBYEFFECT_OFFSET UNITYSDK_OFFSET(0xCA55BA0)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECTCHANGEDATA_CREATEBYGRID_OFFSET UNITYSDK_OFFSET(0xCA55CE0)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECTCHANGEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xCA55B80)

namespace RPG::Client::ChenLingBattle
{
	class EffectChangeData : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattle::GridIndex* GridIndex; // 0x10
		::System::UInt64 EffectUniqueID; // 0x18
		::System::Boolean IsLevelUp; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 EntityUniqueID; // 0x24
		::System::UInt32 ChangeValue; // 0x28
		::System::Void _ctor(::System::UInt64 a1, ::System::UInt32 a2, ::RPG::Client::ChenLingBattle::GridIndex* a3, ::System::UInt32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::RPG::Client::ChenLingBattle::GridIndex*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECTCHANGEDATA_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::RPG::Client::ChenLingBattle::EffectChangeData* CreateByEffect(::System::UInt64 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::RPG::Client::ChenLingBattle::EffectChangeData*(*)(::System::UInt64, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECTCHANGEDATA_CREATEBYEFFECT_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::ChenLingBattle::EffectChangeData* CreateByDeath(::System::UInt64 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::ChenLingBattle::EffectChangeData*(*)(::System::UInt64, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECTCHANGEDATA_CREATEBYDEATH_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::ChenLingBattle::EffectChangeData* CreateByGrid(::System::UInt64 a1, ::PFPPACPMFDJ* a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::RPG::Client::ChenLingBattle::EffectChangeData*(*)(::System::UInt64, ::PFPPACPMFDJ*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECTCHANGEDATA_CREATEBYGRID_OFFSET))(a1, a2, a3, a4);
		}

	};
}
