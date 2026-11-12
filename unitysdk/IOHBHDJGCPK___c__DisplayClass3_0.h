#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOHBHDJGCPK;
class PIGILFCALBA;
namespace RPG::GameCore { class LittleGameLevelConfig; }

#define IOHBHDJGCPK___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB835F60)
#define IOHBHDJGCPK___C__DISPLAYCLASS3_0__STARTLONGTAILLEVEL_B__0_OFFSET UNITYSDK_OFFSET(0xB836F50)

inline static constexpr unsigned int IOHBHDJGCPK___c__DisplayClass3_0_TypeDefinitionIndex = 77128;

	class IOHBHDJGCPK___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::LittleGameLevelConfig* levelConfig; // 0x10
		::IOHBHDJGCPK* __4__this; // 0x18
		::System::UInt32 levelId; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOHBHDJGCPK___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Void _StartLongTailLevel_b__0(::PIGILFCALBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIGILFCALBA*))((::PBYTE)hIl2Cpp + IOHBHDJGCPK___C__DISPLAYCLASS3_0__STARTLONGTAILLEVEL_B__0_OFFSET))(this, a1);
		}

	};
