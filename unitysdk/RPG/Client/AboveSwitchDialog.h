#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/GameCore/ScreenTransferMode.h"
#include "unitysdk/RPG/GameCore/ScreenTransferType.h"
class MCJNHIKIDMM;
namespace RPG::Client { class MonoAboveSwitch; }

#define RPG_CLIENT_ABOVESWITCHDIALOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1B768930)
#define RPG_CLIENT_ABOVESWITCHDIALOG_GET_ENABLETEXT_OFFSET UNITYSDK_OFFSET(0x1B769850)
#define RPG_CLIENT_ABOVESWITCHDIALOG_GET_TEXTID_OFFSET UNITYSDK_OFFSET(0x1B7698F0)
#define RPG_CLIENT_ABOVESWITCHDIALOG_GET_TRANSFERMODE_OFFSET UNITYSDK_OFFSET(0x1B768EB0)
#define RPG_CLIENT_ABOVESWITCHDIALOG_GET_TRANSFERTIME_OFFSET UNITYSDK_OFFSET(0x1B768E10)
#define RPG_CLIENT_ABOVESWITCHDIALOG_GET_TRANSFERTYPE_OFFSET UNITYSDK_OFFSET(0x1B768E60)
#define RPG_CLIENT_ABOVESWITCHDIALOG_GET__VIEW_OFFSET UNITYSDK_OFFSET(0x1B768F00)
#define RPG_CLIENT_ABOVESWITCHDIALOG_PLAY_OFFSET UNITYSDK_OFFSET(0x1B768B20)
#define RPG_CLIENT_ABOVESWITCHDIALOG_SET_ENABLETEXT_OFFSET UNITYSDK_OFFSET(0x1B7698A0)
#define RPG_CLIENT_ABOVESWITCHDIALOG_SET_TEXTID_OFFSET UNITYSDK_OFFSET(0x1B769950)
#define RPG_CLIENT_ABOVESWITCHDIALOG_SET_TRANSFERMODE_OFFSET UNITYSDK_OFFSET(0x1B769740)
#define RPG_CLIENT_ABOVESWITCHDIALOG_SET_TRANSFERTIME_OFFSET UNITYSDK_OFFSET(0x1B7697E0)
#define RPG_CLIENT_ABOVESWITCHDIALOG_SET_TRANSFERTYPE_OFFSET UNITYSDK_OFFSET(0x1B769790)
#define RPG_CLIENT_ABOVESWITCHDIALOG__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x1B7689C0)
#define RPG_CLIENT_ABOVESWITCHDIALOG__EVALUATEALPHA_OFFSET UNITYSDK_OFFSET(0x1B769680)
#define RPG_CLIENT_ABOVESWITCHDIALOG__ONTICK_OFFSET UNITYSDK_OFFSET(0x1B768F80)
#define RPG_CLIENT_ABOVESWITCHDIALOG__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B768A60)
#define RPG_CLIENT_ABOVESWITCHDIALOG__TRANSFERFINISH_OFFSET UNITYSDK_OFFSET(0x1B769320)

namespace RPG::Client
{
	inline static constexpr unsigned int AboveSwitchDialog_TypeDefinitionIndex = 75216;

	class AboveSwitchDialog : public ::RPG::Client::UIController
	{
	public:
		::RPG::Client::MonoAboveSwitch* _AboveSwitch; // 0x190
		::RPG::Client::TextID _TextID; // 0x198
		::System::Boolean _EnableText; // 0x1A8
		::System::Byte _padding0[0x3];
		::System::Single _TransferTime; // 0x1AC
		::System::Single _TransferTimer; // 0x1B0
		::RPG::GameCore::ScreenTransferMode _TransferMode; // 0x1B4
		::RPG::GameCore::ScreenTransferType _TransferType; // 0x1B8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_CTOR_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG__SETUPVIEW_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_PLAY_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG__ONTICK_OFFSET))(this, a1);
		}

		::System::Single _EvaluateAlpha(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG__EVALUATEALPHA_OFFSET))(this, a1, a2);
		}

		::System::Void _TransferFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG__TRANSFERFINISH_OFFSET))(this);
		}

		::RPG::GameCore::ScreenTransferMode get_TransferMode()
		{
			return ((::RPG::GameCore::ScreenTransferMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_GET_TRANSFERMODE_OFFSET))(this);
		}

		::System::Void set_TransferMode(::RPG::GameCore::ScreenTransferMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScreenTransferMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_SET_TRANSFERMODE_OFFSET))(this, a1);
		}

		::RPG::GameCore::ScreenTransferType get_TransferType()
		{
			return ((::RPG::GameCore::ScreenTransferType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_GET_TRANSFERTYPE_OFFSET))(this);
		}

		::System::Void set_TransferType(::RPG::GameCore::ScreenTransferType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScreenTransferType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_SET_TRANSFERTYPE_OFFSET))(this, a1);
		}

		::System::Single get_TransferTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_GET_TRANSFERTIME_OFFSET))(this);
		}

		::System::Void set_TransferTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_SET_TRANSFERTIME_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_GET_ENABLETEXT_OFFSET))(this);
		}

		::System::Void set_EnableText(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_SET_ENABLETEXT_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_TextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_GET_TEXTID_OFFSET))(this);
		}

		::System::Void set_TextID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_SET_TEXTID_OFFSET))(this, a1);
		}

		::MCJNHIKIDMM* get__View()
		{
			return ((::MCJNHIKIDMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_GET__VIEW_OFFSET))(this);
		}

	};
}
