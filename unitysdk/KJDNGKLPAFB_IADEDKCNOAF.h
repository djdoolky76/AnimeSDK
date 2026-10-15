#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJDNGKLPAFB_IOCMNFAEFLL.h"
class KJDNGKLPAFB;
namespace RPG::GameCore { class GameEntity; }

#define KJDNGKLPAFB_IADEDKCNOAF_BAGFJGCLLCK_OFFSET UNITYSDK_OFFSET(0xB445F70)
#define KJDNGKLPAFB_IADEDKCNOAF_CTOR_OFFSET UNITYSDK_OFFSET(0xB442820)
#define KJDNGKLPAFB_IADEDKCNOAF_OBNDBPAFEOK_OFFSET UNITYSDK_OFFSET(0xB4461E0)

	class KJDNGKLPAFB_IADEDKCNOAF : public ::KJDNGKLPAFB_IOCMNFAEFLL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_IADEDKCNOAF_CTOR_OFFSET))(this);
		}

		::System::Void BAGFJGCLLCK(::KJDNGKLPAFB* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KJDNGKLPAFB*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_IADEDKCNOAF_BAGFJGCLLCK_OFFSET))(this, a1, a2);
		}

		::System::Void OBNDBPAFEOK(::KJDNGKLPAFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJDNGKLPAFB*))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_IADEDKCNOAF_OBNDBPAFEOK_OFFSET))(this, a1);
		}

	};
