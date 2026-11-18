#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class AENADJBFGKF;

#define EFJMDEIBFHI_NJEAKNMFMNM_IEFGKGKDJKC_OFFSET UNITYSDK_OFFSET(0x14A87620)
#define EFJMDEIBFHI_NJEAKNMFMNM_IKPKFHHLINJ_OFFSET UNITYSDK_OFFSET(0x14A87630)
#define EFJMDEIBFHI_NJEAKNMFMNM_POBNPMIIKJF_OFFSET UNITYSDK_OFFSET(0x14A87610)
#define EFJMDEIBFHI_NJEAKNMFMNM__CTOR_OFFSET UNITYSDK_OFFSET(0x14A87600)

inline static constexpr unsigned int EFJMDEIBFHI_NJEAKNMFMNM_TypeDefinitionIndex = 82257;

class EFJMDEIBFHI_NJEAKNMFMNM : public ::System::Object
{
public:
	::System::Nullable_1<::System::Boolean> LMBMEIJLCAM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJMDEIBFHI_NJEAKNMFMNM__CTOR_OFFSET))(this);
	}

	::System::Void POBNPMIIKJF(::AENADJBFGKF* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::AENADJBFGKF*))((::PBYTE)hIl2Cpp + EFJMDEIBFHI_NJEAKNMFMNM_POBNPMIIKJF_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void IEFGKGKDJKC(::AENADJBFGKF* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::AENADJBFGKF*))((::PBYTE)hIl2Cpp + EFJMDEIBFHI_NJEAKNMFMNM_IEFGKGKDJKC_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Boolean IKPKFHHLINJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJMDEIBFHI_NJEAKNMFMNM_IKPKFHHLINJ_OFFSET))(this);
	}
};
