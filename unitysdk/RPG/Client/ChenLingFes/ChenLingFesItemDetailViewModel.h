#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesItemRare.h"
#include "unitysdk/Sofa/BaseViewModel.h"
#include "unitysdk/RPG/Client/ChenLingFes/ChenLingFesItemDetailViewModel___c__DisplayClass3_0.h"
class HJPJAKIIOCN;
class OBJANKHLNGO;
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayItemViewModel; }
namespace RPG::Client::ChenLingFes { class ChenLingFesItemDetailViewModel; }
namespace RPG::Client::ChenLingFes { class ChenLingFesItemPlaceGridRowViewModel; }
namespace RPG::Client::ChenLingFes { class ChenLingFesItemTagViewModel; }
namespace RPG::GameCore { class ChenLingFesPosition; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x1CC7CFF0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC884E0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_CLICKOUTSIDECOMMAND_OFFSET UNITYSDK_OFFSET(0x1CC89400)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_DESCTEXT_OFFSET UNITYSDK_OFFSET(0x1CC883D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1CC87630)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x1CC7ED10)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_NAMETEXT_OFFSET UNITYSDK_OFFSET(0x1CC88370)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_RARE_OFFSET UNITYSDK_OFFSET(0x1CC88430)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_TAGVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x1CC89420)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_SET_CLICKOUTSIDECOMMAND_OFFSET UNITYSDK_OFFSET(0x1CC89410)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x1CC7ED50)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_SYNC_OFFSET UNITYSDK_OFFSET(0x1CC7EDC0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL__BUILDPLACEGRIDROWS_OFFSET UNITYSDK_OFFSET(0x1CC885D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0x1CC88500)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL__ONCLICKOUTSIDE_OFFSET UNITYSDK_OFFSET(0x1CC893C0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL___BUILDPLACEGRIDROWS_G__EXPANDBOUNDS_3_0_OFFSET UNITYSDK_OFFSET(0x1CC892C0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL___BUILDPLACEGRIDROWS_G__TOCELLKEY_3_1_OFFSET UNITYSDK_OFFSET(0x1CC89300)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesItemDetailViewModel_TypeDefinitionIndex = 84175;

	class ChenLingFesItemDetailViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesItemPlaceGridRowViewModel*>* PlaceGridRows; // 0x20
		::RPG::Client::ChenLingFes::ChenLingFesGameplayItemViewModel* ItemViewModel; // 0x28
		::Sofa::Core::SimpleCommand* _ClickOutSideCommand_k__BackingField; // 0x30
		::OBJANKHLNGO* _Messenger; // 0x38
		::HJPJAKIIOCN* _GameplayBridge; // 0x40
		::System::Boolean _IsShow; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChenLingFes::ChenLingFesItemDetailViewModel* Create(::HJPJAKIIOCN* a1, ::OBJANKHLNGO* a2)
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesItemDetailViewModel*(*)(::HJPJAKIIOCN*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_CREATE_OFFSET))(a1, a2);
		}

		::System::Void Sync(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_SYNC_OFFSET))(this, a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL__INIT_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesItemPlaceGridRowViewModel*>* _BuildPlaceGridRows(::System::UInt32 a1, ::HJPJAKIIOCN* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesItemPlaceGridRowViewModel*>*(*)(::System::UInt32, ::HJPJAKIIOCN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL__BUILDPLACEGRIDROWS_OFFSET))(a1, a2);
		}

		::System::Void _OnClickOutSide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL__ONCLICKOUTSIDE_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_ISSHOW_OFFSET))(this);
		}

		::System::Void set_IsShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_SET_ISSHOW_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_ClickOutSideCommand()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_CLICKOUTSIDECOMMAND_OFFSET))(this);
		}

		::System::Void set_ClickOutSideCommand(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_SET_CLICKOUTSIDECOMMAND_OFFSET))(this, a1);
		}

		::System::String* get_NameText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_NAMETEXT_OFFSET))(this);
		}

		::System::String* get_DescText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_DESCTEXT_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_ICONPATH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesItemTagViewModel*>* get_TagViewModels()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesItemTagViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_TAGVIEWMODELS_OFFSET))(this);
		}

		::RPG::GameCore::ChenLingFesItemRare get_Rare()
		{
			return ((::RPG::GameCore::ChenLingFesItemRare(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_RARE_OFFSET))(this);
		}

		static ::System::Void __BuildPlaceGridRows_g__ExpandBounds_3_0(::RPG::GameCore::ChenLingFesPosition* a1, ::RPG::Client::ChenLingFes::ChenLingFesItemDetailViewModel___c__DisplayClass3_0 a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingFesPosition*, ::RPG::Client::ChenLingFes::ChenLingFesItemDetailViewModel___c__DisplayClass3_0))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL___BUILDPLACEGRIDROWS_G__EXPANDBOUNDS_3_0_OFFSET))(a1, a2);
		}

		static ::System::String* __BuildPlaceGridRows_g__ToCellKey_3_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL___BUILDPLACEGRIDROWS_G__TOCELLKEY_3_1_OFFSET))(a1, a2);
		}

	};
}
