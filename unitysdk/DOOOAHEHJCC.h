#pragma once
#include "unitysdk/unitysdk.h"

class MELDNFKKBME;

#define DOOOAHEHJCC_DCJMFMAHBLD_OFFSET UNITYSDK_OFFSET(0x10F184F0)
#define DOOOAHEHJCC_PMAOHINGDEG_OFFSET UNITYSDK_OFFSET(0x10F18950)
#define DOOOAHEHJCC__CTOR_OFFSET UNITYSDK_OFFSET(0x10F18930)

inline static constexpr unsigned int DOOOAHEHJCC_TypeDefinitionIndex = 44147;

class DOOOAHEHJCC
{
public:
	::System::Boolean ALMIPEFAPPC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOOAHEHJCC__CTOR_OFFSET))(this);
	}

	::System::Void DCJMFMAHBLD(::MELDNFKKBME* HLFFCMIFFIB)
	{
		return ((::System::Void(*)(::PVOID, ::MELDNFKKBME*))((::PBYTE)hIl2Cpp + DOOOAHEHJCC_DCJMFMAHBLD_OFFSET))(this, HLFFCMIFFIB);
	}

	::System::Void PMAOHINGDEG(::MELDNFKKBME* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MELDNFKKBME*))((::PBYTE)hIl2Cpp + DOOOAHEHJCC_PMAOHINGDEG_OFFSET))(this, MIALFKCCCPI);
	}
};
