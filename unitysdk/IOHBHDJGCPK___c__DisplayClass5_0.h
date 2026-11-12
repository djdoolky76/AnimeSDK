#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIDKLLMAIGP;
class IOHBHDJGCPK;
namespace RPG::GameCore { class LittleGameLevelConfig; }

#define IOHBHDJGCPK___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB8372B0)
#define IOHBHDJGCPK___C__DISPLAYCLASS5_0__STARTLEVELFORTASK_B__0_OFFSET UNITYSDK_OFFSET(0xB8372C0)

inline static constexpr unsigned int IOHBHDJGCPK___c__DisplayClass5_0_TypeDefinitionIndex = 77130;

	class IOHBHDJGCPK___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::LittleGameLevelConfig* levelConfig; // 0x10
		::IOHBHDJGCPK* __4__this; // 0x18
		::System::UInt32 levelId; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOHBHDJGCPK___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::CIDKLLMAIGP* _StartLevelForTask_b__0(::CIDKLLMAIGP* a1)
		{
			return ((::CIDKLLMAIGP*(*)(::PVOID, ::CIDKLLMAIGP*))((::PBYTE)hIl2Cpp + IOHBHDJGCPK___C__DISPLAYCLASS5_0__STARTLEVELFORTASK_B__0_OFFSET))(this, a1);
		}

	};
