#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaStyleDataBase.h"
namespace RPG::Client { class RogueTournPersonaStyleData; }
namespace RPG::Client { template <typename T1, typename T2> class RogueInstanceCacheManager_2; }

#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0xE033840)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE0335B0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0xE033670)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATA__CREATEDATA_OFFSET UNITYSDK_OFFSET(0xE033700)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaStyleData_TypeDefinitionIndex = 67751;

	class RogueTournPersonaStyleData : public ::RPG::Client::RogueTournPersonaStyleDataBase
	{
	public:
		static ::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournPersonaStyleData*>** StaticGet__CacheManager()
		{
			return (::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournPersonaStyleData*>**)UnitySDK::FromName("RPG.Client", "RogueTournPersonaStyleData")->GetStaticField(0x6D9F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATA_CCTOR_OFFSET))();
		}

		static ::RPG::Client::RogueTournPersonaStyleData* GetData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournPersonaStyleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATA_GETDATA_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournPersonaStyleData* _CreateData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournPersonaStyleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATA__CREATEDATA_OFFSET))(a1);
		}

	};
}
