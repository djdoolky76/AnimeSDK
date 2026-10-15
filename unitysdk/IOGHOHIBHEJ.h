#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPFGOGOLBI.h"
class CENEFPOMFKG;
class JFJOPDOIKKC;

#define IOGHOHIBHEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x164F4C00)
#define IOGHOHIBHEJ_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0x164F4910)
#define IOGHOHIBHEJ_GNADABFLEFM_OFFSET UNITYSDK_OFFSET(0x164F4A80)
#define IOGHOHIBHEJ_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0x164F48C0)

inline static constexpr unsigned int IOGHOHIBHEJ_TypeDefinitionIndex = 53762;

	class IOGHOHIBHEJ : public ::GJPFGOGOLBI
	{
	public:
		::JFJOPDOIKKC* AIKAPJELHNK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOGHOHIBHEJ_CTOR_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOGHOHIBHEJ_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void DADCFBHGLOH(::JFJOPDOIKKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFJOPDOIKKC*))((::PBYTE)hIl2Cpp + IOGHOHIBHEJ_DADCFBHGLOH_OFFSET))(this, a1);
		}

		::System::Boolean GNADABFLEFM(::CENEFPOMFKG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CENEFPOMFKG*))((::PBYTE)hIl2Cpp + IOGHOHIBHEJ_GNADABFLEFM_OFFSET))(this, a1);
		}

	};
