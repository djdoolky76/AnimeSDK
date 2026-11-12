#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/System/Object.h"

#define HCPONEIENJA_ADHMJEBKPIH_OFFSET UNITYSDK_OFFSET(0x16B72C60)
#define HCPONEIENJA_HNHJGHHAMNH_OFFSET UNITYSDK_OFFSET(0x16B72D30)
#define HCPONEIENJA_IFLGHFBFGIE_OFFSET UNITYSDK_OFFSET(0x16B72DB0)
#define HCPONEIENJA_JBLDNBAJNBA_OFFSET UNITYSDK_OFFSET(0x16B72CE0)
#define HCPONEIENJA_MMLPMFKOHOK_OFFSET UNITYSDK_OFFSET(0x16B72E70)

inline static constexpr unsigned int HCPONEIENJA_TypeDefinitionIndex = 74447;

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
