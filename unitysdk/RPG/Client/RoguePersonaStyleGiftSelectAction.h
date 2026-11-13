#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHJJMCMJEHL;
namespace RPG::Client { class IRogueTournPersonaStyleGift; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB48610)
#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0x1CB48820)
#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_GET_FORCESELECTGIFTID_OFFSET UNITYSDK_OFFSET(0x1CB48580)
#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_GET_ISCORE_OFFSET UNITYSDK_OFFSET(0x1CB484F0)
#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_GET_ISDISABLEREROLL_OFFSET UNITYSDK_OFFSET(0x1CB485F0)
#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_GET_ISFORCESELECT_OFFSET UNITYSDK_OFFSET(0x1CB485A0)
#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_GET_MAXREROLLCOUNT_OFFSET UNITYSDK_OFFSET(0x1CB484B0)
#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_GET_REMAINREROLLCOUNT_OFFSET UNITYSDK_OFFSET(0x1CB484D0)
#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_GET_STYLEGIFTLIST_OFFSET UNITYSDK_OFFSET(0x1CB48490)
#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_REFRESHONROLLRSP_OFFSET UNITYSDK_OFFSET(0x1CB48720)
#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_SET_FORCESELECTGIFTID_OFFSET UNITYSDK_OFFSET(0x1CB48590)
#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_SET_ISDISABLEREROLL_OFFSET UNITYSDK_OFFSET(0x1CB48600)
#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_SET_MAXREROLLCOUNT_OFFSET UNITYSDK_OFFSET(0x1CB484C0)
#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_SET_REMAINREROLLCOUNT_OFFSET UNITYSDK_OFFSET(0x1CB484E0)
#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_SET_STYLEGIFTLIST_OFFSET UNITYSDK_OFFSET(0x1CB484A0)
#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x1CB48860)
#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION__CONSTRUCT_OFFSET UNITYSDK_OFFSET(0x1CB486B0)
#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION__SETUPSTYLEGIFTLIST_OFFSET UNITYSDK_OFFSET(0x1CB488B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoguePersonaStyleGiftSelectAction_TypeDefinitionIndex = 68985;

	class RoguePersonaStyleGiftSelectAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyleGift*>* _StyleGiftList_k__BackingField; // 0x10
		::System::UInt32 _RogueActionID; // 0x18
		::System::UInt32 _RemainRerollCount_k__BackingField; // 0x1C
		::System::UInt32 _MaxRerollCount_k__BackingField; // 0x20
		::System::UInt32 _ForceSelectGiftID_k__BackingField; // 0x24
		::System::Boolean _IsDisableReroll_k__BackingField; // 0x28
		::System::Void _ctor(::System::UInt32 a1, ::OHJJMCMJEHL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::OHJJMCMJEHL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyleGift*>* get_StyleGiftList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyleGift*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_GET_STYLEGIFTLIST_OFFSET))(this);
		}

		::System::Void set_StyleGiftList(::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyleGift*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyleGift*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_SET_STYLEGIFTLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxRerollCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_GET_MAXREROLLCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxRerollCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_SET_MAXREROLLCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_RemainRerollCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_GET_REMAINREROLLCOUNT_OFFSET))(this);
		}

		::System::Void set_RemainRerollCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_SET_REMAINREROLLCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_GET_ISCORE_OFFSET))(this);
		}

		::System::UInt32 get_ForceSelectGiftID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_GET_FORCESELECTGIFTID_OFFSET))(this);
		}

		::System::Void set_ForceSelectGiftID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_SET_FORCESELECTGIFTID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsForceSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_GET_ISFORCESELECT_OFFSET))(this);
		}

		::System::Boolean get_IsDisableReroll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_GET_ISDISABLEREROLL_OFFSET))(this);
		}

		::System::Void set_IsDisableReroll(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_SET_ISDISABLEREROLL_OFFSET))(this, a1);
		}

		::System::Void RefreshOnRollRsp(::OHJJMCMJEHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHJJMCMJEHL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_REFRESHONROLLRSP_OFFSET))(this, a1);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_TRIGGERACTION_OFFSET))(this);
		}

		::System::Void _Construct(::OHJJMCMJEHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHJJMCMJEHL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION__CONSTRUCT_OFFSET))(this, a1);
		}

		::System::Void _SetupStyleGiftList(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION__SETUPSTYLEGIFTLIST_OFFSET))(this, a1);
		}

	};
}
