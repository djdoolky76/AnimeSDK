#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ANJODMGKGLK;
class FLBAPBMDLHJ;
class NJHFNFNECFJ;
namespace System { class EventArgs; }
namespace System { class String; }

#define PHMCOPLNELA_APBBKGEEBND_OFFSET UNITYSDK_OFFSET(0x1D629330)
#define PHMCOPLNELA_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1D628ED0)
#define PHMCOPLNELA_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x1D629100)
#define PHMCOPLNELA_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x1D629280)
#define PHMCOPLNELA_GPKKOKOHBMD_OFFSET UNITYSDK_OFFSET(0x1D629310)
#define PHMCOPLNELA_IKKDKNHPKJJ_OFFSET UNITYSDK_OFFSET(0x1D629320)
#define PHMCOPLNELA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D629300)

inline static constexpr unsigned int PHMCOPLNELA_TypeDefinitionIndex = 38409;

class PHMCOPLNELA : public ::System::Object
{
public:
	::System::String* MIHFCBDPCCF; // 0x10
	::System::String* _EDINECOCIPC_k__BackingField; // 0x18
	::NJHFNFNECFJ* JLMMDANOFGD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHMCOPLNELA__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::FLBAPBMDLHJ* FFAKNCKHEOE)
	{
		return ((::System::Void(*)(::PVOID, ::FLBAPBMDLHJ*))((::PBYTE)hIl2Cpp + PHMCOPLNELA_BBOMJDBNHIC_OFFSET))(this, FFAKNCKHEOE);
	}

	::System::Void BJANDJKKNCD(::FLBAPBMDLHJ* FFAKNCKHEOE)
	{
		return ((::System::Void(*)(::PVOID, ::FLBAPBMDLHJ*))((::PBYTE)hIl2Cpp + PHMCOPLNELA_BJANDJKKNCD_OFFSET))(this, FFAKNCKHEOE);
	}

	::System::Void GIAOBHOJCDP(::FLBAPBMDLHJ* FFAKNCKHEOE, ::ANJODMGKGLK* FCEIKAIDHPM)
	{
		return ((::System::Void(*)(::PVOID, ::FLBAPBMDLHJ*, ::ANJODMGKGLK*))((::PBYTE)hIl2Cpp + PHMCOPLNELA_GIAOBHOJCDP_OFFSET))(this, FFAKNCKHEOE, FCEIKAIDHPM);
	}

	::System::String* GPKKOKOHBMD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHMCOPLNELA_GPKKOKOHBMD_OFFSET))(this);
	}

	::System::Void IKKDKNHPKJJ(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PHMCOPLNELA_IKKDKNHPKJJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void APBBKGEEBND(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + PHMCOPLNELA_APBBKGEEBND_OFFSET))(this, KOIBHLHLMFC);
	}
};
