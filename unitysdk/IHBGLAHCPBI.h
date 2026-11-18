#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JEFIICKFMPL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IHBGLAHCPBI_AFMEPAPNBPJ_1_OFFSET UNITYSDK_OFFSET(0x1B12F610)
#define IHBGLAHCPBI_AFMEPAPNBPJ_OFFSET UNITYSDK_OFFSET(0x1B12F510)
#define IHBGLAHCPBI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IHBGLAHCPBI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80A790)
#define IHBGLAHCPBI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IHBGLAHCPBI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IHBGLAHCPBI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80A780)
#define IHBGLAHCPBI___INIT_OFFSET UNITYSDK_OFFSET(0x80A760)

inline static constexpr unsigned int IHBGLAHCPBI_TypeDefinitionIndex = 9804;

struct alignas(8) IHBGLAHCPBI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBGLAHCPBI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IHBGLAHCPBI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IHBGLAHCPBI AFMEPAPNBPJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IHBGLAHCPBI EIFONLCJOPG)
	{
		return ((::IHBGLAHCPBI(*)(::FlatBuffers::ByteBuffer*, ::IHBGLAHCPBI))((::PBYTE)hIl2Cpp + IHBGLAHCPBI_AFMEPAPNBPJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBGLAHCPBI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::IHBGLAHCPBI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IHBGLAHCPBI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IHBGLAHCPBI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBGLAHCPBI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::IHBGLAHCPBI AFMEPAPNBPJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IHBGLAHCPBI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IHBGLAHCPBI_AFMEPAPNBPJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JEFIICKFMPL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JEFIICKFMPL&))((::PBYTE)hIl2Cpp + IHBGLAHCPBI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
