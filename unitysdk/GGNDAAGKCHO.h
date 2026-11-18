#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PMGFJAPEHFB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/EKLMJGLFFED.h"

class MEHHHAABGPC;

#define GGNDAAGKCHO_BOIOEKLOPNC_OFFSET UNITYSDK_OFFSET(0x189FDD10)
#define GGNDAAGKCHO_CCGMONANMDG_OFFSET UNITYSDK_OFFSET(0x189FDC20)
#define GGNDAAGKCHO_IPNHHPNONAA_OFFSET UNITYSDK_OFFSET(0x189FDC30)
#define GGNDAAGKCHO_MBAFALEBFMC_OFFSET UNITYSDK_OFFSET(0x189FDCA0)
#define GGNDAAGKCHO_MMMECMGEDKJ_OFFSET UNITYSDK_OFFSET(0x189FDD00)
#define GGNDAAGKCHO__CTOR_OFFSET UNITYSDK_OFFSET(0x189FDCF0)

inline static constexpr unsigned int GGNDAAGKCHO_TypeDefinitionIndex = 69361;

class GGNDAAGKCHO : public ::System::Object
{
public:
	::UnityEngine::Vector3 _PABGINFIDEM_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGNDAAGKCHO__CTOR_OFFSET))(this);
	}

	::PMGFJAPEHFB CCGMONANMDG()
	{
		return ((::PMGFJAPEHFB(*)(::PVOID))((::PBYTE)hIl2Cpp + GGNDAAGKCHO_CCGMONANMDG_OFFSET))(this);
	}

	::MEHHHAABGPC* IPNHHPNONAA(::EKLMJGLFFED BDGKJJPIKIB)
	{
		return ((::MEHHHAABGPC*(*)(::PVOID, ::EKLMJGLFFED))((::PBYTE)hIl2Cpp + GGNDAAGKCHO_IPNHHPNONAA_OFFSET))(this, BDGKJJPIKIB);
	}

	::System::Void MBAFALEBFMC(::MEHHHAABGPC* GAGANPBKNDI)
	{
		return ((::System::Void(*)(::PVOID, ::MEHHHAABGPC*))((::PBYTE)hIl2Cpp + GGNDAAGKCHO_MBAFALEBFMC_OFFSET))(this, GAGANPBKNDI);
	}

	::System::Void MMMECMGEDKJ(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GGNDAAGKCHO_MMMECMGEDKJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Vector3 BOIOEKLOPNC()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GGNDAAGKCHO_BOIOEKLOPNC_OFFSET))(this);
	}
};
