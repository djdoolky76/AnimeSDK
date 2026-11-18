#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class FLBAPBMDLHJ;

#define KPNEKBLDEOK_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x784950)
#define KPNEKBLDEOK_GBDNLMFAOLB_OFFSET UNITYSDK_OFFSET(0x7849C0)
#define KPNEKBLDEOK_OMPFLKCBFHF_OFFSET UNITYSDK_OFFSET(0x784960)
#define KPNEKBLDEOK__CCTOR_OFFSET UNITYSDK_OFFSET(0x163538C0)
#define KPNEKBLDEOK__CTOR_OFFSET UNITYSDK_OFFSET(0x784920)

inline static constexpr unsigned int KPNEKBLDEOK_TypeDefinitionIndex = 64331;

struct alignas(8) KPNEKBLDEOK
{
	static ::KPNEKBLDEOK* StaticGet_FDJHEBHLJLD()
	{
		return (::KPNEKBLDEOK*)Il2CppClass::FromTypeDefinitionIndex(KPNEKBLDEOK_TypeDefinitionIndex)->GetStaticField(0x4F730);
	}
	// static const ::System::Int32 FNAOFGHBPHL = 0x0; // 0x0
	::System::UInt32 OAHBPCLLONJ; // 0x10
	::System::Byte _padding0[0x4];
	::FLBAPBMDLHJ* HFDNDPBGKNE; // 0x18

	::System::Void _ctor(::FLBAPBMDLHJ* FFAKNCKHEOE)
	{
		return ((::System::Void(*)(::PVOID, ::FLBAPBMDLHJ*))((::PBYTE)hIl2Cpp + KPNEKBLDEOK__CTOR_OFFSET))(this, FFAKNCKHEOE);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPNEKBLDEOK__CCTOR_OFFSET))();
	}

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNEKBLDEOK_FFCPIEDHBDP_OFFSET))(this);
	}

	::FLBAPBMDLHJ* OMPFLKCBFHF()
	{
		return ((::FLBAPBMDLHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNEKBLDEOK_OMPFLKCBFHF_OFFSET))(this);
	}

	::System::Boolean GBDNLMFAOLB(::FLBAPBMDLHJ*& FFAKNCKHEOE)
	{
		return ((::System::Boolean(*)(::PVOID, ::FLBAPBMDLHJ*&))((::PBYTE)hIl2Cpp + KPNEKBLDEOK_GBDNLMFAOLB_OFFSET))(this, FFAKNCKHEOE);
	}
};
