#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIDKLLMAIGP;
class IOHBHDJGCPK;
namespace RPG::GameCore { class LittleGameLevelConfig; }

#define IOHBHDJGCPK___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1A605510)
#define IOHBHDJGCPK___C__DISPLAYCLASS5_0__STARTLEVELFORTASK_B__0_OFFSET UNITYSDK_OFFSET(0x1A605FB0)

inline static constexpr unsigned int IOHBHDJGCPK___c__DisplayClass5_0_TypeDefinitionIndex = 77129;

	class IOHBHDJGCPK___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::IOHBHDJGCPK* __4__this; // 0x10
		::RPG::GameCore::LittleGameLevelConfig* levelConfig; // 0x18
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
