#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHJPMDPJPEC.h"
class JMOHKKCNCMA;
class LHJPMDPJPEC;
namespace RPG::GameCore { class MarbleByAnd; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NHINBOEKLED_CTOR_OFFSET UNITYSDK_OFFSET(0x1C937B20)
#define NHINBOEKLED_KHNFOOKHOJF_OFFSET UNITYSDK_OFFSET(0x1C937CD0)

inline static constexpr unsigned int NHINBOEKLED_TypeDefinitionIndex = 43136;

	class NHINBOEKLED : public ::LHJPMDPJPEC
	{
	public:
		::System::Collections::Generic::List_1<::LHJPMDPJPEC*>* HLOLHEMPFHF; // 0x30
		::RPG::GameCore::MarbleByAnd* IGHAHBNLIJA; // 0x38
		::System::Void _ctor(::RPG::GameCore::MarbleByAnd* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByAnd*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + NHINBOEKLED_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KHNFOOKHOJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NHINBOEKLED_KHNFOOKHOJF_OFFSET))(this);
		}

	};
