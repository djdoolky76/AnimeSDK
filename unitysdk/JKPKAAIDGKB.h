#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class IIAJFCNCMEB;

#define JKPKAAIDGKB_CTOR_OFFSET UNITYSDK_OFFSET(0xB22E810)

	class JKPKAAIDGKB : public ::System::Object
	{
	public:
		::IIAJFCNCMEB* HNEOOKPBCNK; // 0x10
		::RPG::GameCore::FixPoint DDFGEIEMAJK; // 0x18
		::System::Void _ctor(::IIAJFCNCMEB* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::IIAJFCNCMEB*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JKPKAAIDGKB_CTOR_OFFSET))(this, a1, a2);
		}

	};
