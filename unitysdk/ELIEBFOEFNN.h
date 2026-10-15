#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class MPPHIOJNKGB;
namespace RPG::Client { class ChimeraDuelPvpTeamSnapshot; }
namespace RPG::Client { class ChimeraDuelRankData; }
namespace RPG::Client { class PlayerPlatformInfo; }
namespace System { class String; }

#define ELIEBFOEFNN_ABNLJGMKNHP_OFFSET UNITYSDK_OFFSET(0x15521ED0)
#define ELIEBFOEFNN_BDNEJLEBEAP_OFFSET UNITYSDK_OFFSET(0x15521F50)
#define ELIEBFOEFNN_CBOFFPEFEPP_OFFSET UNITYSDK_OFFSET(0x15521DE0)
#define ELIEBFOEFNN_CTOR_OFFSET UNITYSDK_OFFSET(0x15521C90)
#define ELIEBFOEFNN_GET_HEADICONID_OFFSET UNITYSDK_OFFSET(0x15521DA0)
#define ELIEBFOEFNN_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x15521D80)
#define ELIEBFOEFNN_GET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x15521DC0)
#define ELIEBFOEFNN_GET_TEAMSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x15522070)
#define ELIEBFOEFNN_JKACGPNLCLG_OFFSET UNITYSDK_OFFSET(0x15521F90)
#define ELIEBFOEFNN_KDFNJFLGKOD_OFFSET UNITYSDK_OFFSET(0x15521FF0)
#define ELIEBFOEFNN_OBJELCJNFFK_OFFSET UNITYSDK_OFFSET(0x15521E20)
#define ELIEBFOEFNN_SET_HEADICONID_OFFSET UNITYSDK_OFFSET(0x15521DB0)
#define ELIEBFOEFNN_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x15521D90)
#define ELIEBFOEFNN_SET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x15521DD0)
#define ELIEBFOEFNN_SET_TEAMSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x15522080)

inline static constexpr unsigned int ELIEBFOEFNN_TypeDefinitionIndex = 63298;

	class ELIEBFOEFNN : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDuelPvpTeamSnapshot* _TeamSnapshot_k__BackingField; // 0x10
		::RPG::Client::PlayerPlatformInfo* _PlatformInfo_k__BackingField; // 0x18
		::System::String* _NickName_k__BackingField; // 0x20
		::System::UInt32 MPIMEEAIELI; // 0x28
		::System::UInt32 _HeadIconID_k__BackingField; // 0x2C
		::System::UInt32 BNEFKDMHPAO; // 0x30
		::System::Void _ctor(::MPPHIOJNKGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPPHIOJNKGB*))((::PBYTE)hIl2Cpp + ELIEBFOEFNN_CTOR_OFFSET))(this, a1);
		}

		::System::String* get_NickName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIEBFOEFNN_GET_NICKNAME_OFFSET))(this);
		}

		::System::Void set_NickName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ELIEBFOEFNN_SET_NICKNAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_HeadIconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIEBFOEFNN_GET_HEADICONID_OFFSET))(this);
		}

		::System::Void set_HeadIconID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ELIEBFOEFNN_SET_HEADICONID_OFFSET))(this, a1);
		}

		::RPG::Client::PlayerPlatformInfo* get_PlatformInfo()
		{
			return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIEBFOEFNN_GET_PLATFORMINFO_OFFSET))(this);
		}

		::System::Void set_PlatformInfo(::RPG::Client::PlayerPlatformInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerPlatformInfo*))((::PBYTE)hIl2Cpp + ELIEBFOEFNN_SET_PLATFORMINFO_OFFSET))(this, a1);
		}

		::System::UInt32 CBOFFPEFEPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIEBFOEFNN_CBOFFPEFEPP_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelRankData* OBJELCJNFFK()
		{
			return ((::RPG::Client::ChimeraDuelRankData*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIEBFOEFNN_OBJELCJNFFK_OFFSET))(this);
		}

		::System::UInt32 ABNLJGMKNHP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIEBFOEFNN_ABNLJGMKNHP_OFFSET))(this);
		}

		::System::UInt32 BDNEJLEBEAP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIEBFOEFNN_BDNEJLEBEAP_OFFSET))(this);
		}

		::System::String* JKACGPNLCLG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIEBFOEFNN_JKACGPNLCLG_OFFSET))(this);
		}

		::RPG::Client::TextID KDFNJFLGKOD()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIEBFOEFNN_KDFNJFLGKOD_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelPvpTeamSnapshot* get_TeamSnapshot()
		{
			return ((::RPG::Client::ChimeraDuelPvpTeamSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIEBFOEFNN_GET_TEAMSNAPSHOT_OFFSET))(this);
		}

		::System::Void set_TeamSnapshot(::RPG::Client::ChimeraDuelPvpTeamSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*))((::PBYTE)hIl2Cpp + ELIEBFOEFNN_SET_TEAMSNAPSHOT_OFFSET))(this, a1);
		}

	};
