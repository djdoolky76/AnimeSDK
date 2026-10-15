#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class KDAELFIKPHH;

#define LJNLMENLKND_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8E1250)

inline static constexpr unsigned int LJNLMENLKND_TypeDefinitionIndex = 43730;

	class LJNLMENLKND : public ::System::Object
	{
	public:
		::KDAELFIKPHH* ENCMEGCGPIK; // 0x10
		::RPG::GameCore::FixPoint KMBINDFIKOG; // 0x18
		::RPG::GameCore::FixPoint DKKDIIIDINA; // 0x20
		::RPG::GameCore::FixPoint MJLDBGGGLNI; // 0x28
		::System::Single PNENIJHGNHI; // 0x30
		::System::Single PEONKINHKHG; // 0x34
		::System::UInt64 LPPIKDDDHEG; // 0x38
		::RPG::GameCore::FixPoint FPAKIIHMKNC; // 0x40
		::RPG::GameCore::FixPoint JDNOIHHJMIO; // 0x48
		::RPG::GameCore::FixPoint DDOEOIAJCDL; // 0x50
		::RPG::GameCore::FixPoint ELIFPENHKND; // 0x58
		::System::Single IKHFKCHOOHC; // 0x60
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint NGAJGBAECBL; // 0x68
		::RPG::GameCore::FixPoint KMALECKMKFA; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJNLMENLKND_CTOR_OFFSET))(this);
		}

	};
