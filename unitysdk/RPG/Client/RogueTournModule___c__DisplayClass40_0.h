#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/System/Object.h"
class BICALEAAKEL;
namespace RPG::Client { class RogueTournModule; }
namespace RPG::Client { template <typename T> class RPGHttpPlatformActResponse_1; }

#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS40_0_CTOR_OFFSET UNITYSDK_OFFSET(0xEA6BCF0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS40_0__SENDSETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__2_OFFSET UNITYSDK_OFFSET(0xEA7BA50)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournModule___c__DisplayClass40_0_TypeDefinitionIndex = 69747;

	class RogueTournModule___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournModule* __4__this; // 0x10
		::System::Boolean isFavorite; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::Client::MongoObjectId buildRefID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS40_0_CTOR_OFFSET))(this);
		}

		::System::Void _SendSetRogueTournBuildRefFavoriteHttpReq_b__2(::RPG::Client::RPGHttpPlatformActResponse_1<::BICALEAAKEL*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RPGHttpPlatformActResponse_1<::BICALEAAKEL*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS40_0__SENDSETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__2_OFFSET))(this, a1);
		}

	};
}
