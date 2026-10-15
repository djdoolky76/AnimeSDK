#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FlipMode.h"
namespace RPG::Client { class UIPageTurnMonoPlugin; }
namespace System { class String; }

#define RPG_CLIENT_UIAUTOFLIPMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xE381D80)
#define RPG_CLIENT_UIAUTOFLIPMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xE381D30)

namespace RPG::Client
{
	class UIAutoFlipMonoPlugin
	{
	public:
		::RPG::Client::UIPageTurnMonoPlugin* ControledBook; // 0x30
		::RPG::Client::FlipMode Mode; // 0x38
		::System::Single PageFlipTime; // 0x3C
		::System::Single DelayBeforeStart; // 0x40
		::System::Single TimeBetweenPages; // 0x44
		::System::Boolean AutoStartFlip; // 0x48
		::System::Byte _padding0[0x3];
		::System::Single YRatio; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}
