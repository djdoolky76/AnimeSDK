#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FEOILFLBDGA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PJAKIMGPCAA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PJAKIMGPCAA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81FEF0)
#define PJAKIMGPCAA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PJAKIMGPCAA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PJAKIMGPCAA_LCJJCPBFDCE_1_OFFSET UNITYSDK_OFFSET(0x1C0B0620)
#define PJAKIMGPCAA_LCJJCPBFDCE_OFFSET UNITYSDK_OFFSET(0x1C0B05C0)
#define PJAKIMGPCAA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81FEE0)
#define PJAKIMGPCAA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81FF30)
#define PJAKIMGPCAA___INIT_OFFSET UNITYSDK_OFFSET(0x81FEC0)

inline static constexpr unsigned int PJAKIMGPCAA_TypeDefinitionIndex = 10306;

struct alignas(8) PJAKIMGPCAA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAKIMGPCAA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PJAKIMGPCAA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FEOILFLBDGA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FEOILFLBDGA&, ::System::Int32&))((::PBYTE)hIl2Cpp + PJAKIMGPCAA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::PJAKIMGPCAA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PJAKIMGPCAA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PJAKIMGPCAA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAKIMGPCAA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::PJAKIMGPCAA LCJJCPBFDCE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PJAKIMGPCAA EIFONLCJOPG)
	{
		return ((::PJAKIMGPCAA(*)(::FlatBuffers::ByteBuffer*, ::PJAKIMGPCAA))((::PBYTE)hIl2Cpp + PJAKIMGPCAA_LCJJCPBFDCE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAKIMGPCAA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PJAKIMGPCAA LCJJCPBFDCE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PJAKIMGPCAA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PJAKIMGPCAA_LCJJCPBFDCE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FEOILFLBDGA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FEOILFLBDGA&))((::PBYTE)hIl2Cpp + PJAKIMGPCAA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
