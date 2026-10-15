#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowWorldShop; }

#define RPG_GAMECORE_SHOWWORLDSHOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABB050)
#define RPG_GAMECORE_SHOWWORLDSHOP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DABB060)
#define RPG_GAMECORE_SHOWWORLDSHOP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DABB020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowWorldShop_TypeDefinitionIndex = 20901;

	class ShowWorldShop : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ShopType; // 0x18
		::System::UInt32 ShopID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWWORLDSHOP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowWorldShop* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowWorldShop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWWORLDSHOP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowWorldShop* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowWorldShop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWWORLDSHOP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
