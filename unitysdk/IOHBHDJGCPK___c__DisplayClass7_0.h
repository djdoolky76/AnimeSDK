#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOHBHDJGCPK;
namespace RPG::GameCore { class LittleGameLevelConfig; }

#define IOHBHDJGCPK___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0x192E1ED0)
#define IOHBHDJGCPK___C__DISPLAYCLASS7_0___STARTGAMEAFTERRESPONSE_B__0_OFFSET UNITYSDK_OFFSET(0x192E1EE0)

inline static constexpr unsigned int IOHBHDJGCPK___c__DisplayClass7_0_TypeDefinitionIndex = 77133;

	class IOHBHDJGCPK___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::LittleGameLevelConfig* levelConfig; // 0x10
		::IOHBHDJGCPK* __4__this; // 0x18
		::System::UInt32 randomSeed; // 0x20
		::System::UInt32 levelId; // 0x24
		::System::Boolean skipSettlement; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOHBHDJGCPK___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Void __StartGameAfterResponse_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOHBHDJGCPK___C__DISPLAYCLASS7_0___STARTGAMEAFTERRESPONSE_B__0_OFFSET))(this);
		}

	};
