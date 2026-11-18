#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define CNCJJIGLMAL_DDFFIJADFPH_DOPDPFGOIMJ_OFFSET UNITYSDK_OFFSET(0x359320)
#define CNCJJIGLMAL_DDFFIJADFPH_EMBCMEGJDMO_OFFSET UNITYSDK_OFFSET(0x359150)
#define CNCJJIGLMAL_DDFFIJADFPH_EQUALS_OFFSET UNITYSDK_OFFSET(0x722790)
#define CNCJJIGLMAL_DDFFIJADFPH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x722740)
#define CNCJJIGLMAL_DDFFIJADFPH_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x722870)
#define CNCJJIGLMAL_DDFFIJADFPH_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7228D0)
#define CNCJJIGLMAL_DDFFIJADFPH__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

inline static constexpr unsigned int CNCJJIGLMAL_DDFFIJADFPH_TypeDefinitionIndex = 45207;

struct alignas(4) CNCJJIGLMAL_DDFFIJADFPH
{
	::System::Int32 _EDLMHHOBGNP_k__BackingField; // 0x10

	::System::Void _ctor(::System::Int32 JCJDKCLCKKH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CNCJJIGLMAL_DDFFIJADFPH__CTOR_OFFSET))(this, JCJDKCLCKKH);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNCJJIGLMAL_DDFFIJADFPH_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CNCJJIGLMAL_DDFFIJADFPH_EQUALS_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNCJJIGLMAL_DDFFIJADFPH_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Int32 DOPDPFGOIMJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNCJJIGLMAL_DDFFIJADFPH_DOPDPFGOIMJ_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CNCJJIGLMAL_DDFFIJADFPH_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void EMBCMEGJDMO(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CNCJJIGLMAL_DDFFIJADFPH_EMBCMEGJDMO_OFFSET))(this, EGEGIMGMJHN);
	}
};
