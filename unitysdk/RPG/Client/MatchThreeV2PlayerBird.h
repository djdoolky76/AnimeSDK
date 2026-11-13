#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPCHPLEJCKC;
namespace RPG::Client { class MatchThreeV2BirdData; }
namespace RPG::Client { class MatchThreeV2PlayerBird; }

#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_CREATE_OFFSET UNITYSDK_OFFSET(0x1D713CF0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D713D70)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_GET_BIRDID_OFFSET UNITYSDK_OFFSET(0x1D713BB0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1D713BC0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_GET_MAXPOWER_OFFSET UNITYSDK_OFFSET(0x1D713CB0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_GET_POSID_OFFSET UNITYSDK_OFFSET(0x1D713CD0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_GET_USECOUNT_OFFSET UNITYSDK_OFFSET(0x1D713C90)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_INIT_OFFSET UNITYSDK_OFFSET(0x1D713D80)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_SET_MAXPOWER_OFFSET UNITYSDK_OFFSET(0x1D713CC0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_SET_POSID_OFFSET UNITYSDK_OFFSET(0x1D713CE0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_SET_USECOUNT_OFFSET UNITYSDK_OFFSET(0x1D713CA0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_SYNCPOS_OFFSET UNITYSDK_OFFSET(0x1D710E00)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_SYNC_OFFSET UNITYSDK_OFFSET(0x1D713DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2PlayerBird_TypeDefinitionIndex = 67939;

	class MatchThreeV2PlayerBird : public ::System::Object
	{
	public:
		::System::UInt32 _BirdID_k__BackingField; // 0x10
		::System::UInt32 _UseCount_k__BackingField; // 0x14
		::System::UInt32 _PosID_k__BackingField; // 0x18
		::System::UInt32 _MaxPower_k__BackingField; // 0x1C
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_BirdID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_GET_BIRDID_OFFSET))(this);
		}

		::RPG::Client::MatchThreeV2BirdData* get_Data()
		{
			return ((::RPG::Client::MatchThreeV2BirdData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_GET_DATA_OFFSET))(this);
		}

		::System::UInt32 get_UseCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_GET_USECOUNT_OFFSET))(this);
		}

		::System::Void set_UseCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_SET_USECOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxPower()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_GET_MAXPOWER_OFFSET))(this);
		}

		::System::Void set_MaxPower(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_SET_MAXPOWER_OFFSET))(this, a1);
		}

		::System::UInt32 get_PosID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_GET_POSID_OFFSET))(this);
		}

		::System::Void set_PosID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_SET_POSID_OFFSET))(this, a1);
		}

		static ::RPG::Client::MatchThreeV2PlayerBird* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::MatchThreeV2PlayerBird*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_CREATE_OFFSET))(a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_INIT_OFFSET))(this);
		}

		::System::Void Sync(::KPCHPLEJCKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPCHPLEJCKC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncPos(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_SYNCPOS_OFFSET))(this, a1);
		}

	};
}
