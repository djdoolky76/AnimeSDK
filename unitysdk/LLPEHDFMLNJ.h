#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIMHOGHOCKP.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class HFALLFOEHKN;

#define LLPEHDFMLNJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB775A00)

	class LLPEHDFMLNJ : public ::BIMHOGHOCKP
	{
	public:
		::HFALLFOEHKN* LJLDPJFOKCE; // 0x98
		::RPG::GameCore::FixPoint CCMEMJGPOGE; // 0xA0
		::RPG::GameCore::FixPoint HKLPHLBFGAD; // 0xA8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPEHDFMLNJ_CTOR_OFFSET))(this);
		}

	};
