#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/MechCraftTalentAssistantState.h"
#include "unitysdk/System/Object.h"
class BCFAKEGJPKN;
class CEEGMMCFCBG;
class KNHCNPDALBB;
namespace System { class Action; }

#define FKKIAHNJCBC_ADD_HANDLESHOWDETAIL_OFFSET UNITYSDK_OFFSET(0x157FB4C0)
#define FKKIAHNJCBC_CTOR_OFFSET UNITYSDK_OFFSET(0x157FB640)
#define FKKIAHNJCBC_GET_ACTORCONFIG_OFFSET UNITYSDK_OFFSET(0x157FB480)
#define FKKIAHNJCBC_GET_STATE_OFFSET UNITYSDK_OFFSET(0x157FB4A0)
#define FKKIAHNJCBC_GET_TALENTPATHCONFIG_OFFSET UNITYSDK_OFFSET(0x157FB460)
#define FKKIAHNJCBC_NPBCEMBHEBC_OFFSET UNITYSDK_OFFSET(0x157FB580)
#define FKKIAHNJCBC_REMOVE_HANDLESHOWDETAIL_OFFSET UNITYSDK_OFFSET(0x157FB520)
#define FKKIAHNJCBC_SET_ACTORCONFIG_OFFSET UNITYSDK_OFFSET(0x157FB490)
#define FKKIAHNJCBC_SET_STATE_OFFSET UNITYSDK_OFFSET(0x157FB4B0)
#define FKKIAHNJCBC_SET_TALENTPATHCONFIG_OFFSET UNITYSDK_OFFSET(0x157FB470)
#define FKKIAHNJCBC__GET_SHOWDETAILCOMMAND_B__17_0_OFFSET UNITYSDK_OFFSET(0x157FB650)

inline static constexpr unsigned int FKKIAHNJCBC_TypeDefinitionIndex = 79430;

	class FKKIAHNJCBC : public ::System::Object
	{
	public:
		::KNHCNPDALBB* _TalentPathConfig_k__BackingField; // 0x10
		::CEEGMMCFCBG* EENAJHAKPBO; // 0x18
		::System::Action* HandleShowDetail; // 0x20
		::BCFAKEGJPKN* _ActorConfig_k__BackingField; // 0x28
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
