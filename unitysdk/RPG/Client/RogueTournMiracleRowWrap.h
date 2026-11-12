#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMiracleCategory.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueTournMiracleRowWrap; }
namespace RPG::GameCore { class RogueTournMiracleRow; }

#define RPG_CLIENT_ROGUETOURNMIRACLEROWWRAP_CREATE_OFFSET UNITYSDK_OFFSET(0xEA65080)
#define RPG_CLIENT_ROGUETOURNMIRACLEROWWRAP_CTOR_OFFSET UNITYSDK_OFFSET(0xEA65070)
#define RPG_CLIENT_ROGUETOURNMIRACLEROWWRAP_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0xEA65130)
#define RPG_CLIENT_ROGUETOURNMIRACLEROWWRAP_GET_MIRACLEDISPLAYID_OFFSET UNITYSDK_OFFSET(0xEA652D0)
#define RPG_CLIENT_ROGUETOURNMIRACLEROWWRAP_GET_MIRACLEEFFECTID_OFFSET UNITYSDK_OFFSET(0xEA65370)
#define RPG_CLIENT_ROGUETOURNMIRACLEROWWRAP_GET_TOURNMODE_OFFSET UNITYSDK_OFFSET(0xEA65230)
#define RPG_CLIENT_ROGUETOURNMIRACLEROWWRAP_GET__ROW_OFFSET UNITYSDK_OFFSET(0xEA651D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournMiracleRowWrap_TypeDefinitionIndex = 69235;

	class RogueTournMiracleRowWrap : public ::System::Object
	{
	public:
		::System::UInt32 _MiracleID; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEROWWRAP_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::RogueTournMiracleRowWrap* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournMiracleRowWrap*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEROWWRAP_CREATE_OFFSET))(a1);
		}

		::RPG::GameCore::RogueMiracleCategory get_Category()
		{
			return ((::RPG::GameCore::RogueMiracleCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEROWWRAP_GET_CATEGORY_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournMode get_TournMode()
		{
			return ((::RPG::GameCore::RogueTournMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEROWWRAP_GET_TOURNMODE_OFFSET))(this);
		}

		::System::UInt32 get_MiracleDisplayID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEROWWRAP_GET_MIRACLEDISPLAYID_OFFSET))(this);
		}

		::System::UInt32 get_MiracleEffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEROWWRAP_GET_MIRACLEEFFECTID_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournMiracleRow* get__Row()
		{
			return ((::RPG::GameCore::RogueTournMiracleRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEROWWRAP_GET__ROW_OFFSET))(this);
		}

	};
}
