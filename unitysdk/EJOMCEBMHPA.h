#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BlindBox/Pool/BlindBoxCostExchangeRatio.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/BlindBox/Pool/BlindBoxCostCalculateResult.h"
class AGADOMHIAHE;

#define EJOMCEBMHPA_CTOR_OFFSET UNITYSDK_OFFSET(0x154EB710)
#define EJOMCEBMHPA_DFACNDFPDHK_OFFSET UNITYSDK_OFFSET(0x154EB770)
#define EJOMCEBMHPA_DFOFGONIDNM_OFFSET UNITYSDK_OFFSET(0x154EB730)

inline static constexpr unsigned int EJOMCEBMHPA_TypeDefinitionIndex = 74942;

	class EJOMCEBMHPA : public ::System::Object
	{
	public:
		::AGADOMHIAHE* OJPOMMLGJMI; // 0x10
		::AGADOMHIAHE* HCBGDLHMMHN; // 0x18
		::AGADOMHIAHE* KPDHEKMAFOA; // 0x20
		::RPG::Client::BlindBox::Pool::BlindBoxCostExchangeRatio BFPOCEDAOMA; // 0x28
		::System::Void _ctor(::AGADOMHIAHE* a1, ::AGADOMHIAHE* a2, ::AGADOMHIAHE* a3, ::RPG::Client::BlindBox::Pool::BlindBoxCostExchangeRatio a4)
		{
			return ((::System::Void(*)(::PVOID, ::AGADOMHIAHE*, ::AGADOMHIAHE*, ::AGADOMHIAHE*, ::RPG::Client::BlindBox::Pool::BlindBoxCostExchangeRatio))((::PBYTE)hIl2Cpp + EJOMCEBMHPA_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::BlindBox::Pool::BlindBoxCostExchangeRatio DFOFGONIDNM()
		{
			return ((::RPG::Client::BlindBox::Pool::BlindBoxCostExchangeRatio(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOMCEBMHPA_DFOFGONIDNM_OFFSET))(this);
		}

		::RPG::Client::BlindBox::Pool::BlindBoxCostCalculateResult DFACNDFPDHK(::System::UInt32 a1)
		{
			return ((::RPG::Client::BlindBox::Pool::BlindBoxCostCalculateResult(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EJOMCEBMHPA_DFACNDFPDHK_OFFSET))(this, a1);
		}

	};
