#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KFGIGANCFDN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LODEPGHBGIP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LODEPGHBGIP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D9B70)
#define LODEPGHBGIP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LODEPGHBGIP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LODEPGHBGIP_LIOKDNPDNFH_1_OFFSET UNITYSDK_OFFSET(0x191029D0)
#define LODEPGHBGIP_LIOKDNPDNFH_OFFSET UNITYSDK_OFFSET(0x19102930)
#define LODEPGHBGIP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D9BB0)
#define LODEPGHBGIP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D9B60)
#define LODEPGHBGIP___INIT_OFFSET UNITYSDK_OFFSET(0x7D9B40)

inline static constexpr unsigned int LODEPGHBGIP_TypeDefinitionIndex = 14093;

struct alignas(8) LODEPGHBGIP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LODEPGHBGIP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LODEPGHBGIP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LODEPGHBGIP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::LODEPGHBGIP LIOKDNPDNFH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LODEPGHBGIP EIFONLCJOPG)
	{
		return ((::LODEPGHBGIP(*)(::FlatBuffers::ByteBuffer*, ::LODEPGHBGIP))((::PBYTE)hIl2Cpp + LODEPGHBGIP_LIOKDNPDNFH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LODEPGHBGIP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LODEPGHBGIP LIOKDNPDNFH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LODEPGHBGIP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LODEPGHBGIP_LIOKDNPDNFH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::LODEPGHBGIP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LODEPGHBGIP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LODEPGHBGIP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KFGIGANCFDN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KFGIGANCFDN&))((::PBYTE)hIl2Cpp + LODEPGHBGIP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KFGIGANCFDN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KFGIGANCFDN&, ::System::Int32&))((::PBYTE)hIl2Cpp + LODEPGHBGIP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
