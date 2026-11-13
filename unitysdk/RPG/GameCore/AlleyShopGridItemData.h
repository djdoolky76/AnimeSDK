#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyBaseGridItemData.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlleyShopGridItemData; }

#define RPG_GAMECORE_ALLEYSHOPGRIDITEMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE97A20)
#define RPG_GAMECORE_ALLEYSHOPGRIDITEMDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DE97A30)
#define RPG_GAMECORE_ALLEYSHOPGRIDITEMDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DEA34A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyShopGridItemData_TypeDefinitionIndex = 15834;

	class AlleyShopGridItemData : public ::RPG::GameCore::AlleyBaseGridItemData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHOPGRIDITEMDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AlleyShopGridItemData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AlleyShopGridItemData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHOPGRIDITEMDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AlleyShopGridItemData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AlleyShopGridItemData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHOPGRIDITEMDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
