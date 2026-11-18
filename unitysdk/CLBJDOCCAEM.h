#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DPHOAKNGHNP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLBJDOCCAEM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CLBJDOCCAEM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E26E0)
#define CLBJDOCCAEM_DDIGFFBDMFP_1_OFFSET UNITYSDK_OFFSET(0x195055C0)
#define CLBJDOCCAEM_DDIGFFBDMFP_OFFSET UNITYSDK_OFFSET(0x19505520)
#define CLBJDOCCAEM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CLBJDOCCAEM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CLBJDOCCAEM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E2720)
#define CLBJDOCCAEM___INIT_OFFSET UNITYSDK_OFFSET(0x7E26C0)

inline static constexpr unsigned int CLBJDOCCAEM_TypeDefinitionIndex = 10945;

struct alignas(8) CLBJDOCCAEM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLBJDOCCAEM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLBJDOCCAEM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::CLBJDOCCAEM DDIGFFBDMFP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CLBJDOCCAEM EIFONLCJOPG)
	{
		return ((::CLBJDOCCAEM(*)(::FlatBuffers::ByteBuffer*, ::CLBJDOCCAEM))((::PBYTE)hIl2Cpp + CLBJDOCCAEM_DDIGFFBDMFP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::CLBJDOCCAEM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CLBJDOCCAEM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLBJDOCCAEM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CLBJDOCCAEM DDIGFFBDMFP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CLBJDOCCAEM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLBJDOCCAEM_DDIGFFBDMFP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DPHOAKNGHNP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DPHOAKNGHNP&))((::PBYTE)hIl2Cpp + CLBJDOCCAEM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLBJDOCCAEM_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLBJDOCCAEM_PPOMNIFACOL_OFFSET))(this);
	}
};
