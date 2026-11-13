#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"
#include "unitysdk/System/Guid.h"
class OBJANKHLNGO;
namespace RPG::Client::LimaoNews { class LimaoNewsPostViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsTutorialService; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class String; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_CLEARREDDOT_OFFSET UNITYSDK_OFFSET(0x1DFCA3B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFCA210)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_GET_DEFAULTCOMMENTID_OFFSET UNITYSDK_OFFSET(0x1DFCB0E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_GET_GUID_OFFSET UNITYSDK_OFFSET(0x1DFCB100)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_GET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0x1DFCB060)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_GET_ONBTNGO_OFFSET UNITYSDK_OFFSET(0x1DFCB040)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_GET_ONBTNIMAGE_OFFSET UNITYSDK_OFFSET(0x1DFCB080)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_GET_ONBTNLINK_OFFSET UNITYSDK_OFFSET(0x1DFCB0A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_GET_POSTVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1DFCB0C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_GET_TEXTBTNGO_OFFSET UNITYSDK_OFFSET(0x1DFCA4E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_SETDEFAULTCOMMENTID_OFFSET UNITYSDK_OFFSET(0x1DFCA490)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_SET_DEFAULTCOMMENTID_OFFSET UNITYSDK_OFFSET(0x1DFCB0F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_SET_GUID_OFFSET UNITYSDK_OFFSET(0x1DFCB110)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_SET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0x1DFCB070)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_SET_ONBTNGO_OFFSET UNITYSDK_OFFSET(0x1DFCB050)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_SET_ONBTNIMAGE_OFFSET UNITYSDK_OFFSET(0x1DFCB090)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_SET_ONBTNLINK_OFFSET UNITYSDK_OFFSET(0x1DFCB0B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_SET_POSTVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1DFCB0D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL__GOTO_OFFSET UNITYSDK_OFFSET(0x1DFCABC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1DFCB120)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0x1DFCB1C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL___CTOR_B__0_2_OFFSET UNITYSDK_OFFSET(0x1DFCB1D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL___CTOR_B__0_3_OFFSET UNITYSDK_OFFSET(0x1DFCB400)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostDetailViewModel_TypeDefinitionIndex = 83257;

	class LimaoNewsPostDetailViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsPostViewModel* _PostViewModel_k__BackingField; // 0x20
		::OBJANKHLNGO* _Messenger; // 0x28
		::Sofa::Core::SimpleCommand* _OnBtnGo_k__BackingField; // 0x30
		::RPG::Client::LimaoNews::LimaoNewsTutorialService* _LimaoNewsTutorialService; // 0x38
		::Sofa::Core::SimpleCommand* _OnBtnClose_k__BackingField; // 0x40
		::Sofa::Core::SimpleCommand* _OnBtnImage_k__BackingField; // 0x48
		::Sofa::Core::SimpleCommand* _OnBtnLink_k__BackingField; // 0x50
		::System::UInt32 _DefaultCommentID_k__BackingField; // 0x58
		::System::Guid _Guid_k__BackingField; // 0x5C
		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsPostViewModel* a1, ::OBJANKHLNGO* a2, ::RPG::Client::LimaoNews::LimaoNewsTutorialService* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostViewModel*, ::OBJANKHLNGO*, ::RPG::Client::LimaoNews::LimaoNewsTutorialService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ClearRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_CLEARREDDOT_OFFSET))(this);
		}

		::System::Void SetDefaultCommentID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_SETDEFAULTCOMMENTID_OFFSET))(this, a1);
		}

		::System::String* get_TextBtnGo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_GET_TEXTBTNGO_OFFSET))(this);
		}

		::System::Void _Goto()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL__GOTO_OFFSET))(this);
		}

		::Sofa::Core::SimpleCommand* get_OnBtnGo()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_GET_ONBTNGO_OFFSET))(this);
		}

		::System::Void set_OnBtnGo(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_SET_ONBTNGO_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_OnBtnClose()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_GET_ONBTNCLOSE_OFFSET))(this);
		}

		::System::Void set_OnBtnClose(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_SET_ONBTNCLOSE_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_OnBtnImage()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_GET_ONBTNIMAGE_OFFSET))(this);
		}

		::System::Void set_OnBtnImage(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_SET_ONBTNIMAGE_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_OnBtnLink()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_GET_ONBTNLINK_OFFSET))(this);
		}

		::System::Void set_OnBtnLink(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_SET_ONBTNLINK_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsPostViewModel* get_PostViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPostViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_GET_POSTVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_PostViewModel(::RPG::Client::LimaoNews::LimaoNewsPostViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_SET_POSTVIEWMODEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_DefaultCommentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_GET_DEFAULTCOMMENTID_OFFSET))(this);
		}

		::System::Void set_DefaultCommentID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_SET_DEFAULTCOMMENTID_OFFSET))(this, a1);
		}

		::System::Guid get_Guid()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_GET_GUID_OFFSET))(this);
		}

		::System::Void set_Guid(::System::Guid a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_SET_GUID_OFFSET))(this, a1);
		}

		::System::Void __ctor_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL___CTOR_B__0_0_OFFSET))(this);
		}

		::System::Void __ctor_b__0_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL___CTOR_B__0_1_OFFSET))(this);
		}

		::System::Void __ctor_b__0_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL___CTOR_B__0_2_OFFSET))(this);
		}

		::System::Void __ctor_b__0_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL___CTOR_B__0_3_OFFSET))(this);
		}

	};
}
