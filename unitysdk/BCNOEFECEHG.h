#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEMIDPFEJFL;
namespace RPG::Client { class MonopolyContentTrigger; }

#define BCNOEFECEHG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x162E9BD0)

inline static constexpr unsigned int BCNOEFECEHG_TypeDefinitionIndex = 66280;

	class BCNOEFECEHG : public ::System::Object
	{
	public:
		static ::RPG::Client::MonopolyContentTrigger* BPLPBPMEODA(::NEMIDPFEJFL* a1)
		{
			return ((::RPG::Client::MonopolyContentTrigger*(*)(::NEMIDPFEJFL*))((::PBYTE)hIl2Cpp + BCNOEFECEHG_BPLPBPMEODA_OFFSET))(a1);
		}

	};
