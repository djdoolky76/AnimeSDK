#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropInitRollShop; }

#define RPG_GAMECORE_PROPINITROLLSHOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF8ADA0)
#define RPG_GAMECORE_PROPINITROLLSHOP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EF8ADB0)
#define RPG_GAMECORE_PROPINITROLLSHOP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EF8AD60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropInitRollShop_TypeDefinitionIndex = 21559;

	class PropInitRollShop : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITROLLSHOP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropInitRollShop* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropInitRollShop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITROLLSHOP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropInitRollShop* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropInitRollShop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITROLLSHOP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
