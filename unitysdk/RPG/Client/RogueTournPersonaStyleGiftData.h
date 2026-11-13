#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaStyleGiftDataBase.h"
namespace RPG::Client { class RogueTournPersonaStyleGiftData; }
namespace RPG::Client { template <typename T1, typename T2> class RogueInstanceCacheManager_2; }

#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0EBA90)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0EBA10)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E0E3490)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATA__CREATEDATA_OFFSET UNITYSDK_OFFSET(0x1E0EBA20)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaStyleGiftData_TypeDefinitionIndex = 69699;

	class RogueTournPersonaStyleGiftData : public ::RPG::Client::RogueTournPersonaStyleGiftDataBase
	{
	public:
		static ::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournPersonaStyleGiftData*>** StaticGet__CacheManager()
		{
			return (::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournPersonaStyleGiftData*>**)UnitySDK::FromName("RPG.Client", "RogueTournPersonaStyleGiftData")->GetStaticField(0x730C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATA_CCTOR_OFFSET))();
		}

		static ::RPG::Client::RogueTournPersonaStyleGiftData* GetData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournPersonaStyleGiftData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATA_GETDATA_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournPersonaStyleGiftData* _CreateData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournPersonaStyleGiftData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATA__CREATEDATA_OFFSET))(a1);
		}

	};
}
