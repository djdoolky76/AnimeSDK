#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class COHADEJAPEF;
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarblePredicateConfig; }

#define LHJPMDPJPEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D635440)
#define LHJPMDPJPEC_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1D63AAC0)
#define LHJPMDPJPEC_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1D63AA00)

inline static constexpr unsigned int LHJPMDPJPEC_TypeDefinitionIndex = 44144;

	class LHJPMDPJPEC : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::MarblePredicateConfig* CNMEGFAOPIA; // 0x18
		::COHADEJAPEF* CHOOMNGLJHI; // 0x20
		::COHADEJAPEF* LNMOCNDILJN; // 0x28
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
