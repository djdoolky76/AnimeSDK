#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HeroBaseType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChangeHeroBasicType; }

#define RPG_GAMECORE_CHANGEHEROBASICTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D567370)
#define RPG_GAMECORE_CHANGEHEROBASICTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D567380)
#define RPG_GAMECORE_CHANGEHEROBASICTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D567340)

namespace RPG::GameCore
{
	class ChangeHeroBasicType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::HeroBaseType BasicType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEHEROBASICTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeHeroBasicType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeHeroBasicType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEHEROBASICTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeHeroBasicType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeHeroBasicType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEHEROBASICTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
