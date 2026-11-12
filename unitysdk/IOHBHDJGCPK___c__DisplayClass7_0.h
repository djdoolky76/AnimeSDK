#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOHBHDJGCPK;
namespace RPG::GameCore { class LittleGameLevelConfig; }

#define IOHBHDJGCPK___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB837580)
#define IOHBHDJGCPK___C__DISPLAYCLASS7_0___STARTGAMEAFTERRESPONSE_B__0_OFFSET UNITYSDK_OFFSET(0xB837590)

inline static constexpr unsigned int IOHBHDJGCPK___c__DisplayClass7_0_TypeDefinitionIndex = 77134;

	class IOHBHDJGCPK___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::IOHBHDJGCPK* __4__this; // 0x10
		::RPG::GameCore::LittleGameLevelConfig* levelConfig; // 0x18
		::System::UInt32 levelId; // 0x20
		::System::Boolean skipSettlement; // 0x24
		::System::Byte _padding0[0x3];
		::System::UInt32 randomSeed; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOHBHDJGCPK___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Void __StartGameAfterResponse_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOHBHDJGCPK___C__DISPLAYCLASS7_0___STARTGAMEAFTERRESPONSE_B__0_OFFSET))(this);
		}

	};
