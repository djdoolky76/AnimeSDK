#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAME_MATCH3_MATCHTHREETEXTDIALOGINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x20712BD0)

namespace RPG::Client::LittleGame::Match3
{
	inline static constexpr unsigned int MatchThreeTextDialogInfo_TypeDefinitionIndex = 43997;

	class MatchThreeTextDialogInfo : public ::System::Object
	{
	public:
		::RPG::Client::TextID TextID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCH3_MATCHTHREETEXTDIALOGINFO_CTOR_OFFSET))(this);
		}

	};
}
