#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMHADFNOIGP;
class FNKIAFBAMEE;
class OBJANKHLNGO;
namespace RPG::Client::Promises { class Promise; }

#define FNKIAFBAMEE___C__DISPLAYCLASS10_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1586ACF0)
#define FNKIAFBAMEE___C__DISPLAYCLASS10_0__SHOWGAMESETTLE_B__0_OFFSET UNITYSDK_OFFSET(0x1586BBF0)

inline static constexpr unsigned int FNKIAFBAMEE___c__DisplayClass10_0_TypeDefinitionIndex = 81292;

	class FNKIAFBAMEE___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::FNKIAFBAMEE* __4__this; // 0x10
		::DMHADFNOIGP* levelData; // 0x18
		::RPG::Client::Promises::Promise* promise; // 0x20
		::OBJANKHLNGO* messenger; // 0x28
		::System::UInt32 levelID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKIAFBAMEE___C__DISPLAYCLASS10_0_CTOR_OFFSET))(this);
		}

		::System::Void _ShowGameSettle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKIAFBAMEE___C__DISPLAYCLASS10_0__SHOWGAMESETTLE_B__0_OFFSET))(this);
		}

	};
