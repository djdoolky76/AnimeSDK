#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyBaseGridItemData.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlleyWalkableGridItemData; }

#define RPG_GAMECORE_ALLEYWALKABLEGRIDITEMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B28C0)
#define RPG_GAMECORE_ALLEYWALKABLEGRIDITEMDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3B28D0)
#define RPG_GAMECORE_ALLEYWALKABLEGRIDITEMDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3C05C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyWalkableGridItemData_TypeDefinitionIndex = 15675;

	class AlleyWalkableGridItemData : public ::RPG::GameCore::AlleyBaseGridItemData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYWALKABLEGRIDITEMDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AlleyWalkableGridItemData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AlleyWalkableGridItemData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYWALKABLEGRIDITEMDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AlleyWalkableGridItemData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AlleyWalkableGridItemData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYWALKABLEGRIDITEMDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
