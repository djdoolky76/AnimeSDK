#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMHADFNOIGP;
class FNKIAFBAMEE;
class OBJANKHLNGO;
namespace RPG::Client::Promises { class Promise; }

#define FNKIAFBAMEE___C__DISPLAYCLASS10_0_CTOR_OFFSET UNITYSDK_OFFSET(0x17F1E480)
#define FNKIAFBAMEE___C__DISPLAYCLASS10_0__SHOWGAMESETTLE_B__0_OFFSET UNITYSDK_OFFSET(0x17F1F390)

inline static constexpr unsigned int FNKIAFBAMEE___c__DisplayClass10_0_TypeDefinitionIndex = 84072;

	class FNKIAFBAMEE___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::FNKIAFBAMEE* __4__this; // 0x10
		::RPG::Client::Promises::Promise* promise; // 0x18
		::OBJANKHLNGO* messenger; // 0x20
		::DMHADFNOIGP* levelData; // 0x28
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
