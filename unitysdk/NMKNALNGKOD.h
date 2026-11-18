#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ELEHDLIOHIP.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define NMKNALNGKOD_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x16B92450)
#define NMKNALNGKOD_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x16B92410)
#define NMKNALNGKOD_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x16B92380)
#define NMKNALNGKOD_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x16B922F0)
#define NMKNALNGKOD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16B92160)
#define NMKNALNGKOD__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B92270)
#define NMKNALNGKOD__CTOR_OFFSET UNITYSDK_OFFSET(0x16B922E0)

inline static constexpr unsigned int NMKNALNGKOD_TypeDefinitionIndex = 59508;

class NMKNALNGKOD : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x71; // 0x0
	::System::String* KIHGNGKBADE; // 0x20
	::System::UInt32 PCMPAJENALI; // 0x28
	::ELEHDLIOHIP LLEPLCNIGKE; // 0x2C
	::System::UInt32 DCPEFCJILPB; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMKNALNGKOD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKNALNGKOD__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKNALNGKOD_TOSTRING_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKNALNGKOD_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKNALNGKOD_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKNALNGKOD_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 EGKGLCIDEHC, ::ELEHDLIOHIP KKMENMCMMBN, ::System::UInt32 EPKNJJIGNNN, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::ELEHDLIOHIP, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + NMKNALNGKOD_CNHBDOMKKDE_OFFSET))(this, EGKGLCIDEHC, KKMENMCMMBN, EPKNJJIGNNN, AELLPLBJELA);
	}
};
