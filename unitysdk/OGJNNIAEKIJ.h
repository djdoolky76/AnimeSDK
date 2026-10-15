#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KOJHMGMKDPJ.h"
#include "unitysdk/NHHMEPILLHL.h"
class KJAMNOGFAMJ;
namespace RPG::Client { class RogueBuffInfo; }
namespace RPG::Client { class RogueFormulaInfo; }

#define OGJNNIAEKIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBE51E30)
#define OGJNNIAEKIJ_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0xBE51E50)

inline static constexpr unsigned int OGJNNIAEKIJ_TypeDefinitionIndex = 67075;

	class OGJNNIAEKIJ : public ::KOJHMGMKDPJ
	{
	public:
		::KJAMNOGFAMJ* LEEMNOCGBOJ; // 0x28
		::RPG::Client::RogueFormulaInfo* PCCPCCCFBHJ; // 0x30
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::RogueBuffInfo* a2, ::RPG::Client::RogueFormulaInfo* a3, ::KJAMNOGFAMJ* a4)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::RogueBuffInfo*, ::RPG::Client::RogueFormulaInfo*, ::KJAMNOGFAMJ*))((::PBYTE)hIl2Cpp + OGJNNIAEKIJ_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGJNNIAEKIJ_JAGMPHPNAHM_OFFSET))(this);
		}

	};
