#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class COHADEJAPEF;
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarblePredicateConfig; }

#define LHJPMDPJPEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C909870)
#define LHJPMDPJPEC_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1C90ECC0)
#define LHJPMDPJPEC_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C90EC00)

inline static constexpr unsigned int LHJPMDPJPEC_TypeDefinitionIndex = 43163;

	class LHJPMDPJPEC : public ::BKABEBEPPJK
	{
	public:
		::COHADEJAPEF* LNMOCNDILJN; // 0x18
		::COHADEJAPEF* CHOOMNGLJHI; // 0x20
		::RPG::GameCore::MarblePredicateConfig* CNMEGFAOPIA; // 0x28
		::System::Void _ctor(::RPG::GameCore::MarblePredicateConfig* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarblePredicateConfig*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + LHJPMDPJPEC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJPMDPJPEC_KFGJEKJHIMB_OFFSET))(this);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJPMDPJPEC_KDNAAOHECPD_OFFSET))(this);
		}

	};
