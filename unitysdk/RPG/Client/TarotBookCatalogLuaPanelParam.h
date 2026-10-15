#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletLuaPanelParam.h"

#define RPG_CLIENT_TAROTBOOKCATALOGLUAPANELPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xE1AD6A0)

namespace RPG::Client
{
	class TarotBookCatalogLuaPanelParam : public ::RPG::Client::BookletLuaPanelParam
	{
	public:
		::System::Int32 EndIndex; // 0x30
		::System::Int32 BeginIndex; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCATALOGLUAPANELPARAM_CTOR_OFFSET))(this);
		}

	};
}
