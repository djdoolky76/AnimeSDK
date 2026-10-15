#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/SelectorType.h"
#include "unitysdk/System/Object.h"
class FHPMJLMOMFL;
class GEMBPMMMGBP;

#define BCFMLECMEMO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15E99A50)

inline static constexpr unsigned int BCFMLECMEMO_TypeDefinitionIndex = 74441;

	class BCFMLECMEMO : public ::System::Object
	{
	public:
		static ::GEMBPMMMGBP* BPLPBPMEODA(::RPG::Client::RelicSmartSuit::SelectorType a1, ::FHPMJLMOMFL* a2)
		{
			return ((::GEMBPMMMGBP*(*)(::RPG::Client::RelicSmartSuit::SelectorType, ::FHPMJLMOMFL*))((::PBYTE)hIl2Cpp + BCFMLECMEMO_BPLPBPMEODA_OFFSET))(a1, a2);
		}

	};
