#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class KDAELFIKPHH;

#define LJNLMENLKND_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABB9A0)

inline static constexpr unsigned int LJNLMENLKND_TypeDefinitionIndex = 44805;

	class LJNLMENLKND : public ::System::Object
	{
	public:
		::KDAELFIKPHH* ENCMEGCGPIK; // 0x10
		::RPG::GameCore::FixPoint NGAJGBAECBL; // 0x18
		::RPG::GameCore::FixPoint KMBINDFIKOG; // 0x20
		::RPG::GameCore::FixPoint JDNOIHHJMIO; // 0x28
		::System::UInt64 LPPIKDDDHEG; // 0x30
		::RPG::GameCore::FixPoint DKKDIIIDINA; // 0x38
		::RPG::GameCore::FixPoint FPAKIIHMKNC; // 0x40
		::RPG::GameCore::FixPoint DDOEOIAJCDL; // 0x48
		::RPG::GameCore::FixPoint ELIFPENHKND; // 0x50
		::RPG::GameCore::FixPoint MJLDBGGGLNI; // 0x58
		::RPG::GameCore::FixPoint KMALECKMKFA; // 0x60
		::System::Single PEONKINHKHG; // 0x68
		::System::Single IKHFKCHOOHC; // 0x6C
		::System::Single PNENIJHGNHI; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJNLMENLKND_CTOR_OFFSET))(this);
		}

	};
