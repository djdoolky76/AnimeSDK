#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyBaseGridItemData.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlleyTutorialGridItemData; }

#define RPG_GAMECORE_ALLEYTUTORIALGRIDITEMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B2790)
#define RPG_GAMECORE_ALLEYTUTORIALGRIDITEMDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3B27A0)
#define RPG_GAMECORE_ALLEYTUTORIALGRIDITEMDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3C0590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyTutorialGridItemData_TypeDefinitionIndex = 15680;

	class AlleyTutorialGridItemData : public ::RPG::GameCore::AlleyBaseGridItemData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYTUTORIALGRIDITEMDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AlleyTutorialGridItemData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AlleyTutorialGridItemData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYTUTORIALGRIDITEMDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AlleyTutorialGridItemData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AlleyTutorialGridItemData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYTUTORIALGRIDITEMDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
