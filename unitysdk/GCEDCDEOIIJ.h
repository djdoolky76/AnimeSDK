#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHJPMDPJPEC.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleByCompareScore; }

#define GCEDCDEOIIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA50940)
#define GCEDCDEOIIJ_KHNFOOKHOJF_OFFSET UNITYSDK_OFFSET(0x1CA50960)

inline static constexpr unsigned int GCEDCDEOIIJ_TypeDefinitionIndex = 43159;

	class GCEDCDEOIIJ : public ::LHJPMDPJPEC
	{
	public:
		::RPG::GameCore::MarbleByCompareScore* IGHAHBNLIJA; // 0x30
		::System::Void _ctor(::RPG::GameCore::MarbleByCompareScore* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByCompareScore*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + GCEDCDEOIIJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KHNFOOKHOJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEDCDEOIIJ_KHNFOOKHOJF_OFFSET))(this);
		}

	};
