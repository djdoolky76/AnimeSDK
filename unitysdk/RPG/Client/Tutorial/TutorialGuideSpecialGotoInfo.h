#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class COEGDGANGEE;
namespace System { class String; }

#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDESPECIALGOTOINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xE334010)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDESPECIALGOTOINFO_GET_GOTOID_OFFSET UNITYSDK_OFFSET(0xE334060)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDESPECIALGOTOINFO_GET_HINTTEXT_OFFSET UNITYSDK_OFFSET(0xE334050)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDESPECIALGOTOINFO_GET_NEEDREDDOT_OFFSET UNITYSDK_OFFSET(0xE334090)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDESPECIALGOTOINFO_GET_REDDOTKEY_OFFSET UNITYSDK_OFFSET(0xE334070)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDESPECIALGOTOINFO_GET_REDDOTSUBKEY_OFFSET UNITYSDK_OFFSET(0xE334080)

namespace RPG::Client::Tutorial
{
	class TutorialGuideSpecialGotoInfo : public ::System::Object
	{
	public:
		::System::String* _ReddotSubKey_k__BackingField; // 0x10
		::System::String* _ReddotKey_k__BackingField; // 0x18
		::System::UInt32 _GotoID_k__BackingField; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _HintText_k__BackingField; // 0x28
		::System::Void _ctor(::COEGDGANGEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COEGDGANGEE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDESPECIALGOTOINFO_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_HintText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDESPECIALGOTOINFO_GET_HINTTEXT_OFFSET))(this);
		}

		::System::UInt32 get_GotoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDESPECIALGOTOINFO_GET_GOTOID_OFFSET))(this);
		}

		::System::String* get_ReddotKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDESPECIALGOTOINFO_GET_REDDOTKEY_OFFSET))(this);
		}

		::System::String* get_ReddotSubKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDESPECIALGOTOINFO_GET_REDDOTSUBKEY_OFFSET))(this);
		}

		::System::Boolean get_NeedReddot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDESPECIALGOTOINFO_GET_NEEDREDDOT_OFFSET))(this);
		}

	};
}
