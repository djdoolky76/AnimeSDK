#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNKIAFBAMEE;
class NNEIOFDLLMI;
class OBJANKHLNGO;
namespace RPG::Client::Promises { class Promise; }

#define FNKIAFBAMEE___C__DISPLAYCLASS14_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1586B780)
#define FNKIAFBAMEE___C__DISPLAYCLASS14_0__SHOWGAMESETTLE_OFFLINE_B__0_OFFSET UNITYSDK_OFFSET(0x1586BFF0)

inline static constexpr unsigned int FNKIAFBAMEE___c__DisplayClass14_0_TypeDefinitionIndex = 81294;

	class FNKIAFBAMEE___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::OBJANKHLNGO* messenger; // 0x10
		::RPG::Client::Promises::Promise* promise; // 0x18
		::FNKIAFBAMEE* __4__this; // 0x20
		::NNEIOFDLLMI* gameLoopInstance; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKIAFBAMEE___C__DISPLAYCLASS14_0_CTOR_OFFSET))(this);
		}

		::System::Void _ShowGameSettle_Offline_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKIAFBAMEE___C__DISPLAYCLASS14_0__SHOWGAMESETTLE_OFFLINE_B__0_OFFSET))(this);
		}

	};
