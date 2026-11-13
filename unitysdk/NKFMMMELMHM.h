#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/BasketTier.h"
#include "unitysdk/System/Object.h"

#define NKFMMMELMHM_DGNFJFEHODC_OFFSET UNITYSDK_OFFSET(0x1A7AFDE0)
#define NKFMMMELMHM_EAIEDNEBEPJ_OFFSET UNITYSDK_OFFSET(0x1A7AFD70)
#define NKFMMMELMHM_EDNCJPHBPNC_OFFSET UNITYSDK_OFFSET(0x1A7AFD00)
#define NKFMMMELMHM_EEPKIGPAIFJ_OFFSET UNITYSDK_OFFSET(0x1A7AFCB0)

inline static constexpr unsigned int NKFMMMELMHM_TypeDefinitionIndex = 79847;

	class NKFMMMELMHM : public ::System::Object
	{
	public:
		static ::System::Boolean EEPKIGPAIFJ(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NKFMMMELMHM_EEPKIGPAIFJ_OFFSET))(a1, a2);
		}

		static ::System::Boolean EDNCJPHBPNC(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NKFMMMELMHM_EDNCJPHBPNC_OFFSET))(a1, a2);
		}

		static ::System::Boolean EAIEDNEBEPJ(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NKFMMMELMHM_EAIEDNEBEPJ_OFFSET))(a1, a2);
		}

		static ::System::Boolean DGNFJFEHODC(::System::Boolean a1, ::System::Boolean a2, ::RPG::Client::LittleGame::ComicDessert::BasketTier a3)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::System::Boolean, ::RPG::Client::LittleGame::ComicDessert::BasketTier))((::PBYTE)hIl2Cpp + NKFMMMELMHM_DGNFJFEHODC_OFFSET))(a1, a2, a3);
		}

	};
