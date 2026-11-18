#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DNBIIEFECIE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DHCAGJKPHIM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DHCAGJKPHIM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ADA20)
#define DHCAGJKPHIM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DHCAGJKPHIM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DHCAGJKPHIM_IBGPJEECOOE_1_OFFSET UNITYSDK_OFFSET(0x17782C40)
#define DHCAGJKPHIM_IBGPJEECOOE_OFFSET UNITYSDK_OFFSET(0x17782B00)
#define DHCAGJKPHIM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7ADA10)
#define DHCAGJKPHIM___INIT_OFFSET UNITYSDK_OFFSET(0x7AD9F0)

inline static constexpr unsigned int DHCAGJKPHIM_TypeDefinitionIndex = 12263;

struct alignas(8) DHCAGJKPHIM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCAGJKPHIM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DHCAGJKPHIM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCAGJKPHIM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCAGJKPHIM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DHCAGJKPHIM IBGPJEECOOE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DHCAGJKPHIM EIFONLCJOPG)
	{
		return ((::DHCAGJKPHIM(*)(::FlatBuffers::ByteBuffer*, ::DHCAGJKPHIM))((::PBYTE)hIl2Cpp + DHCAGJKPHIM_IBGPJEECOOE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DNBIIEFECIE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DNBIIEFECIE&))((::PBYTE)hIl2Cpp + DHCAGJKPHIM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::DHCAGJKPHIM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DHCAGJKPHIM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DHCAGJKPHIM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DHCAGJKPHIM IBGPJEECOOE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DHCAGJKPHIM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DHCAGJKPHIM_IBGPJEECOOE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
