#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class AKACCHPPLPG;
class FCOEMCEDLNL;

#define AKACCHPPLPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCA38E0)
#define AKACCHPPLPG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCA3630)

inline static constexpr unsigned int AKACCHPPLPG_TypeDefinitionIndex = 11761;

	class AKACCHPPLPG : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint HBJHAIAJABL; // 0x10
		::RPG::GameCore::FixPoint LIOIAIIHLON; // 0x18
		::RPG::GameCore::FixPoint CONAIKKDGGO; // 0x20
		::RPG::GameCore::FixPoint DNPIAKNBJCC; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKACCHPPLPG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AKACCHPPLPG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AKACCHPPLPG*))((::PBYTE)hIl2Cpp + AKACCHPPLPG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
