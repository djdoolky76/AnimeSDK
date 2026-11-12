#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KOJHMGMKDPJ.h"
#include "unitysdk/NHHMEPILLHL.h"
class KJAMNOGFAMJ;
namespace RPG::Client { class RogueBuffInfo; }
namespace RPG::Client { class RogueFormulaInfo; }

#define INHAIPMAPNB_CJGPJLOJGML_OFFSET UNITYSDK_OFFSET(0xB81FEC0)
#define INHAIPMAPNB_CTOR_OFFSET UNITYSDK_OFFSET(0xB81DDD0)
#define INHAIPMAPNB_FMMKHGDNANK_OFFSET UNITYSDK_OFFSET(0xB81FF00)
#define INHAIPMAPNB_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0xB81FB90)

inline static constexpr unsigned int INHAIPMAPNB_TypeDefinitionIndex = 69018;

	class INHAIPMAPNB : public ::KOJHMGMKDPJ
	{
	public:
		::RPG::Client::RogueFormulaInfo* PCCPCCCFBHJ; // 0x28
		::KJAMNOGFAMJ* LEEMNOCGBOJ; // 0x30
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::RogueBuffInfo* a2, ::RPG::Client::RogueFormulaInfo* a3, ::KJAMNOGFAMJ* a4)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::RogueBuffInfo*, ::RPG::Client::RogueFormulaInfo*, ::KJAMNOGFAMJ*))((::PBYTE)hIl2Cpp + INHAIPMAPNB_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INHAIPMAPNB_JAGMPHPNAHM_OFFSET))(this);
		}

		static ::System::Boolean CJGPJLOJGML(::NHHMEPILLHL a1)
		{
			return ((::System::Boolean(*)(::NHHMEPILLHL))((::PBYTE)hIl2Cpp + INHAIPMAPNB_CJGPJLOJGML_OFFSET))(a1);
		}

		static ::System::Boolean FMMKHGDNANK(::NHHMEPILLHL a1)
		{
			return ((::System::Boolean(*)(::NHHMEPILLHL))((::PBYTE)hIl2Cpp + INHAIPMAPNB_FMMKHGDNANK_OFFSET))(a1);
		}

	};
