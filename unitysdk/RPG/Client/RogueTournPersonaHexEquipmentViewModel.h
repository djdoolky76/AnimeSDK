#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaBaseViewModel.h"
namespace RPG::Client { class IRogueTournHex; }
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueTournPersonaHexEquipmentSelectInfo; }
namespace RPG::Client { class RogueTournPersonaHexEquipmentSlotPanelInfo; }
namespace RPG::Client { class RogueTournPersonaHexEquipmentViewModel; }
namespace RPG::Client { class RogueWorkBenchHexEquipment; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_ADDATTACKDAMAGETYPEFILTER_OFFSET UNITYSDK_OFFSET(0xEA8B630)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_ADDAVATARBASETYPEFILTER_OFFSET UNITYSDK_OFFSET(0xEA8B690)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_APPLYHEXFILTERS_OFFSET UNITYSDK_OFFSET(0xEA8B6F0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_CLEARHEXFILTERS_OFFSET UNITYSDK_OFFSET(0xEA8B540)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xEA8AB80)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xEA8AC60)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_DISPLAYEDINDEXOF_OFFSET UNITYSDK_OFFSET(0xEA88990)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_EQUIPHEX_OFFSET UNITYSDK_OFFSET(0xEA8C2B0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_ACHIVEDHEXES_OFFSET UNITYSDK_OFFSET(0xEA89B00)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_DISPLAYEDHEXES_OFFSET UNITYSDK_OFFSET(0xEA88E60)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_HEXEQUIPMENTWORKBENCH_OFFSET UNITYSDK_OFFSET(0xEA8AA20)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_HEXES_OFFSET UNITYSDK_OFFSET(0xEA8A9E0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_SELECTINFO_OFFSET UNITYSDK_OFFSET(0xEA8AA40)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_SLOTPANELINFO_OFFSET UNITYSDK_OFFSET(0xEA8AA60)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_INDEXOF_OFFSET UNITYSDK_OFFSET(0xEA8B480)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_ISHEXBUILDREFRECOMMEND_OFFSET UNITYSDK_OFFSET(0xEA8BAA0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_ISHEXEQUIPPED_OFFSET UNITYSDK_OFFSET(0xEA88AB0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SELECTHEX_OFFSET UNITYSDK_OFFSET(0xEA8BE00)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SET_HEXEQUIPMENTWORKBENCH_OFFSET UNITYSDK_OFFSET(0xEA8AA30)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SET_SELECTINFO_OFFSET UNITYSDK_OFFSET(0xEA8AA50)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SET_SLOTPANELINFO_OFFSET UNITYSDK_OFFSET(0xEA8AA70)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SHOWPAGE_OFFSET UNITYSDK_OFFSET(0xEA8AA80)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_TRYUNEQUIPHEX_OFFSET UNITYSDK_OFFSET(0xEA89CE0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__COMPAREHEXES_OFFSET UNITYSDK_OFFSET(0xEA8C1D0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0xEA8AD40)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__ISATTACKDAMAGETYPEACCEPTED_OFFSET UNITYSDK_OFFSET(0xEA8BFA0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__ISAVATARPATHACCEPTED_OFFSET UNITYSDK_OFFSET(0xEA8C070)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__ISHEXACCEPTEDBYFILTER_OFFSET UNITYSDK_OFFSET(0xEA8BEF0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xEA8B0F0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__ONROGUEWORKBENCHHANDLEFUNC_OFFSET UNITYSDK_OFFSET(0xEA8B200)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REFRESHDISPLAYEDHEXES_OFFSET UNITYSDK_OFFSET(0xEA8B7A0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REGISTERNOTIFY_OFFSET UNITYSDK_OFFSET(0xEA8B030)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REJECTPROMISE_OFFSET UNITYSDK_OFFSET(0xEA8CC60)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REMOVENOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xEA8B140)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REPORTEQUIPHEX_OFFSET UNITYSDK_OFFSET(0xEA8CDF0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REQUESTEQUIPHEX_OFFSET UNITYSDK_OFFSET(0xEA8C660)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__SETUPHEXES_OFFSET UNITYSDK_OFFSET(0xEA8ADB0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__SETUPSELECTEDHEXAFTERFILTER_OFFSET UNITYSDK_OFFSET(0xEA8B9B0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__SHOWUNEQUIPHEXCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0xEA8C7C0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__UNEQUIPHEX_OFFSET UNITYSDK_OFFSET(0xEA8C9B0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___UNEQUIPHEX_B__44_1_OFFSET UNITYSDK_OFFSET(0xEA8D120)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaHexEquipmentViewModel_TypeDefinitionIndex = 75002;

	class RogueTournPersonaHexEquipmentViewModel : public ::RPG::Client::RogueTournPersonaBaseViewModel
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _AvatarPathFilterTypes; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournHex*>* _AchivedHexes; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournHex*>* _Hexes; // 0x30
		::RPG::Client::RogueTournPersonaHexEquipmentSlotPanelInfo* _SlotPanelInfo_k__BackingField; // 0x38
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _AttackDamageTypeFilterTypes; // 0x40
		::RPG::Client::Promises::Promise* _EquipHexPromise; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournHex*>* _DisplayedHexes; // 0x50
		::RPG::Client::RogueTournPersonaHexEquipmentSelectInfo* _SelectInfo_k__BackingField; // 0x58
		::RPG::Client::RogueWorkBenchHexEquipment* _HexEquipmentWorkBench_k__BackingField; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournHex*>* get_Hexes()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournHex*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_HEXES_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournHex*>* get_DisplayedHexes()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournHex*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_DISPLAYEDHEXES_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournHex*>* get_AchivedHexes()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournHex*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_ACHIVEDHEXES_OFFSET))(this);
		}

		::RPG::Client::RogueWorkBenchHexEquipment* get_HexEquipmentWorkBench()
		{
			return ((::RPG::Client::RogueWorkBenchHexEquipment*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_HEXEQUIPMENTWORKBENCH_OFFSET))(this);
		}

		::System::Void set_HexEquipmentWorkBench(::RPG::Client::RogueWorkBenchHexEquipment* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchHexEquipment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SET_HEXEQUIPMENTWORKBENCH_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournPersonaHexEquipmentSelectInfo* get_SelectInfo()
		{
			return ((::RPG::Client::RogueTournPersonaHexEquipmentSelectInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_SELECTINFO_OFFSET))(this);
		}

		::System::Void set_SelectInfo(::RPG::Client::RogueTournPersonaHexEquipmentSelectInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournPersonaHexEquipmentSelectInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SET_SELECTINFO_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournPersonaHexEquipmentSlotPanelInfo* get_SlotPanelInfo()
		{
			return ((::RPG::Client::RogueTournPersonaHexEquipmentSlotPanelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_SLOTPANELINFO_OFFSET))(this);
		}

		::System::Void set_SlotPanelInfo(::RPG::Client::RogueTournPersonaHexEquipmentSlotPanelInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournPersonaHexEquipmentSlotPanelInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SET_SLOTPANELINFO_OFFSET))(this, a1);
		}

		static ::RPG::Client::LuaUIController* ShowPage(::RPG::Client::RogueWorkBenchHexEquipment* a1)
		{
			return ((::RPG::Client::LuaUIController*(*)(::RPG::Client::RogueWorkBenchHexEquipment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SHOWPAGE_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournPersonaHexEquipmentViewModel* Create(::RPG::Client::RogueWorkBenchHexEquipment* a1)
		{
			return ((::RPG::Client::RogueTournPersonaHexEquipmentViewModel*(*)(::RPG::Client::RogueWorkBenchHexEquipment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_CREATE_OFFSET))(a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__INIT_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__ONDISPOSE_OFFSET))(this);
		}

		::System::Void _RegisterNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REGISTERNOTIFY_OFFSET))(this);
		}

		::System::Void _OnRogueWorkbenchHandleFunc(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__ONROGUEWORKBENCHHANDLEFUNC_OFFSET))(this, a1);
		}

		::System::Void _RemoveNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REMOVENOTIFYHANDLERS_OFFSET))(this);
		}

		::System::UInt32 IndexOf(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_INDEXOF_OFFSET))(this, a1);
		}

		::System::UInt32 DisplayedIndexOf(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_DISPLAYEDINDEXOF_OFFSET))(this, a1);
		}

		::System::Void ClearHexFilters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_CLEARHEXFILTERS_OFFSET))(this);
		}

		::System::Void AddAttackDamageTypeFilter(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_ADDATTACKDAMAGETYPEFILTER_OFFSET))(this, a1);
		}

		::System::Void AddAvatarBaseTypeFilter(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_ADDAVATARBASETYPEFILTER_OFFSET))(this, a1);
		}

		::System::Void ApplyHexFilters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_APPLYHEXFILTERS_OFFSET))(this);
		}

		::System::Boolean IsHexEquipped(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_ISHEXEQUIPPED_OFFSET))(this, a1);
		}

		::System::Boolean IsHexBuildRefRecommend(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_ISHEXBUILDREFRECOMMEND_OFFSET))(this, a1);
		}

		::System::Void SelectHex(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SELECTHEX_OFFSET))(this, a1);
		}

		::System::Void _SetupHexes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__SETUPHEXES_OFFSET))(this);
		}

		::System::Void _RefreshDisplayedHexes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REFRESHDISPLAYEDHEXES_OFFSET))(this);
		}

		::System::Boolean _IsHexAcceptedByFilter(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__ISHEXACCEPTEDBYFILTER_OFFSET))(this, a1);
		}

		::System::Boolean _IsAttackDamageTypeAccepted(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__ISATTACKDAMAGETYPEACCEPTED_OFFSET))(this, a1);
		}

		::System::Boolean _IsAvatarPathAccepted(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__ISAVATARPATHACCEPTED_OFFSET))(this, a1);
		}

		::System::Void _SetupSelectedHexAfterFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__SETUPSELECTEDHEXAFTERFILTER_OFFSET))(this);
		}

		::System::Int32 _CompareHexes(::RPG::Client::IRogueTournHex* a1, ::RPG::Client::IRogueTournHex* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournHex*, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__COMPAREHEXES_OFFSET))(this, a1, a2);
		}

		::System::Void EquipHex(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_EQUIPHEX_OFFSET))(this, a1);
		}

		::System::Void TryUnEquipHex(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_TRYUNEQUIPHEX_OFFSET))(this, a1);
		}

		::System::Void _ShowUnEquipHexConfirmDialog(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__SHOWUNEQUIPHEXCONFIRMDIALOG_OFFSET))(this, a1);
		}

		::System::Void _UnEquipHex(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__UNEQUIPHEX_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _RequestEquipHex(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REQUESTEQUIPHEX_OFFSET))(this, a1);
		}

		::System::Void _ReportEquipHex(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REPORTEQUIPHEX_OFFSET))(this, a1);
		}

		::System::Void _RejectPromise(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REJECTPROMISE_OFFSET))(this, a1);
		}

		::System::Void __UnEquipHex_b__44_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___UNEQUIPHEX_B__44_1_OFFSET))(this);
		}

	};
}
