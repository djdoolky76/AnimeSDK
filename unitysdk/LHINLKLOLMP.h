#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"
#include "unitysdk/UnityEngine/Vector3.h"

class LFKIIKGGMIN;
template <typename T> class KLIOMMIOFDC_1;

#define LHINLKLOLMP_DFBNOKOKBAN_OFFSET UNITYSDK_OFFSET(0x184F8DD0)
#define LHINLKLOLMP_FPFKIEMICBO_OFFSET UNITYSDK_OFFSET(0x184F8E10)
#define LHINLKLOLMP_IHBPFGHPJJP_OFFSET UNITYSDK_OFFSET(0x184F8E00)
#define LHINLKLOLMP_JLNLOHBMNNN_OFFSET UNITYSDK_OFFSET(0x184F8DF0)
#define LHINLKLOLMP_NAMJHOANBEG_OFFSET UNITYSDK_OFFSET(0x184F8DE0)
#define LHINLKLOLMP_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x184F8CD0)
#define LHINLKLOLMP_ONGNMKFJINE_OFFSET UNITYSDK_OFFSET(0x184F8E20)
#define LHINLKLOLMP__CTOR_OFFSET UNITYSDK_OFFSET(0x184F8DC0)

inline static constexpr unsigned int LHINLKLOLMP_TypeDefinitionIndex = 56934;

class LHINLKLOLMP : public ::JJEJBPGJPJN
{
public:
	::KLIOMMIOFDC_1<::UnityEngine::Vector3>* _AIMOOIPENEA_k__BackingField; // 0x88
	::LFKIIKGGMIN* _IBIGCDJKMKL_k__BackingField; // 0x90
	::KLIOMMIOFDC_1<::UnityEngine::Vector3>* _KMOEGLEPMHC_k__BackingField; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHINLKLOLMP__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHINLKLOLMP_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void DFBNOKOKBAN(::KLIOMMIOFDC_1<::UnityEngine::Vector3>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::KLIOMMIOFDC_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + LHINLKLOLMP_DFBNOKOKBAN_OFFSET))(this, EGEGIMGMJHN);
	}

	::LFKIIKGGMIN* NAMJHOANBEG()
	{
		return ((::LFKIIKGGMIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHINLKLOLMP_NAMJHOANBEG_OFFSET))(this);
	}

	::System::Void JLNLOHBMNNN(::KLIOMMIOFDC_1<::UnityEngine::Vector3>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::KLIOMMIOFDC_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + LHINLKLOLMP_JLNLOHBMNNN_OFFSET))(this, EGEGIMGMJHN);
	}

	::KLIOMMIOFDC_1<::UnityEngine::Vector3>* IHBPFGHPJJP()
	{
		return ((::KLIOMMIOFDC_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHINLKLOLMP_IHBPFGHPJJP_OFFSET))(this);
	}

	::System::Void FPFKIEMICBO(::LFKIIKGGMIN* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LFKIIKGGMIN*))((::PBYTE)hIl2Cpp + LHINLKLOLMP_FPFKIEMICBO_OFFSET))(this, EGEGIMGMJHN);
	}

	::KLIOMMIOFDC_1<::UnityEngine::Vector3>* ONGNMKFJINE()
	{
		return ((::KLIOMMIOFDC_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHINLKLOLMP_ONGNMKFJINE_OFFSET))(this);
	}
};
