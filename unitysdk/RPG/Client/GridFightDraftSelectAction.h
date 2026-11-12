#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightProtoPendingAction.h"
class CHCHAJIANIM;
class OEJKAOKHPPL;
namespace RPG::Client { class GridFightDraftItemData; }
namespace RPG::Client { class GridFightPetPalConfig; }
namespace RPG::Client { class GridFightPetPalEffectConfig; }
namespace RPG::Client { class LuaUIController; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xDAA5F10)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GETACTIONID_OFFSET UNITYSDK_OFFSET(0xDAA61C0)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GETBACKTIPS_OFFSET UNITYSDK_OFFSET(0xDAA6560)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GETMEMENTO_OFFSET UNITYSDK_OFFSET(0xDAA6630)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GETTOPDROPDETAILOBJECTS_OFFSET UNITYSDK_OFFSET(0xDAA6670)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_ACTIONID_OFFSET UNITYSDK_OFFSET(0xDAA6200)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_AFFECTEDPETPALCONFIG_OFFSET UNITYSDK_OFFSET(0xDAA62A0)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_AFFECTEDPETPALEFFECTCONFIG_OFFSET UNITYSDK_OFFSET(0xDAA6400)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_ITEMLIST_OFFSET UNITYSDK_OFFSET(0xDAA6280)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_MAXREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0xDAA6220)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_REFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0xDAA6240)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_SELECTCOUNT_OFFSET UNITYSDK_OFFSET(0xDAA6260)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_ONPAUSE_OFFSET UNITYSDK_OFFSET(0xDAA7060)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_ONRESUME_OFFSET UNITYSDK_OFFSET(0xDAA7120)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_REFRESHROLES_OFFSET UNITYSDK_OFFSET(0xDAA6D60)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SELECTROLES_OFFSET UNITYSDK_OFFSET(0xDAA6C60)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SET_ACTIONID_OFFSET UNITYSDK_OFFSET(0xDAA6210)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SET_ITEMLIST_OFFSET UNITYSDK_OFFSET(0xDAA6290)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SET_MAXREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0xDAA6230)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SET_REFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0xDAA6250)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SET_SELECTCOUNT_OFFSET UNITYSDK_OFFSET(0xDAA6270)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xDAA6BC0)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION__ONFINISH_OFFSET UNITYSDK_OFFSET(0xDAA70D0)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION__ONSTART_OFFSET UNITYSDK_OFFSET(0xDAA6F60)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION__SYNCFROMPROTO_OFFSET UNITYSDK_OFFSET(0xDAA5F70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightDraftSelectAction_TypeDefinitionIndex = 66077;

	class GridFightDraftSelectAction : public ::RPG::Client::GridFightProtoPendingAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightDraftItemData*>* _ItemList_k__BackingField; // 0x20
		::System::Object* _Memento; // 0x28
		::OEJKAOKHPPL* _Reason; // 0x30
		::RPG::Client::LuaUIController* _HandleUI; // 0x38
		::System::UInt32 _MaxRefreshTimes_k__BackingField; // 0x40
		::System::UInt32 _RefreshCount_k__BackingField; // 0x44
		::System::UInt32 _SelectCount_k__BackingField; // 0x48
		::System::UInt32 _ActionID_k__BackingField; // 0x4C
		::System::Void _ctor(::CHCHAJIANIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHCHAJIANIM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GETACTIONID_OFFSET))(this);
		}

		::System::UInt32 get_ActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_ACTIONID_OFFSET))(this);
		}

		::System::Void set_ActionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SET_ACTIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxRefreshTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_MAXREFRESHTIMES_OFFSET))(this);
		}

		::System::Void set_MaxRefreshTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SET_MAXREFRESHTIMES_OFFSET))(this, a1);
		}

		::System::UInt32 get_RefreshCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_REFRESHCOUNT_OFFSET))(this);
		}

		::System::Void set_RefreshCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SET_REFRESHCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_SelectCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_SELECTCOUNT_OFFSET))(this);
		}

		::System::Void set_SelectCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SET_SELECTCOUNT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightDraftItemData*>* get_ItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightDraftItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_ITEMLIST_OFFSET))(this);
		}

		::System::Void set_ItemList(::System::Collections::Generic::List_1<::RPG::Client::GridFightDraftItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightDraftItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SET_ITEMLIST_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightPetPalConfig* get_AffectedPetPalConfig()
		{
			return ((::RPG::Client::GridFightPetPalConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_AFFECTEDPETPALCONFIG_OFFSET))(this);
		}

		::RPG::Client::GridFightPetPalEffectConfig* get_AffectedPetPalEffectConfig()
		{
			return ((::RPG::Client::GridFightPetPalEffectConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_AFFECTEDPETPALEFFECTCONFIG_OFFSET))(this);
		}

		::System::String* GetBackTips()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GETBACKTIPS_OFFSET))(this);
		}

		::System::Object* GetMemento()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GETMEMENTO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* GetTopDropDetailObjects()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GETTOPDROPDETAILOBJECTS_OFFSET))(this);
		}

		::System::Void Update(::CHCHAJIANIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHCHAJIANIM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_UPDATE_OFFSET))(this, a1);
		}

		::System::Void SelectRoles(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SELECTROLES_OFFSET))(this, a1);
		}

		::System::Void RefreshRoles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_REFRESHROLES_OFFSET))(this);
		}

		::System::Void _OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION__ONSTART_OFFSET))(this);
		}

		::System::Void OnPause(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_ONPAUSE_OFFSET))(this, a1);
		}

		::System::Void _OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION__ONFINISH_OFFSET))(this);
		}

		::System::Void OnResume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_ONRESUME_OFFSET))(this);
		}

		::System::Void _SyncFromProto(::CHCHAJIANIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHCHAJIANIM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION__SYNCFROMPROTO_OFFSET))(this, a1);
		}

	};
}
