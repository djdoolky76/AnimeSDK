#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OFLPOCHHHLC;

#define CGGLJLECNJM_BFKOFMJCMHC_OFFSET UNITYSDK_OFFSET(0x1E79CCF0)
#define CGGLJLECNJM_BPFKEIOACJA_OFFSET UNITYSDK_OFFSET(0x1E79CC90)
#define CGGLJLECNJM_GLBBNJKJJGI_OFFSET UNITYSDK_OFFSET(0x1E79CD10)
#define CGGLJLECNJM_JEKGFDMLBIA_OFFSET UNITYSDK_OFFSET(0x1E79CD00)
#define CGGLJLECNJM_MAHEJCKKAEP_OFFSET UNITYSDK_OFFSET(0x1E79CD20)
#define CGGLJLECNJM_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1E79CC30)
#define CGGLJLECNJM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E79CC80)

inline static constexpr unsigned int CGGLJLECNJM_TypeDefinitionIndex = 29078;

class CGGLJLECNJM : public ::System::Object
{
public:
	::OFLPOCHHHLC* OAHFOEBLFKB; // 0x10
	::System::Int32 _MDAJIMHCINM_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGGLJLECNJM__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGGLJLECNJM_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::UInt64 BPFKEIOACJA()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CGGLJLECNJM_BPFKEIOACJA_OFFSET))(this);
	}

	::OFLPOCHHHLC* BFKOFMJCMHC()
	{
		return ((::OFLPOCHHHLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGGLJLECNJM_BFKOFMJCMHC_OFFSET))(this);
	}

	::System::Void JEKGFDMLBIA(::OFLPOCHHHLC* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*))((::PBYTE)hIl2Cpp + CGGLJLECNJM_JEKGFDMLBIA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 GLBBNJKJJGI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGGLJLECNJM_GLBBNJKJJGI_OFFSET))(this);
	}

	::System::Void MAHEJCKKAEP(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CGGLJLECNJM_MAHEJCKKAEP_OFFSET))(this, EGEGIMGMJHN);
	}
};
