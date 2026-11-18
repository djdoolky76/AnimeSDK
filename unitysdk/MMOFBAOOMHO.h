#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NFMHLLBJCBB.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class KCMIFNGABDC_1;

#define MMOFBAOOMHO_DMOFPJGDILN_OFFSET UNITYSDK_OFFSET(0x16CA5E70)
#define MMOFBAOOMHO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16CA5DE0)
#define MMOFBAOOMHO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16CA5F20)
#define MMOFBAOOMHO__CTOR_OFFSET UNITYSDK_OFFSET(0x16CA5E80)

inline static constexpr unsigned int MMOFBAOOMHO_TypeDefinitionIndex = 92932;

class MMOFBAOOMHO : public ::NFMHLLBJCBB
{
public:
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* IEKHBGPNAKD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMOFBAOOMHO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMOFBAOOMHO_FEDNEKFMGNF_OFFSET))(this);
	}

	::KCMIFNGABDC_1<::UnityEngine::Vector3>* DMOFPJGDILN()
	{
		return ((::KCMIFNGABDC_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMOFBAOOMHO_DMOFPJGDILN_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMOFBAOOMHO_GDEOPIBNOIN_OFFSET))(this);
	}
};
