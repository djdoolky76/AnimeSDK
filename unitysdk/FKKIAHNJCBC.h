#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/MechCraftTalentAssistantState.h"
#include "unitysdk/System/Object.h"
class BCFAKEGJPKN;
class CEEGMMCFCBG;
class KNHCNPDALBB;
namespace System { class Action; }

#define FKKIAHNJCBC_ADD_HANDLESHOWDETAIL_OFFSET UNITYSDK_OFFSET(0x167739D0)
#define FKKIAHNJCBC_CTOR_OFFSET UNITYSDK_OFFSET(0x16773B50)
#define FKKIAHNJCBC_GET_ACTORCONFIG_OFFSET UNITYSDK_OFFSET(0x16773990)
#define FKKIAHNJCBC_GET_STATE_OFFSET UNITYSDK_OFFSET(0x167739B0)
#define FKKIAHNJCBC_GET_TALENTPATHCONFIG_OFFSET UNITYSDK_OFFSET(0x16773970)
#define FKKIAHNJCBC_NPBCEMBHEBC_OFFSET UNITYSDK_OFFSET(0x16773A90)
#define FKKIAHNJCBC_REMOVE_HANDLESHOWDETAIL_OFFSET UNITYSDK_OFFSET(0x16773A30)
#define FKKIAHNJCBC_SET_ACTORCONFIG_OFFSET UNITYSDK_OFFSET(0x167739A0)
#define FKKIAHNJCBC_SET_STATE_OFFSET UNITYSDK_OFFSET(0x167739C0)
#define FKKIAHNJCBC_SET_TALENTPATHCONFIG_OFFSET UNITYSDK_OFFSET(0x16773980)
#define FKKIAHNJCBC__GET_SHOWDETAILCOMMAND_B__17_0_OFFSET UNITYSDK_OFFSET(0x16773B60)

inline static constexpr unsigned int FKKIAHNJCBC_TypeDefinitionIndex = 82208;

	class FKKIAHNJCBC : public ::System::Object
	{
	public:
		::KNHCNPDALBB* _TalentPathConfig_k__BackingField; // 0x10
		::CEEGMMCFCBG* EENAJHAKPBO; // 0x18
		::BCFAKEGJPKN* _ActorConfig_k__BackingField; // 0x20
		::System::Action* HandleShowDetail; // 0x28
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
