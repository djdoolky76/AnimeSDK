#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowShop; }

#define RPG_GAMECORE_SHOWSHOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE4660)
#define RPG_GAMECORE_SHOWSHOP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE4670)
#define RPG_GAMECORE_SHOWSHOP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE4630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowShop_TypeDefinitionIndex = 20897;

	class ShowShop : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 ShopType; // 0x18
		::System::UInt32 ShopID; // 0x1C
		::Il2CppArray<::System::Int32>* TaskID; // 0x20
		::System::Boolean IsActiveMonitor; // 0x28
		::System::Boolean DisableBoughtHint; // 0x29
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSHOP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowShop* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowShop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSHOP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowShop* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowShop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSHOP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
