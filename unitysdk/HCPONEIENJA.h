#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/System/Object.h"

#define HCPONEIENJA_ADHMJEBKPIH_OFFSET UNITYSDK_OFFSET(0x1B7C2F70)
#define HCPONEIENJA_HNHJGHHAMNH_OFFSET UNITYSDK_OFFSET(0x1B7C3040)
#define HCPONEIENJA_IFLGHFBFGIE_OFFSET UNITYSDK_OFFSET(0x1B7C30C0)
#define HCPONEIENJA_JBLDNBAJNBA_OFFSET UNITYSDK_OFFSET(0x1B7C2FF0)
#define HCPONEIENJA_MMLPMFKOHOK_OFFSET UNITYSDK_OFFSET(0x1B7C3180)

inline static constexpr unsigned int HCPONEIENJA_TypeDefinitionIndex = 74446;

	class HCPONEIENJA : public ::System::Object
	{
	public:
		static ::System::Boolean ADHMJEBKPIH(::RPG::Client::UIFloatingTextType a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::UIFloatingTextType))((::PBYTE)hIl2Cpp + HCPONEIENJA_ADHMJEBKPIH_OFFSET))(a1);
		}

		static ::System::Boolean HNHJGHHAMNH(::RPG::Client::UIFloatingTextType a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::UIFloatingTextType))((::PBYTE)hIl2Cpp + HCPONEIENJA_HNHJGHHAMNH_OFFSET))(a1);
		}

		static ::System::Boolean IFLGHFBFGIE(::RPG::Client::UIFloatingTextType a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::UIFloatingTextType))((::PBYTE)hIl2Cpp + HCPONEIENJA_IFLGHFBFGIE_OFFSET))(a1);
		}

		static ::System::Boolean MMLPMFKOHOK(::RPG::Client::UIFloatingTextType a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::UIFloatingTextType))((::PBYTE)hIl2Cpp + HCPONEIENJA_MMLPMFKOHOK_OFFSET))(a1);
		}

		static ::System::Boolean JBLDNBAJNBA(::RPG::Client::UIFloatingTextType a1, ::RPG::Client::UIFloatingTextType a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::UIFloatingTextType, ::RPG::Client::UIFloatingTextType))((::PBYTE)hIl2Cpp + HCPONEIENJA_JBLDNBAJNBA_OFFSET))(a1, a2);
		}

	};
