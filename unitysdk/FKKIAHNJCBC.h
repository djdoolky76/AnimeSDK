#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/MechCraftTalentAssistantState.h"
#include "unitysdk/System/Object.h"
class BCFAKEGJPKN;
class CEEGMMCFCBG;
class KNHCNPDALBB;
namespace System { class Action; }

#define FKKIAHNJCBC_ADD_HANDLESHOWDETAIL_OFFSET UNITYSDK_OFFSET(0x158070E0)
#define FKKIAHNJCBC_CTOR_OFFSET UNITYSDK_OFFSET(0x15807260)
#define FKKIAHNJCBC_GET_ACTORCONFIG_OFFSET UNITYSDK_OFFSET(0x158070A0)
#define FKKIAHNJCBC_GET_STATE_OFFSET UNITYSDK_OFFSET(0x158070C0)
#define FKKIAHNJCBC_GET_TALENTPATHCONFIG_OFFSET UNITYSDK_OFFSET(0x15807080)
#define FKKIAHNJCBC_NPBCEMBHEBC_OFFSET UNITYSDK_OFFSET(0x158071A0)
#define FKKIAHNJCBC_REMOVE_HANDLESHOWDETAIL_OFFSET UNITYSDK_OFFSET(0x15807140)
#define FKKIAHNJCBC_SET_ACTORCONFIG_OFFSET UNITYSDK_OFFSET(0x158070B0)
#define FKKIAHNJCBC_SET_STATE_OFFSET UNITYSDK_OFFSET(0x158070D0)
#define FKKIAHNJCBC_SET_TALENTPATHCONFIG_OFFSET UNITYSDK_OFFSET(0x15807090)
#define FKKIAHNJCBC__GET_SHOWDETAILCOMMAND_B__17_0_OFFSET UNITYSDK_OFFSET(0x15807270)

inline static constexpr unsigned int FKKIAHNJCBC_TypeDefinitionIndex = 79431;

	class FKKIAHNJCBC : public ::System::Object
	{
	public:
		::BCFAKEGJPKN* _ActorConfig_k__BackingField; // 0x10
		::CEEGMMCFCBG* EENAJHAKPBO; // 0x18
		::System::Action* HandleShowDetail; // 0x20
		::KNHCNPDALBB* _TalentPathConfig_k__BackingField; // 0x28
		::RPG::Client::MechCraft::ViewModel::MechCraftTalentAssistantState _State_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKKIAHNJCBC_CTOR_OFFSET))(this);
		}

		::KNHCNPDALBB* get_TalentPathConfig()
		{
			return ((::KNHCNPDALBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKKIAHNJCBC_GET_TALENTPATHCONFIG_OFFSET))(this);
		}

		::System::Void set_TalentPathConfig(::KNHCNPDALBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNHCNPDALBB*))((::PBYTE)hIl2Cpp + FKKIAHNJCBC_SET_TALENTPATHCONFIG_OFFSET))(this, a1);
		}

		::BCFAKEGJPKN* get_ActorConfig()
		{
			return ((::BCFAKEGJPKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKKIAHNJCBC_GET_ACTORCONFIG_OFFSET))(this);
		}

		::System::Void set_ActorConfig(::BCFAKEGJPKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCFAKEGJPKN*))((::PBYTE)hIl2Cpp + FKKIAHNJCBC_SET_ACTORCONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftTalentAssistantState get_State()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentAssistantState(*)(::PVOID))((::PBYTE)hIl2Cpp + FKKIAHNJCBC_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::MechCraft::ViewModel::MechCraftTalentAssistantState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentAssistantState))((::PBYTE)hIl2Cpp + FKKIAHNJCBC_SET_STATE_OFFSET))(this, a1);
		}

		::System::Void add_HandleShowDetail(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FKKIAHNJCBC_ADD_HANDLESHOWDETAIL_OFFSET))(this, a1);
		}

		::System::Void remove_HandleShowDetail(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FKKIAHNJCBC_REMOVE_HANDLESHOWDETAIL_OFFSET))(this, a1);
		}

		::CEEGMMCFCBG* NPBCEMBHEBC()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKKIAHNJCBC_NPBCEMBHEBC_OFFSET))(this);
		}

		::System::Void _get_ShowDetailCommand_b__17_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKKIAHNJCBC__GET_SHOWDETAILCOMMAND_B__17_0_OFFSET))(this);
		}

	};
