#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PlanetFesTradingCardExchangeCardItem; }

#define JJOBFKCKAKB_COMPARE_OFFSET UNITYSDK_OFFSET(0xB209860)
#define JJOBFKCKAKB_CTOR_OFFSET UNITYSDK_OFFSET(0xB209A90)

	class JJOBFKCKAKB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOBFKCKAKB_CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::RPG::Client::PlanetFesTradingCardExchangeCardItem* a1, ::RPG::Client::PlanetFesTradingCardExchangeCardItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardExchangeCardItem*, ::RPG::Client::PlanetFesTradingCardExchangeCardItem*))((::PBYTE)hIl2Cpp + JJOBFKCKAKB_COMPARE_OFFSET))(this, a1, a2);
		}

	};
