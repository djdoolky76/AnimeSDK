#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaRoomCardDataBase.h"
namespace RPG::Client { class RogueTournPersonaPresetRoomCardData; }
namespace RPG::Client { template <typename T1, typename T2> class RogueInstanceCacheManager_2; }

#define RPG_CLIENT_ROGUETOURNPERSONAPRESETROOMCARDDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0DF070)
#define RPG_CLIENT_ROGUETOURNPERSONAPRESETROOMCARDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0DEBC0)
#define RPG_CLIENT_ROGUETOURNPERSONAPRESETROOMCARDDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E0DEC80)
#define RPG_CLIENT_ROGUETOURNPERSONAPRESETROOMCARDDATA_GET_PRESETID_OFFSET UNITYSDK_OFFSET(0x1E0DF030)
#define RPG_CLIENT_ROGUETOURNPERSONAPRESETROOMCARDDATA__CREATE_OFFSET UNITYSDK_OFFSET(0x1E0DED10)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaPresetRoomCardData_TypeDefinitionIndex = 69677;

	class RogueTournPersonaPresetRoomCardData : public ::RPG::Client::RogueTournPersonaRoomCardDataBase
	{
	public:
		::System::UInt32 _PresetID; // 0x30
		static ::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournPersonaPresetRoomCardData*>** StaticGet__CacheManager()
		{
			return (::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournPersonaPresetRoomCardData*>**)UnitySDK::FromName("RPG.Client", "RogueTournPersonaPresetRoomCardData")->GetStaticField(0x73020);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAPRESETROOMCARDDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAPRESETROOMCARDDATA_CCTOR_OFFSET))();
		}

		static ::RPG::Client::RogueTournPersonaPresetRoomCardData* GetData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournPersonaPresetRoomCardData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAPRESETROOMCARDDATA_GETDATA_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournPersonaPresetRoomCardData* _Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournPersonaPresetRoomCardData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAPRESETROOMCARDDATA__CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_PresetID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAPRESETROOMCARDDATA_GET_PRESETID_OFFSET))(this);
		}

	};
}
