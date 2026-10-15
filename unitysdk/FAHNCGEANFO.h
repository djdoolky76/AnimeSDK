#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKOEAOPNEAC;
namespace RPG::Client { class RogueGambleBaseFunc; }

#define FAHNCGEANFO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15670220)

inline static constexpr unsigned int FAHNCGEANFO_TypeDefinitionIndex = 67225;

	class FAHNCGEANFO : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueGambleBaseFunc* BPLPBPMEODA(::HKOEAOPNEAC* a1)
		{
			return ((::RPG::Client::RogueGambleBaseFunc*(*)(::HKOEAOPNEAC*))((::PBYTE)hIl2Cpp + FAHNCGEANFO_BPLPBPMEODA_OFFSET))(a1);
		}

	};
