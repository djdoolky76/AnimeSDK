#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class EvolveBuildTag; }
namespace RPG::GameCore { class EvolveBuildTagConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_EVOLVEBUILDTAG_CREATE_OFFSET UNITYSDK_OFFSET(0x1DB44EF0)
#define RPG_CLIENT_EVOLVEBUILDTAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB63050)
#define RPG_CLIENT_EVOLVEBUILDTAG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1DB631F0)
#define RPG_CLIENT_EVOLVEBUILDTAG_GET_ID_OFFSET UNITYSDK_OFFSET(0x1DB63060)
#define RPG_CLIENT_EVOLVEBUILDTAG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DB63110)
#define RPG_CLIENT_EVOLVEBUILDTAG_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1DB630A0)
#define RPG_CLIENT_EVOLVEBUILDTAG_GET_SEASON_OFFSET UNITYSDK_OFFSET(0x1DB63080)
#define RPG_CLIENT_EVOLVEBUILDTAG_SET_ID_OFFSET UNITYSDK_OFFSET(0x1DB63070)
#define RPG_CLIENT_EVOLVEBUILDTAG_SET_SEASON_OFFSET UNITYSDK_OFFSET(0x1DB63090)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildTag_TypeDefinitionIndex = 65252;

	class EvolveBuildTag : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10
		::RPG::GameCore::EvolveBuildSeason _Season_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTAG_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EvolveBuildTag* Create(::System::UInt32 a1, ::RPG::GameCore::EvolveBuildSeason a2)
		{
			return ((::RPG::Client::EvolveBuildTag*(*)(::System::UInt32, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTAG_CREATE_OFFSET))(a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTAG_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTAG_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::EvolveBuildSeason get_Season()
		{
			return ((::RPG::GameCore::EvolveBuildSeason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTAG_GET_SEASON_OFFSET))(this);
		}

		::System::Void set_Season(::RPG::GameCore::EvolveBuildSeason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTAG_SET_SEASON_OFFSET))(this, a1);
		}

		::RPG::GameCore::EvolveBuildTagConfigRow* get_Row()
		{
			return ((::RPG::GameCore::EvolveBuildTagConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTAG_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTAG_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTAG_GET_ICONPATH_OFFSET))(this);
		}

	};
}
