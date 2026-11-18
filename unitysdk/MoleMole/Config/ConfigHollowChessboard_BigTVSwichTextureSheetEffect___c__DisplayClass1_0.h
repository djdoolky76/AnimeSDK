#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNJDGHBEMLK;
namespace MoleMole::Config { class ConfigHollowChessboard_BigTVSwichTextureSheetEffect; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVSWICHTEXTURESHEETEFFECT___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1929F080)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_BigTVSwichTextureSheetEffect___c__DisplayClass1_0_TypeDefinitionIndex = 46330;

	class ConfigHollowChessboard_BigTVSwichTextureSheetEffect___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::PNJDGHBEMLK* chessPiece; // 0x10
		::MoleMole::Config::ConfigHollowChessboard_BigTVSwichTextureSheetEffect* __4__this; // 0x18
		::System::Action_1<::System::Object*>* endCallback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVSWICHTEXTURESHEETEFFECT___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}
	};
}
