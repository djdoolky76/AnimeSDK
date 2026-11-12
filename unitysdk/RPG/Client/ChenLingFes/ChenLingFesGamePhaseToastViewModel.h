#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"
class OBJANKHLNGO;
namespace RPG::Client::ChenLingFes { class ChenLingFesGamePhaseToastViewModel; }
namespace RPG::Client::Promises { class Promise; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xD3E8340)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD3E8510)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_GET_FINISHCOMMAND_OFFSET UNITYSDK_OFFSET(0xD3E8810)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xD3E80D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_GET_TOASTSTRING_OFFSET UNITYSDK_OFFSET(0xD3E8110)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_SETFINISHEDPROMISE_OFFSET UNITYSDK_OFFSET(0xD3E85D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_SET_FINISHCOMMAND_OFFSET UNITYSDK_OFFSET(0xD3E8820)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xD3E87A0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_SET_TOASTSTRING_OFFSET UNITYSDK_OFFSET(0xD3E8540)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0xD3E8620)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL__ONFINISH_OFFSET UNITYSDK_OFFSET(0xD3E86F0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGamePhaseToastViewModel_TypeDefinitionIndex = 84188;

	class ChenLingFesGamePhaseToastViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::String* _ToastString; // 0x20
		::OBJANKHLNGO* _Messenger; // 0x28
		::RPG::Client::Promises::Promise* _FinishPromise; // 0x30
		::Sofa::Core::SimpleCommand* _FinishCommand_k__BackingField; // 0x38
		::System::Boolean _IsShow; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChenLingFes::ChenLingFesGamePhaseToastViewModel* Create(::OBJANKHLNGO* a1, ::System::String* a2)
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGamePhaseToastViewModel*(*)(::OBJANKHLNGO*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_CREATE_OFFSET))(a1, a2);
		}

		::System::Void SetFinishedPromise(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_SETFINISHEDPROMISE_OFFSET))(this, a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL__INIT_OFFSET))(this);
		}

		::System::Void _OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL__ONFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_GET_ISSHOW_OFFSET))(this);
		}

		::System::Void set_IsShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_SET_ISSHOW_OFFSET))(this, a1);
		}

		::System::String* get_ToastString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_GET_TOASTSTRING_OFFSET))(this);
		}

		::System::Void set_ToastString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_SET_TOASTSTRING_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_FinishCommand()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_GET_FINISHCOMMAND_OFFSET))(this);
		}

		::System::Void set_FinishCommand(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_SET_FINISHCOMMAND_OFFSET))(this, a1);
		}

	};
}
