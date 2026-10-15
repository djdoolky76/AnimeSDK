#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
class EABFLAJLMHM;
namespace RPG::Client::MechCraft::ViewModel { class IMechCraftDiyMechatronEditViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class IMechCraftDiyMechatronListViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftDiyMechatronEditViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftDiyMechatronListViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftDiySignal; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftDiyViewEvent; }
namespace System { class Action; }
namespace System { class IDisposable; }
namespace System { class String; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD67E640)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD67F200)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_CONFIRMEXITCOMMAND_OFFSET UNITYSDK_OFFSET(0xD67E600)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_DISCARDEXITCOMMAND_OFFSET UNITYSDK_OFFSET(0xD67E610)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_EXITCOMMAND_OFFSET UNITYSDK_OFFSET(0xD67E5F0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_EXITPREVIEWCOMMAND_OFFSET UNITYSDK_OFFSET(0xD67E630)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_ISPREVIEWING_OFFSET UNITYSDK_OFFSET(0xD67E5D0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_MECHATRONEDIT_OFFSET UNITYSDK_OFFSET(0xD67E560)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_MECHATRONLIST_OFFSET UNITYSDK_OFFSET(0xD67E550)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_PREVIEWCOMMAND_OFFSET UNITYSDK_OFFSET(0xD67E620)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_STATENAME_OFFSET UNITYSDK_OFFSET(0xD67E570)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_SET_ISPREVIEWING_OFFSET UNITYSDK_OFFSET(0xD67E5E0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_SUBSCRIBECHANGED_OFFSET UNITYSDK_OFFSET(0xD67EAA0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_SUBSCRIBEVIEWEVENT_OFFSET UNITYSDK_OFFSET(0xD67EB00)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL__COMPLETEEXIT_OFFSET UNITYSDK_OFFSET(0xD67EDE0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL__ONCONFIRMEXIT_OFFSET UNITYSDK_OFFSET(0xD67EED0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL__ONDISCARDEXIT_OFFSET UNITYSDK_OFFSET(0xD67F020)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL__ONEXITPREVIEW_OFFSET UNITYSDK_OFFSET(0xD67F150)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL__ONEXIT_OFFSET UNITYSDK_OFFSET(0xD67EC50)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL__ONPREVIEW_OFFSET UNITYSDK_OFFSET(0xD67F0A0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL__UPDATEMECHATRONITEM_OFFSET UNITYSDK_OFFSET(0xD67EB90)

namespace RPG::Client::MechCraft::ViewModel
{
	class MechCraftDiyViewModel : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronListViewModel* _MechatronList_k__BackingField; // 0x10
		::CEEGMMCFCBG* _ExitCommand_k__BackingField; // 0x18
		::CEEGMMCFCBG* _ExitPreviewCommand_k__BackingField; // 0x20
		::CEEGMMCFCBG* _PreviewCommand_k__BackingField; // 0x28
		::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronEditViewModel* _MechatronEdit_k__BackingField; // 0x30
		::RPG::Client::MechCraft::ViewModel::MechCraftDiySignal* _ViewEvent; // 0x38
		::EABFLAJLMHM* _GameSessionService; // 0x40
		::RPG::Client::MechCraft::ViewModel::MechCraftDiyMechatronEditViewModel* _MechatronEdit; // 0x48
		::CEEGMMCFCBG* _ConfirmExitCommand_k__BackingField; // 0x50
		::System::IDisposable* _ExitSaveSucceededSubscription; // 0x58
		::RPG::Client::MechCraft::ViewModel::MechCraftDiySignal* _Changed; // 0x60
		::System::IDisposable* _ListChangedSubscription; // 0x68
		::CEEGMMCFCBG* _DiscardExitCommand_k__BackingField; // 0x70
		::RPG::Client::MechCraft::ViewModel::MechCraftDiyMechatronListViewModel* _MechatronList; // 0x78
		::System::Boolean _IsPreviewing_k__BackingField; // 0x80
		::System::Boolean _Disposed; // 0x81
		::System::Boolean _ExitRequested; // 0x82
		::System::Void _ctor(::EABFLAJLMHM* a1, ::RPG::Client::MechCraft::ViewModel::MechCraftDiyMechatronListViewModel* a2, ::RPG::Client::MechCraft::ViewModel::MechCraftDiyMechatronEditViewModel* a3)
		{
			return ((::System::Void(*)(::PVOID, ::EABFLAJLMHM*, ::RPG::Client::MechCraft::ViewModel::MechCraftDiyMechatronListViewModel*, ::RPG::Client::MechCraft::ViewModel::MechCraftDiyMechatronEditViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronListViewModel* get_MechatronList()
		{
			return ((::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronListViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_MECHATRONLIST_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronEditViewModel* get_MechatronEdit()
		{
			return ((::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronEditViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_MECHATRONEDIT_OFFSET))(this);
		}

		::System::String* get_StateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_STATENAME_OFFSET))(this);
		}

		::System::Boolean get_IsPreviewing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_ISPREVIEWING_OFFSET))(this);
		}

		::System::Void set_IsPreviewing(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_SET_ISPREVIEWING_OFFSET))(this, a1);
		}

		::CEEGMMCFCBG* get_ExitCommand()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_EXITCOMMAND_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_ConfirmExitCommand()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_CONFIRMEXITCOMMAND_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_DiscardExitCommand()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_DISCARDEXITCOMMAND_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_PreviewCommand()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_PREVIEWCOMMAND_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_ExitPreviewCommand()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_EXITPREVIEWCOMMAND_OFFSET))(this);
		}

		::System::IDisposable* SubscribeChanged(::System::Action* a1)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_SUBSCRIBECHANGED_OFFSET))(this, a1);
		}

		::System::IDisposable* SubscribeViewEvent(::System::Action* a1)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_SUBSCRIBEVIEWEVENT_OFFSET))(this, a1);
		}

		::System::Void _UpdateMechatronItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL__UPDATEMECHATRONITEM_OFFSET))(this);
		}

		::System::Void _OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL__ONEXIT_OFFSET))(this);
		}

		::System::Void _OnConfirmExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL__ONCONFIRMEXIT_OFFSET))(this);
		}

		::System::Void _OnDiscardExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL__ONDISCARDEXIT_OFFSET))(this);
		}

		::System::Void _CompleteExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL__COMPLETEEXIT_OFFSET))(this);
		}

		::System::Void _OnPreview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL__ONPREVIEW_OFFSET))(this);
		}

		::System::Void _OnExitPreview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL__ONEXITPREVIEW_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_DISPOSE_OFFSET))(this);
		}

	};
}
