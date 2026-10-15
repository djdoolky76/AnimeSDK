#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJNJKIMNDMH.h"
#include "unitysdk/NHHMEPILLHL.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
class JJEMDNEIMOJ;
namespace RPG::Client { class RogueFormulaInfo; }

#define LACNNMOLPHP_CJGPJLOJGML_OFFSET UNITYSDK_OFFSET(0xB5DA860)
#define LACNNMOLPHP_CTOR_OFFSET UNITYSDK_OFFSET(0xB5DA690)
#define LACNNMOLPHP_HGPMGBPDAHA_OFFSET UNITYSDK_OFFSET(0xB5DA8A0)
#define LACNNMOLPHP_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0xB5DA6B0)

	class LACNNMOLPHP : public ::KJNJKIMNDMH
	{
	public:
		::JJEMDNEIMOJ* LEEMNOCGBOJ; // 0x28
		::RPG::GameCore::RogueSubMode FKNBPKADNPA; // 0x30
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::GameCore::RogueSubMode a2, ::RPG::Client::RogueFormulaInfo* a3, ::JJEMDNEIMOJ* a4)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::GameCore::RogueSubMode, ::RPG::Client::RogueFormulaInfo*, ::JJEMDNEIMOJ*))((::PBYTE)hIl2Cpp + LACNNMOLPHP_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LACNNMOLPHP_JAGMPHPNAHM_OFFSET))(this);
		}

		static ::System::Boolean CJGPJLOJGML(::NHHMEPILLHL a1)
		{
			return ((::System::Boolean(*)(::NHHMEPILLHL))((::PBYTE)hIl2Cpp + LACNNMOLPHP_CJGPJLOJGML_OFFSET))(a1);
		}

		static ::System::Boolean HGPMGBPDAHA(::RPG::GameCore::RogueSubMode a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + LACNNMOLPHP_HGPMGBPDAHA_OFFSET))(a1);
		}

	};
