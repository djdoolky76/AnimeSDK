#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOMOGGFKHFL.h"
class FHPMJLMOMFL;
class GEMBPMMMGBP;
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }

#define OCMFDLKNMOJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x19A1BC00)
#define OCMFDLKNMOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x19A1BC70)
#define OCMFDLKNMOJ_HGFMHGPIJFJ_OFFSET UNITYSDK_OFFSET(0x19A1BC80)

inline static constexpr unsigned int OCMFDLKNMOJ_TypeDefinitionIndex = 76590;

	class OCMFDLKNMOJ : public ::GOMOGGFKHFL
	{
	public:
		::System::Void _ctor(::FHPMJLMOMFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHPMJLMOMFL*))((::PBYTE)hIl2Cpp + OCMFDLKNMOJ_CTOR_OFFSET))(this, a1);
		}

		static ::GEMBPMMMGBP* BPLPBPMEODA(::FHPMJLMOMFL* a1)
		{
			return ((::GEMBPMMMGBP*(*)(::FHPMJLMOMFL*))((::PBYTE)hIl2Cpp + OCMFDLKNMOJ_BPLPBPMEODA_OFFSET))(a1);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* HGFMHGPIJFJ()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMFDLKNMOJ_HGFMHGPIJFJ_OFFSET))(this);
		}

	};
