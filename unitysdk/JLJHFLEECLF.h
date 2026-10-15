#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IBNAFGFFJLJ.h"
class CIMOKFGNKCB;
class IBNAFGFFJLJ;
namespace RPG::Client::ActivityAlley { class AlleyPackGoodData; }

#define JLJHFLEECLF_CFINKMFANFE_OFFSET UNITYSDK_OFFSET(0xB24CE60)
#define JLJHFLEECLF_CTOR_OFFSET UNITYSDK_OFFSET(0xB24CF20)
#define JLJHFLEECLF_EJNEFDIIINJ_OFFSET UNITYSDK_OFFSET(0xB24CE00)
#define JLJHFLEECLF_GJEOIAFHCGH_OFFSET UNITYSDK_OFFSET(0xB24CEC0)
#define JLJHFLEECLF_HBIAECKEGOG_OFFSET UNITYSDK_OFFSET(0xB24CC30)
#define JLJHFLEECLF_IGJAJLGKCOB_OFFSET UNITYSDK_OFFSET(0xB24CD00)
#define JLJHFLEECLF_MJNMFMEDJJM_OFFSET UNITYSDK_OFFSET(0xB24CD70)
#define JLJHFLEECLF_NMDDKPMDNPA_OFFSET UNITYSDK_OFFSET(0xB24CB50)

inline static constexpr unsigned int JLJHFLEECLF_TypeDefinitionIndex = 74100;

	class JLJHFLEECLF : public ::IBNAFGFFJLJ
	{
	public:
		::CIMOKFGNKCB* HOBFMNIDJJG; // 0x48
		::System::Boolean FBBBBCJGOBG; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJHFLEECLF_CTOR_OFFSET))(this);
		}

		::System::Void NMDDKPMDNPA(::IBNAFGFFJLJ* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::IBNAFGFFJLJ*, ::System::Boolean))((::PBYTE)hIl2Cpp + JLJHFLEECLF_NMDDKPMDNPA_OFFSET))(this, a1, a2);
		}

		::System::Void MJNMFMEDJJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJHFLEECLF_MJNMFMEDJJM_OFFSET))(this);
		}

		::System::Void EJNEFDIIINJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJHFLEECLF_EJNEFDIIINJ_OFFSET))(this);
		}

		::System::Void CFINKMFANFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJHFLEECLF_CFINKMFANFE_OFFSET))(this);
		}

		::System::Void HBIAECKEGOG(::IBNAFGFFJLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBNAFGFFJLJ*))((::PBYTE)hIl2Cpp + JLJHFLEECLF_HBIAECKEGOG_OFFSET))(this, a1);
		}

		::System::Void IGJAJLGKCOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJHFLEECLF_IGJAJLGKCOB_OFFSET))(this);
		}

		::RPG::Client::ActivityAlley::AlleyPackGoodData* GJEOIAFHCGH()
		{
			return ((::RPG::Client::ActivityAlley::AlleyPackGoodData*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJHFLEECLF_GJEOIAFHCGH_OFFSET))(this);
		}

	};
