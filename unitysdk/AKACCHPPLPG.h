#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class AKACCHPPLPG;
class FCOEMCEDLNL;

#define AKACCHPPLPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD1A60)
#define AKACCHPPLPG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCD17B0)

	class AKACCHPPLPG : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint LIOIAIIHLON; // 0x10
		::RPG::GameCore::FixPoint CONAIKKDGGO; // 0x18
		::RPG::GameCore::FixPoint DNPIAKNBJCC; // 0x20
		::RPG::GameCore::FixPoint HBJHAIAJABL; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKACCHPPLPG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AKACCHPPLPG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AKACCHPPLPG*))((::PBYTE)hIl2Cpp + AKACCHPPLPG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
