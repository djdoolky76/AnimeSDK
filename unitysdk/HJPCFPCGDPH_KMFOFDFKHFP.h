#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HJPCFPCGDPH_KMFOFDFKHFP_EPOIDPJEDDB_OFFSET UNITYSDK_OFFSET(0x15DBD3D0)
#define HJPCFPCGDPH_KMFOFDFKHFP_FHKJGMFCKLJ_OFFSET UNITYSDK_OFFSET(0x15DBD3C0)
#define HJPCFPCGDPH_KMFOFDFKHFP__CTOR_OFFSET UNITYSDK_OFFSET(0x15DBD3B0)

inline static constexpr unsigned int HJPCFPCGDPH_KMFOFDFKHFP_TypeDefinitionIndex = 56974;

class HJPCFPCGDPH_KMFOFDFKHFP : public ::System::Object
{
public:
	::System::Boolean CAAFEGLOALC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPCFPCGDPH_KMFOFDFKHFP__CTOR_OFFSET))(this);
	}

	::System::Void FHKJGMFCKLJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPCFPCGDPH_KMFOFDFKHFP_FHKJGMFCKLJ_OFFSET))(this);
	}

	::System::Boolean EPOIDPJEDDB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPCFPCGDPH_KMFOFDFKHFP_EPOIDPJEDDB_OFFSET))(this);
	}
};
