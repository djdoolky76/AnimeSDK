#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightProtoPendingAction.h"
class CHCHAJIANIM;
class HFCFMFONGIE;
namespace RPG::Client { class GridFightMonsterAffixConfig; }
namespace RPG::Client { class LuaUIController; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_GRIDFIGHTAFFIXDROPSELECTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xDA59EF0)
#define RPG_CLIENT_GRIDFIGHTAFFIXDROPSELECTACTION_GETACTIONID_OFFSET UNITYSDK_OFFSET(0xDA5A1E0)
#define RPG_CLIENT_GRIDFIGHTAFFIXDROPSELECTACTION_GET_ACTIONID_OFFSET UNITYSDK_OFFSET(0xDA59EB0)
#define RPG_CLIENT_GRIDFIGHTAFFIXDROPSELECTACTION_GET_AFFIXLIST_OFFSET UNITYSDK_OFFSET(0xDA59ED0)
#define RPG_CLIENT_GRIDFIGHTAFFIXDROPSELECTACTION_SELECT_OFFSET UNITYSDK_OFFSET(0xDA5A220)
#define RPG_CLIENT_GRIDFIGHTAFFIXDROPSELECTACTION_SET_ACTIONID_OFFSET UNITYSDK_OFFSET(0xDA59EC0)
#define RPG_CLIENT_GRIDFIGHTAFFIXDROPSELECTACTION_SET_AFFIXLIST_OFFSET UNITYSDK_OFFSET(0xDA59EE0)
#define RPG_CLIENT_GRIDFIGHTAFFIXDROPSELECTACTION__GETCANDIDATEAFFIXES_OFFSET UNITYSDK_OFFSET(0xDA59F70)
#define RPG_CLIENT_GRIDFIGHTAFFIXDROPSELECTACTION__ONFINISH_OFFSET UNITYSDK_OFFSET(0xDA5A4F0)
#define RPG_CLIENT_GRIDFIGHTAFFIXDROPSELECTACTION__ONSTART_OFFSET UNITYSDK_OFFSET(0xDA5A3F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAffixDropSelectAction_TypeDefinitionIndex = 66698;

	class GridFightAffixDropSelectAction : public ::RPG::Client::GridFightProtoPendingAction
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::GridFightMonsterAffixConfig*>* _AffixList_k__BackingField; // 0x20
		::RPG::Client::LuaUIController* _HandleUI; // 0x28
		::System::UInt32 _ActionID_k__BackingField; // 0x30
		::System::Void _ctor(::CHCHAJIANIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHCHAJIANIM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAFFIXDROPSELECTACTION_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAFFIXDROPSELECTACTION_GET_ACTIONID_OFFSET))(this);
		}

		::System::Void set_ActionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAFFIXDROPSELECTACTION_SET_ACTIONID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::GridFightMonsterAffixConfig*>* get_AffixList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::GridFightMonsterAffixConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAFFIXDROPSELECTACTION_GET_AFFIXLIST_OFFSET))(this);
		}

		::System::Void set_AffixList(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::GridFightMonsterAffixConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::GridFightMonsterAffixConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAFFIXDROPSELECTACTION_SET_AFFIXLIST_OFFSET))(this, a1);
		}

		::System::UInt32 GetActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAFFIXDROPSELECTACTION_GETACTIONID_OFFSET))(this);
		}

		::System::Void Select(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAFFIXDROPSELECTACTION_SELECT_OFFSET))(this, a1);
		}

		::System::Void _OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAFFIXDROPSELECTACTION__ONSTART_OFFSET))(this);
		}

		::System::Void _OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAFFIXDROPSELECTACTION__ONFINISH_OFFSET))(this);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::GridFightMonsterAffixConfig*>* _GetCandidateAffixes(::HFCFMFONGIE* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::GridFightMonsterAffixConfig*>*(*)(::HFCFMFONGIE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAFFIXDROPSELECTACTION__GETCANDIDATEAFFIXES_OFFSET))(a1);
		}

	};
}
