#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNAGFFCCOHI.h"

#define KFJLPFDONMM_ALGDLJGCEHD_OFFSET UNITYSDK_OFFSET(0x1764E290)
#define KFJLPFDONMM_DEADJIOEONL_OFFSET UNITYSDK_OFFSET(0x1764E280)
#define KFJLPFDONMM_HJEFCNNHHEO_OFFSET UNITYSDK_OFFSET(0x1764E2A0)
#define KFJLPFDONMM_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1764E270)
#define KFJLPFDONMM__CTOR_OFFSET UNITYSDK_OFFSET(0x1764E260)

inline static constexpr unsigned int KFJLPFDONMM_TypeDefinitionIndex = 50034;

class KFJLPFDONMM : public ::JNAGFFCCOHI
{
public:
	::System::UInt32 _IHPHJGGFABP_k__BackingField; // 0x18
	::System::Int32 _HHNNKGPFJNO_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJLPFDONMM__CTOR_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJLPFDONMM_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void DEADJIOEONL(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFJLPFDONMM_DEADJIOEONL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ALGDLJGCEHD(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KFJLPFDONMM_ALGDLJGCEHD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt32 HJEFCNNHHEO()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJLPFDONMM_HJEFCNNHHEO_OFFSET))(this);
	}
};
