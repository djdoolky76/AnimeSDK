#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
class EJCLAFODBMD;
class FABNLDDIMIG;
class FJFNJCPHFDM;
class FJIJGGEANOH;
class KCJNGDLDKFG;
class MCHECHNKADP;
class OBJANKHLNGO;
class ONDGOPEKJNF;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftCoinResBarViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftOrderDetailInfoViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftOrderItemViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftOrderSelectTipsViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentTreeEntranceViewModel; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define HBDIGCKCAEB_AAAKIGLHFFF_OFFSET UNITYSDK_OFFSET(0x15BDB880)
#define HBDIGCKCAEB_ADD_HANDLESETEXITAFTERTRANSITION_OFFSET UNITYSDK_OFFSET(0x15BDA410)
#define HBDIGCKCAEB_BGCONAMFDOO_OFFSET UNITYSDK_OFFSET(0x15BDAC90)
#define HBDIGCKCAEB_BGKFAKCBKBJ_OFFSET UNITYSDK_OFFSET(0x15BDB450)
#define HBDIGCKCAEB_CTOR_OFFSET UNITYSDK_OFFSET(0x15BDB8D0)
#define HBDIGCKCAEB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BDA9E0)
#define HBDIGCKCAEB_DMDCDEEKEGF_OFFSET UNITYSDK_OFFSET(0x15BDA660)
#define HBDIGCKCAEB_EDGHLLBMHJI_OFFSET UNITYSDK_OFFSET(0x15BDB4B0)
#define HBDIGCKCAEB_FBGOFAOFNPO_OFFSET UNITYSDK_OFFSET(0x15BDB070)
#define HBDIGCKCAEB_GET_AUDIOSERVICE_OFFSET UNITYSDK_OFFSET(0x15BDA2D0)
#define HBDIGCKCAEB_GET_COINRESBAR_OFFSET UNITYSDK_OFFSET(0x15BDA3D0)
#define HBDIGCKCAEB_GET_DETAILINFO_OFFSET UNITYSDK_OFFSET(0x15BDA390)
#define HBDIGCKCAEB_GET_ISINTUTORIALLEVEL_OFFSET UNITYSDK_OFFSET(0x15BDA3F0)
#define HBDIGCKCAEB_GET_MESSENGER_OFFSET UNITYSDK_OFFSET(0x15BDA2B0)
#define HBDIGCKCAEB_GET_ORDERLIST_OFFSET UNITYSDK_OFFSET(0x15BDA350)
#define HBDIGCKCAEB_GET_QUERYUSERPREFSSERVICE_OFFSET UNITYSDK_OFFSET(0x15BDA2F0)
#define HBDIGCKCAEB_GET_TALENTENTRANCE_OFFSET UNITYSDK_OFFSET(0x15BDA370)
#define HBDIGCKCAEB_GET_TIPS_OFFSET UNITYSDK_OFFSET(0x15BDA3B0)
#define HBDIGCKCAEB_GET_WORKSHOPLEVELCONFIGREPOSITORY_OFFSET UNITYSDK_OFFSET(0x15BDA330)
#define HBDIGCKCAEB_GET_WORKSHOPREPOSITORY_OFFSET UNITYSDK_OFFSET(0x15BDA310)
#define HBDIGCKCAEB_HMAKPHPEBFJ_OFFSET UNITYSDK_OFFSET(0x15BDB3F0)
#define HBDIGCKCAEB_JBCCBPBBAIJ_OFFSET UNITYSDK_OFFSET(0x15BDAD50)
#define HBDIGCKCAEB_JNOOIIAIIAB_OFFSET UNITYSDK_OFFSET(0x15BDB0D0)
#define HBDIGCKCAEB_LMJGFCHNCFM_OFFSET UNITYSDK_OFFSET(0x15BDB640)
#define HBDIGCKCAEB_MNIKINDFNPI_OFFSET UNITYSDK_OFFSET(0x15BDB7E0)
#define HBDIGCKCAEB_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x15BDAC30)
#define HBDIGCKCAEB_OGNJAICKAOB_OFFSET UNITYSDK_OFFSET(0x15BDAB70)
#define HBDIGCKCAEB_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x15BDA4D0)
#define HBDIGCKCAEB_REMOVE_HANDLESETEXITAFTERTRANSITION_OFFSET UNITYSDK_OFFSET(0x15BDA470)
#define HBDIGCKCAEB_SET_AUDIOSERVICE_OFFSET UNITYSDK_OFFSET(0x15BDA2E0)
#define HBDIGCKCAEB_SET_COINRESBAR_OFFSET UNITYSDK_OFFSET(0x15BDA3E0)
#define HBDIGCKCAEB_SET_DETAILINFO_OFFSET UNITYSDK_OFFSET(0x15BDA3A0)
#define HBDIGCKCAEB_SET_ISINTUTORIALLEVEL_OFFSET UNITYSDK_OFFSET(0x15BDA400)
#define HBDIGCKCAEB_SET_MESSENGER_OFFSET UNITYSDK_OFFSET(0x15BDA2C0)
#define HBDIGCKCAEB_SET_ORDERLIST_OFFSET UNITYSDK_OFFSET(0x15BDA360)
#define HBDIGCKCAEB_SET_QUERYUSERPREFSSERVICE_OFFSET UNITYSDK_OFFSET(0x15BDA300)
#define HBDIGCKCAEB_SET_TALENTENTRANCE_OFFSET UNITYSDK_OFFSET(0x15BDA380)
#define HBDIGCKCAEB_SET_TIPS_OFFSET UNITYSDK_OFFSET(0x15BDA3C0)
#define HBDIGCKCAEB_SET_WORKSHOPLEVELCONFIGREPOSITORY_OFFSET UNITYSDK_OFFSET(0x15BDA340)
#define HBDIGCKCAEB_SET_WORKSHOPREPOSITORY_OFFSET UNITYSDK_OFFSET(0x15BDA320)
#define HBDIGCKCAEB__INITIALIZE_B__50_0_OFFSET UNITYSDK_OFFSET(0x15BDB8E0)
#define HBDIGCKCAEB___ONCONFIRM_B__59_0_OFFSET UNITYSDK_OFFSET(0x15BDBA00)
#define HBDIGCKCAEB___ONCONFIRM_G__ENTERCRAFT_59_1_OFFSET UNITYSDK_OFFSET(0x15BDAFE0)

inline static constexpr unsigned int HBDIGCKCAEB_TypeDefinitionIndex = 79668;

	class HBDIGCKCAEB : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftOrderDetailInfoViewModel* _DetailInfo_k__BackingField; // 0x10
		::System::Action* MHDDNJLMBFI; // 0x18
		::FJFNJCPHFDM* _WorkshopRepository_k__BackingField; // 0x20
		::Sofa::Core::SimpleCommand* LCGBLFOHNFA; // 0x28
		::EJCLAFODBMD* _QueryUserPrefsService_k__BackingField; // 0x30
		::RPG::Client::MechCraft::ViewModel::MechCraftCoinResBarViewModel* _CoinResBar_k__BackingField; // 0x38
		::Sofa::Core::SimpleCommand* FGHLGECDPMB; // 0x40
		::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel* _TalentEntrance_k__BackingField; // 0x48
		::FABNLDDIMIG* _WorkshopLevelConfigRepository_k__BackingField; // 0x50
		::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* PPGMKDPNFPF; // 0x58
		::OBJANKHLNGO* _Messenger_k__BackingField; // 0x60
		::KCJNGDLDKFG* FFILMBCHEIM; // 0x68
		::System::Action_1<::System::Boolean>* HandleSetExitAfterTransition; // 0x70
		::FJIJGGEANOH* _OrderList_k__BackingField; // 0x78
		::RPG::Client::MechCraft::ViewModel::MechCraftOrderSelectTipsViewModel* _Tips_k__BackingField; // 0x80
		::MCHECHNKADP* _AudioService_k__BackingField; // 0x88
		::System::Boolean _IsInTutorialLevel_k__BackingField; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_CTOR_OFFSET))(this);
		}

		::OBJANKHLNGO* get_Messenger()
		{
			return ((::OBJANKHLNGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_GET_MESSENGER_OFFSET))(this);
		}

		::System::Void set_Messenger(::OBJANKHLNGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_SET_MESSENGER_OFFSET))(this, a1);
		}

		::MCHECHNKADP* get_AudioService()
		{
			return ((::MCHECHNKADP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_GET_AUDIOSERVICE_OFFSET))(this);
		}

		::System::Void set_AudioService(::MCHECHNKADP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCHECHNKADP*))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_SET_AUDIOSERVICE_OFFSET))(this, a1);
		}

		::EJCLAFODBMD* get_QueryUserPrefsService()
		{
			return ((::EJCLAFODBMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_GET_QUERYUSERPREFSSERVICE_OFFSET))(this);
		}

		::System::Void set_QueryUserPrefsService(::EJCLAFODBMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJCLAFODBMD*))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_SET_QUERYUSERPREFSSERVICE_OFFSET))(this, a1);
		}

		::FJFNJCPHFDM* get_WorkshopRepository()
		{
			return ((::FJFNJCPHFDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_GET_WORKSHOPREPOSITORY_OFFSET))(this);
		}

		::System::Void set_WorkshopRepository(::FJFNJCPHFDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJFNJCPHFDM*))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_SET_WORKSHOPREPOSITORY_OFFSET))(this, a1);
		}

		::FABNLDDIMIG* get_WorkshopLevelConfigRepository()
		{
			return ((::FABNLDDIMIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_GET_WORKSHOPLEVELCONFIGREPOSITORY_OFFSET))(this);
		}

		::System::Void set_WorkshopLevelConfigRepository(::FABNLDDIMIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FABNLDDIMIG*))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_SET_WORKSHOPLEVELCONFIGREPOSITORY_OFFSET))(this, a1);
		}

		::FJIJGGEANOH* get_OrderList()
		{
			return ((::FJIJGGEANOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_GET_ORDERLIST_OFFSET))(this);
		}

		::System::Void set_OrderList(::FJIJGGEANOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJIJGGEANOH*))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_SET_ORDERLIST_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel* get_TalentEntrance()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_GET_TALENTENTRANCE_OFFSET))(this);
		}

		::System::Void set_TalentEntrance(::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel*))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_SET_TALENTENTRANCE_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftOrderDetailInfoViewModel* get_DetailInfo()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftOrderDetailInfoViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_GET_DETAILINFO_OFFSET))(this);
		}

		::System::Void set_DetailInfo(::RPG::Client::MechCraft::ViewModel::MechCraftOrderDetailInfoViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderDetailInfoViewModel*))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_SET_DETAILINFO_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftOrderSelectTipsViewModel* get_Tips()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftOrderSelectTipsViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_GET_TIPS_OFFSET))(this);
		}

		::System::Void set_Tips(::RPG::Client::MechCraft::ViewModel::MechCraftOrderSelectTipsViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderSelectTipsViewModel*))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_SET_TIPS_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftCoinResBarViewModel* get_CoinResBar()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftCoinResBarViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_GET_COINRESBAR_OFFSET))(this);
		}

		::System::Void set_CoinResBar(::RPG::Client::MechCraft::ViewModel::MechCraftCoinResBarViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftCoinResBarViewModel*))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_SET_COINRESBAR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInTutorialLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_GET_ISINTUTORIALLEVEL_OFFSET))(this);
		}

		::System::Void set_IsInTutorialLevel(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_SET_ISINTUTORIALLEVEL_OFFSET))(this, a1);
		}

		::System::Void add_HandleSetExitAfterTransition(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_ADD_HANDLESETEXITAFTERTRANSITION_OFFSET))(this, a1);
		}

		::System::Void remove_HandleSetExitAfterTransition(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_REMOVE_HANDLESETEXITAFTERTRANSITION_OFFSET))(this, a1);
		}

		::System::Void OINBDMGFFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_OINBDMGFFJL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_DISPOSE_OFFSET))(this);
		}

		::CEEGMMCFCBG* OGNJAICKAOB()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_OGNJAICKAOB_OFFSET))(this);
		}

		::System::Void NMPLHCJKEOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_NMPLHCJKEOI_OFFSET))(this);
		}

		::CEEGMMCFCBG* BGCONAMFDOO()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_BGCONAMFDOO_OFFSET))(this);
		}

		::System::Void JBCCBPBBAIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_JBCCBPBBAIJ_OFFSET))(this);
		}

		::System::Void FBGOFAOFNPO(::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_FBGOFAOFNPO_OFFSET))(this, a1);
		}

		::System::Void HMAKPHPEBFJ(::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_HMAKPHPEBFJ_OFFSET))(this, a1);
		}

		::System::Void BGKFAKCBKBJ(::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_BGKFAKCBKBJ_OFFSET))(this, a1);
		}

		::System::Void JNOOIIAIIAB(::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_JNOOIIAIIAB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EDGHLLBMHJI(::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_EDGHLLBMHJI_OFFSET))(this, a1);
		}

		::System::Void MNIKINDFNPI(::System::Object* a1, ::ONDGOPEKJNF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::ONDGOPEKJNF*))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_MNIKINDFNPI_OFFSET))(this, a1, a2);
		}

		::System::Void AAAKIGLHFFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_AAAKIGLHFFF_OFFSET))(this);
		}

		::System::Void DMDCDEEKEGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_DMDCDEEKEGF_OFFSET))(this);
		}

		::System::Void LMJGFCHNCFM(::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*))((::PBYTE)hIl2Cpp + HBDIGCKCAEB_LMJGFCHNCFM_OFFSET))(this, a1);
		}

		::System::Void _Initialize_b__50_0(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + HBDIGCKCAEB__INITIALIZE_B__50_0_OFFSET))(this, a1, a2);
		}

		::System::Void __OnConfirm_b__59_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBDIGCKCAEB___ONCONFIRM_B__59_0_OFFSET))(this, a1);
		}

		::System::Void __OnConfirm_g__EnterCraft_59_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBDIGCKCAEB___ONCONFIRM_G__ENTERCRAFT_59_1_OFFSET))(this);
		}

	};
