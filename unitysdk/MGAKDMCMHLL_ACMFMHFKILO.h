#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFOHGNLIAKH;
class MGAKDMCMHLL_AFFHHPAAGMF;

#define MGAKDMCMHLL_ACMFMHFKILO_MGPNOBHGIDF_OFFSET UNITYSDK_OFFSET(0x17D22000)
#define MGAKDMCMHLL_ACMFMHFKILO__CTOR_OFFSET UNITYSDK_OFFSET(0x17D21FF0)

inline static constexpr unsigned int MGAKDMCMHLL_ACMFMHFKILO_TypeDefinitionIndex = 49014;

class MGAKDMCMHLL_ACMFMHFKILO : public ::System::Object
{
public:
	::MGAKDMCMHLL_AFFHHPAAGMF* FGBNBFHOKAA; // 0x10
	::System::Int32 MGMDLMBEDJF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGAKDMCMHLL_ACMFMHFKILO__CTOR_OFFSET))(this);
	}

	::System::Void MGPNOBHGIDF(::IFOHGNLIAKH* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + MGAKDMCMHLL_ACMFMHFKILO_MGPNOBHGIDF_OFFSET))(this, JOLDOMEIKEF);
	}
};
