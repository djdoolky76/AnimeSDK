#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/RPG/Client/TextID.h"
class JIHPNGCKCGC;
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_NETWORKERRORDIALOG_CTOR_OFFSET UNITYSDK_OFFSET(0xE410D90)
#define RPG_CLIENT_NETWORKERRORDIALOG_GET_VIEW_OFFSET UNITYSDK_OFFSET(0xE411750)
#define RPG_CLIENT_NETWORKERRORDIALOG_ONBTNBACKCLICK_OFFSET UNITYSDK_OFFSET(0xE4123A0)
#define RPG_CLIENT_NETWORKERRORDIALOG_ONBTNCANCELCLICK_OFFSET UNITYSDK_OFFSET(0xE4122F0)
#define RPG_CLIENT_NETWORKERRORDIALOG_ONBTNDETAILCLICK_OFFSET UNITYSDK_OFFSET(0xE4122A0)
#define RPG_CLIENT_NETWORKERRORDIALOG_SETCONTENTID_OFFSET UNITYSDK_OFFSET(0xE410EA0)
#define RPG_CLIENT_NETWORKERRORDIALOG_SETERRORCODE_OFFSET UNITYSDK_OFFSET(0xE410E40)
#define RPG_CLIENT_NETWORKERRORDIALOG_SETOKID_OFFSET UNITYSDK_OFFSET(0xE4120B0)
#define RPG_CLIENT_NETWORKERRORDIALOG_SHOWNETWORKERROR_OFFSET UNITYSDK_OFFSET(0xE410B70)
#define RPG_CLIENT_NETWORKERRORDIALOG__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xE411000)
#define RPG_CLIENT_NETWORKERRORDIALOG__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xE412210)
#define RPG_CLIENT_NETWORKERRORDIALOG__SETUPDETAILMODE_OFFSET UNITYSDK_OFFSET(0xE411E70)
#define RPG_CLIENT_NETWORKERRORDIALOG__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xE4117E0)
#define RPG_CLIENT_NETWORKERRORDIALOG__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xE411FF0)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkErrorDialog_TypeDefinitionIndex = 74802;

	class NetworkErrorDialog : public ::RPG::Client::UIController
	{
	public:
		::System::Action* ConformAction; // 0x190
		::System::Action* ExitAction; // 0x198
		::System::Int32 stageCode; // 0x1A0
		::System::Int32 errorCode; // 0x1A4
		::System::Boolean isDetailMode; // 0x1A8
		::System::Void _ctor(::RPG::Client::UILayer a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UILayer))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void ShowNetworkError(::RPG::Client::TextID a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::RPG::Client::TextID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG_SHOWNETWORKERROR_OFFSET))(a1, a2, a3);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void SetErrorCode(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG_SETERRORCODE_OFFSET))(this, a1, a2);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG__UNBINDVIEW_OFFSET))(this);
		}

		::System::Void SetContentID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG_SETCONTENTID_OFFSET))(this, a1);
		}

		::System::Void SetOkID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG_SETOKID_OFFSET))(this, a1);
		}

		::System::Void _SetupDetailMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG__SETUPDETAILMODE_OFFSET))(this, a1);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void OnBtnDetailClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG_ONBTNDETAILCLICK_OFFSET))(this, a1);
		}

		::System::Void OnBtnCancelClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG_ONBTNCANCELCLICK_OFFSET))(this, a1);
		}

		::System::Void OnBtnBackClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG_ONBTNBACKCLICK_OFFSET))(this, a1);
		}

		::JIHPNGCKCGC* get_View()
		{
			return ((::JIHPNGCKCGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG_GET_VIEW_OFFSET))(this);
		}

	};
}
