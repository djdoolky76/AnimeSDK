#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/System/Object.h"

#define HCPONEIENJA_ADHMJEBKPIH_OFFSET UNITYSDK_OFFSET(0x15C22970)
#define HCPONEIENJA_IFLGHFBFGIE_OFFSET UNITYSDK_OFFSET(0x15C22A40)
#define HCPONEIENJA_JBLDNBAJNBA_OFFSET UNITYSDK_OFFSET(0x15C229F0)

inline static constexpr unsigned int HCPONEIENJA_TypeDefinitionIndex = 72367;

	class HCPONEIENJA : public ::System::Object
	{
	public:
		static ::System::Boolean ADHMJEBKPIH(::RPG::Client::UIFloatingTextType a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::UIFloatingTextType))((::PBYTE)hIl2Cpp + HCPONEIENJA_ADHMJEBKPIH_OFFSET))(a1);
		}

		static ::System::Boolean IFLGHFBFGIE(::RPG::Client::UIFloatingTextType a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::UIFloatingTextType))((::PBYTE)hIl2Cpp + HCPONEIENJA_IFLGHFBFGIE_OFFSET))(a1);
		}

		static ::System::Boolean JBLDNBAJNBA(::RPG::Client::UIFloatingTextType a1, ::RPG::Client::UIFloatingTextType a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::UIFloatingTextType, ::RPG::Client::UIFloatingTextType))((::PBYTE)hIl2Cpp + HCPONEIENJA_JBLDNBAJNBA_OFFSET))(a1, a2);
		}

	};
