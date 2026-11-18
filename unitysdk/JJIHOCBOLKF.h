#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NGFJKDJDJAC.h"
#include "unitysdk/System/Nullable_1.h"

#define JJIHOCBOLKF_EBCNHHIGPAG_OFFSET UNITYSDK_OFFSET(0x13AD2690)
#define JJIHOCBOLKF_FNOBJDJEADO_OFFSET UNITYSDK_OFFSET(0x13AD2980)
#define JJIHOCBOLKF_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x13AD2620)
#define JJIHOCBOLKF_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x13AD2940)
#define JJIHOCBOLKF_LAEAAGNEHNN_OFFSET UNITYSDK_OFFSET(0x13AD27D0)
#define JJIHOCBOLKF__CTOR_OFFSET UNITYSDK_OFFSET(0x13AD27C0)

inline static constexpr unsigned int JJIHOCBOLKF_TypeDefinitionIndex = 87520;

class JJIHOCBOLKF : public ::NGFJKDJDJAC
{
public:
	::System::Nullable_1<::System::Int32> DHJMBGDMDEL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIHOCBOLKF__CTOR_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIHOCBOLKF_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void LAEAAGNEHNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIHOCBOLKF_LAEAAGNEHNN_OFFSET))(this);
	}

	::System::Void EBCNHHIGPAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIHOCBOLKF_EBCNHHIGPAG_OFFSET))(this);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIHOCBOLKF_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void FNOBJDJEADO(::System::Int32 MEOFALPDDCF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JJIHOCBOLKF_FNOBJDJEADO_OFFSET))(this, MEOFALPDDCF);
	}
};
