#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCGMIALABPJ;
namespace RPG::Client { class ElationBattleBuffGroupViewData; }

#define FCGMIALABPJ___C__DISPLAYCLASS10_0_CTOR_OFFSET UNITYSDK_OFFSET(0x156B1140)
#define FCGMIALABPJ___C__DISPLAYCLASS10_0__SETUPVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x156B1270)

inline static constexpr unsigned int FCGMIALABPJ___c__DisplayClass10_0_TypeDefinitionIndex = 71189;

	class FCGMIALABPJ___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::FCGMIALABPJ* __4__this; // 0x10
		::RPG::Client::ElationBattleBuffGroupViewData* viewData; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGMIALABPJ___C__DISPLAYCLASS10_0_CTOR_OFFSET))(this);
		}

		::System::Void _SetupView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGMIALABPJ___C__DISPLAYCLASS10_0__SETUPVIEW_B__0_OFFSET))(this);
		}

	};
