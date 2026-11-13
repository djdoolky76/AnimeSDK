#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DrinkMakerQuantifyTagType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/RPG/Client/TextID.h"
class EGNFHANLGHB;
class KOJDMLGPKII;
class OFANJNFJCGL;
namespace RPG::Client { class DrinkMakerBarIngredient; }
namespace RPG::Client { class DrinkMakerBartendDrinkData; }
namespace RPG::Client { class DrinkMakerCheersAddMatChatData; }
namespace RPG::Client { class DrinkMakerCheersBartendDrinkDataExtend; }
namespace RPG::Client { class DrinkMakerCheersBartendRequestData; }
namespace RPG::Client { class DrinkMakerCheersDisplayData; }
namespace RPG::Client { class DrinkMakerCheersGroupData; }
namespace RPG::Client { class DrinkMakerCheersGroupState; }
namespace RPG::Client { class DrinkMakerCheersGuestCommentData; }
namespace RPG::Client { class DrinkMakerCheersGuestData; }
namespace RPG::Client { class DrinkMakerCheersGuestDrinkRecordData; }
namespace RPG::Client { class DrinkMakerCheersMadeDrinkData; }
namespace RPG::Client { class DrinkMakerCheersTagData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class DrinkMakerIngredientRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_CHEERSHASMADEANYDRINKINGROUP_OFFSET UNITYSDK_OFFSET(0x1DA645F0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_CHEERSHASMADEDRINKFORGROUP_OFFSET UNITYSDK_OFFSET(0x1DA6A0E0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_CHEERSSUBMITDRINKTOGUEST_OFFSET UNITYSDK_OFFSET(0x1DA62E10)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_CLEARONCANCELMAKEDRINK_OFFSET UNITYSDK_OFFSET(0x1DA6A300)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA5FE30)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DA6AEF0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_ENTERCHEERSMAKEDRINKBYREQUEST_OFFSET UNITYSDK_OFFSET(0x1DA62580)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_ENTERCHEERSMAKEDRINKSTORY_OFFSET UNITYSDK_OFFSET(0x1DA623D0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSACTIVITYTITLENAME_OFFSET UNITYSDK_OFFSET(0x1DA62B70)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSADDMATCHATDATA_OFFSET UNITYSDK_OFFSET(0x1DA69FE0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSDATA_OFFSET UNITYSDK_OFFSET(0x1DA62C10)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSDRINKAVAILABLEINGREDIENTROWDATA_OFFSET UNITYSDK_OFFSET(0x1DA5C030)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSDRINKAVAILABLEINGREDIENTS_OFFSET UNITYSDK_OFFSET(0x1DA63080)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSDRINKDATA_OFFSET UNITYSDK_OFFSET(0x1DA5A470)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSDRINKGUESTCOMMENTDATA_OFFSET UNITYSDK_OFFSET(0x1DA63490)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSDRINKNAME_OFFSET UNITYSDK_OFFSET(0x1DA64370)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSGROUPDATASFORHANDBOOK_OFFSET UNITYSDK_OFFSET(0x1DA64A60)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSGROUPDATA_OFFSET UNITYSDK_OFFSET(0x1DA64110)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSGUESTCOMMENTDATA_OFFSET UNITYSDK_OFFSET(0x1DA633E0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSGUESTDATAS_OFFSET UNITYSDK_OFFSET(0x1DA626F0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSGUESTDATA_OFFSET UNITYSDK_OFFSET(0x1DA64780)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSGUESTDRINKRECORDDATA_OFFSET UNITYSDK_OFFSET(0x1DA64920)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSHANDBOOKMADEDRINKCOUNT_OFFSET UNITYSDK_OFFSET(0x1DA65140)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSHANDBOOKTOTALDRINKCOUNT_OFFSET UNITYSDK_OFFSET(0x1DA64E30)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSINGREDIENTDATA_OFFSET UNITYSDK_OFFSET(0x1DA62FD0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSMADEDRINKDATA_OFFSET UNITYSDK_OFFSET(0x1DA64540)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSMAINSTORYPERFORMANCEDATA_OFFSET UNITYSDK_OFFSET(0x1DA69E70)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x1DA629F0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSSUBMITDRINKLIST_OFFSET UNITYSDK_OFFSET(0x1DA61F40)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCOMMENTDATAONHANDBOOK_OFFSET UNITYSDK_OFFSET(0x1DA63A90)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCURRENTNEEDSHOWPERFORMANCEDATABEFOREMAKEDRINK_OFFSET UNITYSDK_OFFSET(0x1DA69CC0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x1DA64D80)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETINVITEGUESTCOMMENTDATA_OFFSET UNITYSDK_OFFSET(0x1DA63650)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_BARTENDDRINKDATA_OFFSET UNITYSDK_OFFSET(0x1DA6AE70)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_CHEERSDRINKREQUESTDATA_OFFSET UNITYSDK_OFFSET(0x1DA6AE50)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_CURRENTGROUPSTATE_OFFSET UNITYSDK_OFFSET(0x1DA6AE90)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_DRINKMAKERCHEERSACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1DA62AA0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_DRINKMAKERCHEERSLASTMAKEDRINKID_OFFSET UNITYSDK_OFFSET(0x1DA621E0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_DRINKMAKERCHEERSLIMITEDREWARDID_OFFSET UNITYSDK_OFFSET(0x1DA5FBD0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_GROUPIDRETURNAFTERINVITE_OFFSET UNITYSDK_OFFSET(0x1DA6AD50)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_HASRECEIVEDRINKDATA_OFFSET UNITYSDK_OFFSET(0x1DA6AEB0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_ISININVITEGUESTREQUEST_OFFSET UNITYSDK_OFFSET(0x1DA664B0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_ISSENDINGMAKEDRINKREQ_OFFSET UNITYSDK_OFFSET(0x1DA6AED0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_HASMAKECHEERSDRINK_OFFSET UNITYSDK_OFFSET(0x1DA62F40)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_HASMAKEDRINKEXCEPTGUEST_OFFSET UNITYSDK_OFFSET(0x1DA64430)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_HASSEENINVITEGUESTFINISHDRINK_OFFSET UNITYSDK_OFFSET(0x1DA65A40)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_ISCHEERSDRINKUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1DA62EA0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_ISSELFGROUPDRINK_OFFSET UNITYSDK_OFFSET(0x1DA63920)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_ONCHEERSADDMADEDRINK_OFFSET UNITYSDK_OFFSET(0x1DA69590)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_ONCHEERSREFRESHMADEDRINKDATA_OFFSET UNITYSDK_OFFSET(0x1DA68DD0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_OPENINVITEGUESTPAGE_OFFSET UNITYSDK_OFFSET(0x1DA625F0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_PLAYDRINKGIVENAMEPERFORMANCEAFTERINVITEGUESTGIVEDRINK_OFFSET UNITYSDK_OFFSET(0x1DA69810)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_PLAYPERFORMANCEAFTERINVITEGUESTGIVEDRINK_OFFSET UNITYSDK_OFFSET(0x1DA67CC0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_REPORTDATAONENTERGAME_OFFSET UNITYSDK_OFFSET(0x1DA65430)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_REPORTDATAONFINISHGAME_OFFSET UNITYSDK_OFFSET(0x1DA656D0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_RETURNTOINVITEGUESTPAGEONMAKEDRINKSUMMARY_OFFSET UNITYSDK_OFFSET(0x1DA65EE0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_RETURNTOMAINPAGEONMAKEDRINKSUMMARY_OFFSET UNITYSDK_OFFSET(0x1DA65F70)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_SENDDRINKMAKEREQONENTERDRINKDISPLAY_OFFSET UNITYSDK_OFFSET(0x1DA660E0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_SETSEENINVITEGUESTFINISHDRINK_OFFSET UNITYSDK_OFFSET(0x1DA65C20)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_SET_BARTENDDRINKDATA_OFFSET UNITYSDK_OFFSET(0x1DA6AE80)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_SET_CHEERSDRINKREQUESTDATA_OFFSET UNITYSDK_OFFSET(0x1DA6AE60)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_SET_CURRENTGROUPSTATE_OFFSET UNITYSDK_OFFSET(0x1DA6AEA0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_SET_HASRECEIVEDRINKDATA_OFFSET UNITYSDK_OFFSET(0x1DA6AEC0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_SET_ISSENDINGMAKEDRINKREQ_OFFSET UNITYSDK_OFFSET(0x1DA6AEE0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_SHOWDRINKMAKERCHEERSSUMMARYAFTERINVITEGUEST_OFFSET UNITYSDK_OFFSET(0x1DA69A40)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_TRIGGERCUSTOMSTRING_OFFSET UNITYSDK_OFFSET(0x1DA67C50)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__CANENTERINVITEGUESTMAKEDRINK_OFFSET UNITYSDK_OFFSET(0x1DA68300)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__CLEARREQUESTDATAAFTERFINISHMAKEDRINK_OFFSET UNITYSDK_OFFSET(0x1DA67690)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__HANDLEMAKENEXTDRINKINTERNAL_OFFSET UNITYSDK_OFFSET(0x1DA66B30)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITCHEERSDRINKDATA_OFFSET UNITYSDK_OFFSET(0x1DA60310)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITCHEERSDRINKINGREDIENTDATA_OFFSET UNITYSDK_OFFSET(0x1DA605E0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITCHEERSGROUPDATA_OFFSET UNITYSDK_OFFSET(0x1DA60B60)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITCHEERSGUESTCOMMENTDATA_OFFSET UNITYSDK_OFFSET(0x1DA608A0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITCHEERSMAINSTORYPERFORMANCEDATA_OFFSET UNITYSDK_OFFSET(0x1DA60E20)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITCHEERSTAGDATA_OFFSET UNITYSDK_OFFSET(0x1DA5FF30)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITDRINKMAKERCHEERSADDMATCHATDATA_OFFSET UNITYSDK_OFFSET(0x1DA610F0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITDRINKMAKERCHEERSDISPLAYDATAS_OFFSET UNITYSDK_OFFSET(0x1DA617F0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITDRINKMAKERCHEERSGUESTDATA_OFFSET UNITYSDK_OFFSET(0x1DA613A0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONBARTENDRESULTDIALOGCLOSE_OFFSET UNITYSDK_OFFSET(0x1DA671F0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKECHEERSCANCELMAKEDRINK_OFFSET UNITYSDK_OFFSET(0x1DA68D80)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSINVITEGUESTAFTERGIVEDRINKPERFORMANCEPLAYEND_OFFSET UNITYSDK_OFFSET(0x1DA6ACB0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSINVITEGUESTCONFIRM_OFFSET UNITYSDK_OFFSET(0x1DA67DE0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSINVITEGUESTGIVEDRINK_OFFSET UNITYSDK_OFFSET(0x1DA689F0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSINVITEGUESTMAKEDRINKSTART_OFFSET UNITYSDK_OFFSET(0x1DA68710)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSMAINSTORYSTARTNEXTDRINKINENTRANCE_OFFSET UNITYSDK_OFFSET(0x1DA67910)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSMAINSTORYSTARTNEXTDRINK_OFFSET UNITYSDK_OFFSET(0x1DA678C0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSMAKEDRINKCONFIRM_OFFSET UNITYSDK_OFFSET(0x1DA67A50)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSONEMOREDRINKCONFIRM_OFFSET UNITYSDK_OFFSET(0x1DA684C0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSPERFORMANCEBEFOREMAKEDRINKPLAYEND_OFFSET UNITYSDK_OFFSET(0x1DA6AB10)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSSHOWMAINPAGEEND_OFFSET UNITYSDK_OFFSET(0x1DA68350)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSSTARTNEXTDAY_OFFSET UNITYSDK_OFFSET(0x1DA66FD0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSSTARTSERVEBTNCLICK_OFFSET UNITYSDK_OFFSET(0x1DA66510)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONEXITCOMMENTPAGE_OFFSET UNITYSDK_OFFSET(0x1DA67470)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONFINISHMAKEDRINK_OFFSET UNITYSDK_OFFSET(0x1DA673C0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONINVITEGUESTPERFORMANCEEND_OFFSET UNITYSDK_OFFSET(0x1DA68100)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONPREBARTENDPERFORMANCEEND_OFFSET UNITYSDK_OFFSET(0x1DA671A0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONSUBMITDRINKFINISHED_OFFSET UNITYSDK_OFFSET(0x1DA67420)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__REGISTERHANDLERS_OFFSET UNITYSDK_OFFSET(0x1DA61AC0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__SORTGUESTRECORDSDATA_OFFSET UNITYSDK_OFFSET(0x1DA6A640)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND___ONDRINKMAKERCHEERSMAINSTORYSTARTNEXTDRINKINENTRANCE_B__48_0_OFFSET UNITYSDK_OFFSET(0x1DA6B100)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND___ONDRINKMAKERCHEERSSTARTNEXTDAY_B__41_0_OFFSET UNITYSDK_OFFSET(0x1DA6AF70)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerCheersBarExtend_TypeDefinitionIndex = 65054;

	class DrinkMakerCheersBarExtend : public ::System::Object
	{
	public:
		::RPG::Client::DrinkMakerCheersGroupState* _CurrentGroupState_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerCheersGuestData*>* _DrinkMakerCheersGuestDatas; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerCheersGuestCommentData*>* _DrinkMakerCheersGuestCommentDatas; // 0x20
		::RPG::Client::DrinkMakerCheersGuestData* _NeedReturnInviteGuestData; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerCheersGroupData*>* _DrinkMakerCheersGroupDatas; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerCheersDisplayData*>* _DrinkMakerCheersDisplayDatas; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend*>* _DrinkMakerCheersDrinkDatas; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerCheersMadeDrinkData*>* _DrinkMakerCheersMadeDrinkDatas; // 0x48
		::RPG::Client::DrinkMakerCheersBartendRequestData* _CheersDrinkRequestData_k__BackingField; // 0x50
		::System::Collections::Generic::List_1<::EGNFHANLGHB*>* _DrinkMakerCheersMainStoryPerformaceDatas; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::DrinkMakerCheersAddMatChatData*>* _DrinkMakerCheersAddMatChatDatas; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerCheersTagData*>*>* _DrinkMakerCheersTagDatas; // 0x68
		::RPG::Client::DrinkMakerBartendDrinkData* _BartendDrinkData_k__BackingField; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerBarIngredient*>* _DrinkMakerCheersIngredientDatas; // 0x78
		::System::UInt32 _DrinkMakerCheersLastMakeDrinkID; // 0x80
		::System::UInt32 _InViteGuestDirectCommitDrinkGroupID; // 0x84
		::System::Boolean _IsNeedCancelMakeDrink; // 0x88
		::System::Boolean _HasReceiveDrinkData_k__BackingField; // 0x89
		::System::Boolean _IsSendingMakeDrinkReq_k__BackingField; // 0x8A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend*>* GetCheersSubmitDrinkList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSSUBMITDRINKLIST_OFFSET))(this);
		}

		::System::Void EnterCheersMakeDrinkStory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_ENTERCHEERSMAKEDRINKSTORY_OFFSET))(this);
		}

		::System::Void EnterCheersMakeDrinkByRequest(::RPG::Client::DrinkMakerCheersBartendRequestData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersBartendRequestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_ENTERCHEERSMAKEDRINKBYREQUEST_OFFSET))(this, a1);
		}

		::System::Void OpenInviteGuestPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_OPENINVITEGUESTPAGE_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* GetCheersScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSSCHEDULEDATA_OFFSET))(this);
		}

		::RPG::Client::TextID GetCheersActivityTitleName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSACTIVITYTITLENAME_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend* GetCheersDrinkData(::System::UInt32 a1)
		{
			return ((::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSDRINKDATA_OFFSET))(this, a1);
		}

		::RPG::Client::DrinkMakerCheersTagData* GetCheersData(::System::UInt32 a1, ::RPG::GameCore::DrinkMakerQuantifyTagType a2)
		{
			return ((::RPG::Client::DrinkMakerCheersTagData*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::DrinkMakerQuantifyTagType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSDATA_OFFSET))(this, a1, a2);
		}

		::System::Void CheersSubmitDrinkToGuest(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_CHEERSSUBMITDRINKTOGUEST_OFFSET))(this, a1);
		}

		::System::Boolean IsCheersDrinkUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_ISCHEERSDRINKUNLOCKED_OFFSET))(this, a1);
		}

		::RPG::Client::DrinkMakerBarIngredient* GetCheersIngredientData(::System::UInt32 a1)
		{
			return ((::RPG::Client::DrinkMakerBarIngredient*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSINGREDIENTDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarIngredient*>* GetCheersDrinkAvailableIngredients(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarIngredient*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSDRINKAVAILABLEINGREDIENTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerIngredientRow*>* GetCheersDrinkAvailableIngredientRowData(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerIngredientRow*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSDRINKAVAILABLEINGREDIENTROWDATA_OFFSET))(this, a1);
		}

		::RPG::Client::DrinkMakerCheersGuestCommentData* GetCheersGuestCommentData(::System::UInt32 a1)
		{
			return ((::RPG::Client::DrinkMakerCheersGuestCommentData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSGUESTCOMMENTDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerCheersGuestCommentData*>* GetCheersDrinkGuestCommentData(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerCheersGuestCommentData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSDRINKGUESTCOMMENTDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerCheersGuestCommentData*>* GetInviteGuestCommentData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerCheersGuestCommentData*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETINVITEGUESTCOMMENTDATA_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerCheersGuestCommentData*>* GetCommentDataOnHandBook(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerCheersGuestCommentData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCOMMENTDATAONHANDBOOK_OFFSET))(this, a1);
		}

		::System::Boolean IsSelfGroupDrink(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_ISSELFGROUPDRINK_OFFSET))(this, a1, a2);
		}

		::System::String* GetCheersDrinkName(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSDRINKNAME_OFFSET))(this, a1);
		}

		::RPG::Client::DrinkMakerCheersGroupData* GetCheersGroupData(::System::UInt32 a1)
		{
			return ((::RPG::Client::DrinkMakerCheersGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSGROUPDATA_OFFSET))(this, a1);
		}

		::System::Boolean HasMakeCheersDrink(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_HASMAKECHEERSDRINK_OFFSET))(this, a1);
		}

		::System::Boolean HasMakeDrinkExceptGuest(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_HASMAKEDRINKEXCEPTGUEST_OFFSET))(this, a1, a2);
		}

		::RPG::Client::DrinkMakerCheersMadeDrinkData* GetCheersMadeDrinkData(::System::UInt32 a1)
		{
			return ((::RPG::Client::DrinkMakerCheersMadeDrinkData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSMADEDRINKDATA_OFFSET))(this, a1);
		}

		::System::Boolean CheersHasMadeAnyDrinkInGroup(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_CHEERSHASMADEANYDRINKINGROUP_OFFSET))(this, a1);
		}

		::RPG::Client::DrinkMakerCheersGuestData* GetCheersGuestData(::System::UInt32 a1)
		{
			return ((::RPG::Client::DrinkMakerCheersGuestData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSGUESTDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerCheersGuestData*>* GetCheersGuestDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerCheersGuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSGUESTDATAS_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerCheersGuestDrinkRecordData* GetCheersGuestDrinkRecordData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::DrinkMakerCheersGuestDrinkRecordData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSGUESTDRINKRECORDDATA_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerCheersGroupData*>* GetCheersGroupDatasForHandBook()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerCheersGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSGROUPDATASFORHANDBOOK_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerCheersDisplayData* GetDisplayData(::System::UInt32 a1)
		{
			return ((::RPG::Client::DrinkMakerCheersDisplayData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETDISPLAYDATA_OFFSET))(this, a1);
		}

		::System::UInt32 GetCheersHandBookTotalDrinkCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSHANDBOOKTOTALDRINKCOUNT_OFFSET))(this);
		}

		::System::UInt32 GetCheersHandBookMadeDrinkCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSHANDBOOKMADEDRINKCOUNT_OFFSET))(this);
		}

		::System::Void ReportDataOnEnterGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_REPORTDATAONENTERGAME_OFFSET))(this);
		}

		::System::Void ReportDataOnFinishGame(::System::Boolean a1, ::System::Boolean a2, ::System::Single a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_REPORTDATAONFINISHGAME_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean HasSeenInviteGuestFinishDrink(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_HASSEENINVITEGUESTFINISHDRINK_OFFSET))(this, a1, a2);
		}

		::System::Void SetSeenInviteGuestFinishDrink(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_SETSEENINVITEGUESTFINISHDRINK_OFFSET))(this, a1, a2);
		}

		::System::Void ReturnToInviteGuestPageOnMakeDrinkSummary()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_RETURNTOINVITEGUESTPAGEONMAKEDRINKSUMMARY_OFFSET))(this);
		}

		::System::Void ReturnToMainPageOnMakeDrinkSummary()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_RETURNTOMAINPAGEONMAKEDRINKSUMMARY_OFFSET))(this);
		}

		::System::Void SendDrinkMakeReqOnEnterDrinkDisplay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_SENDDRINKMAKEREQONENTERDRINKDISPLAY_OFFSET))(this);
		}

		::System::Void _RegisterHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__REGISTERHANDLERS_OFFSET))(this);
		}

		::System::Void _OnDrinkMakerCheersStartServeBtnClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSSTARTSERVEBTNCLICK_OFFSET))(this, a1);
		}

		::System::Void _OnDrinkMakerCheersStartNextDay(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSSTARTNEXTDAY_OFFSET))(this, a1);
		}

		::System::Void _OnPreBartendPerformanceEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONPREBARTENDPERFORMANCEEND_OFFSET))(this, a1);
		}

		::System::Void _OnBartendResultDialogClose(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONBARTENDRESULTDIALOGCLOSE_OFFSET))(this, a1);
		}

		::System::Void _OnFinishMakeDrink(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONFINISHMAKEDRINK_OFFSET))(this, a1);
		}

		::System::Void _OnSubmitDrinkFinished(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONSUBMITDRINKFINISHED_OFFSET))(this, a1);
		}

		::System::Void _OnExitCommentPage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONEXITCOMMENTPAGE_OFFSET))(this, a1);
		}

		::System::Void _OnDrinkMakerCheersMainStoryStartNextDrink(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSMAINSTORYSTARTNEXTDRINK_OFFSET))(this, a1);
		}

		::System::Void _OnDrinkMakerCheersMainStoryStartNextDrinkInEntrance(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSMAINSTORYSTARTNEXTDRINKINENTRANCE_OFFSET))(this, a1);
		}

		::System::Void _OnDrinkMakerCheersMakeDrinkConfirm(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSMAKEDRINKCONFIRM_OFFSET))(this, a1);
		}

		::System::Void _OnDrinkMakerCheersInviteGuestConfirm(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSINVITEGUESTCONFIRM_OFFSET))(this, a1);
		}

		::System::Void _OnInviteGuestPerformanceEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONINVITEGUESTPERFORMANCEEND_OFFSET))(this);
		}

		::System::Void _OnDrinkMakerCheersShowMainPageEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSSHOWMAINPAGEEND_OFFSET))(this, a1);
		}

		::System::Void _OnDrinkMakerCheersOneMoreDrinkConfirm(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSONEMOREDRINKCONFIRM_OFFSET))(this, a1);
		}

		::System::Void _OnDrinkMakerCheersInviteGuestMakeDrinkStart(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSINVITEGUESTMAKEDRINKSTART_OFFSET))(this, a1);
		}

		::System::Void _OnDrinkMakerCheersInviteGuestGiveDrink(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSINVITEGUESTGIVEDRINK_OFFSET))(this, a1);
		}

		::System::Void _OnDrinkMakeCheersCancelMakeDrink(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKECHEERSCANCELMAKEDRINK_OFFSET))(this, a1);
		}

		::System::Void OnCheersRefreshMadeDrinkData(::OFANJNFJCGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFANJNFJCGL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_ONCHEERSREFRESHMADEDRINKDATA_OFFSET))(this, a1);
		}

		::System::Void OnCheersAddMadeDrink(::KOJDMLGPKII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOJDMLGPKII*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_ONCHEERSADDMADEDRINK_OFFSET))(this, a1);
		}

		::System::Void PlayPerformanceAfterInviteGuestGiveDrink(::RPG::Client::DrinkMakerCheersGuestDrinkRecordData* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGuestDrinkRecordData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_PLAYPERFORMANCEAFTERINVITEGUESTGIVEDRINK_OFFSET))(this, a1, a2);
		}

		::System::Void PlayDrinkGiveNamePerformanceAfterInviteGuestGiveDrink(::RPG::Client::DrinkMakerCheersGuestDrinkRecordData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGuestDrinkRecordData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_PLAYDRINKGIVENAMEPERFORMANCEAFTERINVITEGUESTGIVEDRINK_OFFSET))(this, a1);
		}

		::System::Void ShowDrinkMakerCheersSummaryAfterInviteGuest(::RPG::Client::DrinkMakerCheersGuestDrinkRecordData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGuestDrinkRecordData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_SHOWDRINKMAKERCHEERSSUMMARYAFTERINVITEGUEST_OFFSET))(this, a1);
		}

		::System::Void TriggerCustomString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_TRIGGERCUSTOMSTRING_OFFSET))(this, a1);
		}

		::EGNFHANLGHB* GetCurrentNeedShowPerformanceDataBeforeMakeDrink()
		{
			return ((::EGNFHANLGHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCURRENTNEEDSHOWPERFORMANCEDATABEFOREMAKEDRINK_OFFSET))(this);
		}

		::EGNFHANLGHB* GetCheersMainStoryPerformanceData(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::EGNFHANLGHB*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSMAINSTORYPERFORMANCEDATA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::DrinkMakerCheersAddMatChatData* GetCheersAddMatChatData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::DrinkMakerCheersAddMatChatData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSADDMATCHATDATA_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheersHasMadeDrinkForGroup(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_CHEERSHASMADEDRINKFORGROUP_OFFSET))(this, a1, a2);
		}

		::System::Void ClearOnCancelMakeDrink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_CLEARONCANCELMAKEDRINK_OFFSET))(this);
		}

		::System::Void _InitCheersTagData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITCHEERSTAGDATA_OFFSET))(this);
		}

		::System::Void _InitCheersDrinkData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITCHEERSDRINKDATA_OFFSET))(this);
		}

		::System::Void _InitCheersDrinkIngredientData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITCHEERSDRINKINGREDIENTDATA_OFFSET))(this);
		}

		::System::Void _InitCheersGuestCommentData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITCHEERSGUESTCOMMENTDATA_OFFSET))(this);
		}

		::System::Void _InitCheersGroupData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITCHEERSGROUPDATA_OFFSET))(this);
		}

		::System::Void _InitCheersMainStoryPerformanceData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITCHEERSMAINSTORYPERFORMANCEDATA_OFFSET))(this);
		}

		::System::Void _InitDrinkMakerCheersAddMatChatData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITDRINKMAKERCHEERSADDMATCHATDATA_OFFSET))(this);
		}

		::System::Void _InitDrinkMakerCheersGuestData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITDRINKMAKERCHEERSGUESTDATA_OFFSET))(this);
		}

		::System::Void _SortGuestRecordsData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__SORTGUESTRECORDSDATA_OFFSET))(this);
		}

		::System::Void _InitDrinkMakerCheersDisplayDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITDRINKMAKERCHEERSDISPLAYDATAS_OFFSET))(this);
		}

		::System::Void _OnDrinkMakerCheersPerformanceBeforeMakeDrinkPlayEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSPERFORMANCEBEFOREMAKEDRINKPLAYEND_OFFSET))(this);
		}

		::System::Void _OnDrinkMakerCheersInviteGuestAfterGiveDrinkPerformancePlayEnd(::RPG::Client::DrinkMakerCheersGuestDrinkRecordData* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGuestDrinkRecordData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSINVITEGUESTAFTERGIVEDRINKPERFORMANCEPLAYEND_OFFSET))(this, a1, a2);
		}

		::System::Void _HandleMakeNextDrinkInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__HANDLEMAKENEXTDRINKINTERNAL_OFFSET))(this);
		}

		::System::Void _ClearRequestDataAfterFinishMakeDrink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__CLEARREQUESTDATAAFTERFINISHMAKEDRINK_OFFSET))(this);
		}

		::System::Boolean _CanEnterInviteGuestMakeDrink(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__CANENTERINVITEGUESTMAKEDRINK_OFFSET))(this, a1);
		}

		::RPG::Client::DrinkMakerCheersBartendRequestData* get_CheersDrinkRequestData()
		{
			return ((::RPG::Client::DrinkMakerCheersBartendRequestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_CHEERSDRINKREQUESTDATA_OFFSET))(this);
		}

		::System::Void set_CheersDrinkRequestData(::RPG::Client::DrinkMakerCheersBartendRequestData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersBartendRequestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_SET_CHEERSDRINKREQUESTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::DrinkMakerBartendDrinkData* get_BartendDrinkData()
		{
			return ((::RPG::Client::DrinkMakerBartendDrinkData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_BARTENDDRINKDATA_OFFSET))(this);
		}

		::System::Void set_BartendDrinkData(::RPG::Client::DrinkMakerBartendDrinkData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerBartendDrinkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_SET_BARTENDDRINKDATA_OFFSET))(this, a1);
		}

		::RPG::Client::DrinkMakerCheersGroupState* get_CurrentGroupState()
		{
			return ((::RPG::Client::DrinkMakerCheersGroupState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_CURRENTGROUPSTATE_OFFSET))(this);
		}

		::System::Void set_CurrentGroupState(::RPG::Client::DrinkMakerCheersGroupState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGroupState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_SET_CURRENTGROUPSTATE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInInviteGuestRequest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_ISININVITEGUESTREQUEST_OFFSET))(this);
		}

		::System::Boolean get_HasReceiveDrinkData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_HASRECEIVEDRINKDATA_OFFSET))(this);
		}

		::System::Void set_HasReceiveDrinkData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_SET_HASRECEIVEDRINKDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSendingMakeDrinkReq()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_ISSENDINGMAKEDRINKREQ_OFFSET))(this);
		}

		::System::Void set_IsSendingMakeDrinkReq(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_SET_ISSENDINGMAKEDRINKREQ_OFFSET))(this, a1);
		}

		::System::UInt32 get_DrinkMakerCheersLastMakeDrinkID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_DRINKMAKERCHEERSLASTMAKEDRINKID_OFFSET))(this);
		}

		static ::System::UInt32 get_DrinkMakerCheersLimitedRewardID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_DRINKMAKERCHEERSLIMITEDREWARDID_OFFSET))();
		}

		static ::System::UInt32 get_DrinkMakerCheersActivityID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_DRINKMAKERCHEERSACTIVITYID_OFFSET))();
		}

		static ::System::UInt32 get_GroupIDReturnAfterInvite()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_GROUPIDRETURNAFTERINVITE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_DISPOSE_OFFSET))(this);
		}

		::System::Void __OnDrinkMakerCheersStartNextDay_b__41_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND___ONDRINKMAKERCHEERSSTARTNEXTDAY_B__41_0_OFFSET))(this);
		}

		::System::Void __OnDrinkMakerCheersMainStoryStartNextDrinkInEntrance_b__48_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND___ONDRINKMAKERCHEERSMAINSTORYSTARTNEXTDRINKINENTRANCE_B__48_0_OFFSET))(this, a1);
		}

	};
}
