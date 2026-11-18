#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GGAGBPOCKMC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HCGMIGAFDHN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HCGMIGAFDHN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FCD00)
#define HCGMIGAFDHN_FFJHGNAHGOE_1_OFFSET UNITYSDK_OFFSET(0x1A5C7210)
#define HCGMIGAFDHN_FFJHGNAHGOE_OFFSET UNITYSDK_OFFSET(0x1A5C71B0)
#define HCGMIGAFDHN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HCGMIGAFDHN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HCGMIGAFDHN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FCD50)
#define HCGMIGAFDHN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FCD40)
#define HCGMIGAFDHN___INIT_OFFSET UNITYSDK_OFFSET(0x7FCCE0)

inline static constexpr unsigned int HCGMIGAFDHN_TypeDefinitionIndex = 9315;

struct alignas(8) HCGMIGAFDHN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGMIGAFDHN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCGMIGAFDHN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GGAGBPOCKMC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GGAGBPOCKMC&))((::PBYTE)hIl2Cpp + HCGMIGAFDHN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::HCGMIGAFDHN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HCGMIGAFDHN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCGMIGAFDHN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGMIGAFDHN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HCGMIGAFDHN FFJHGNAHGOE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HCGMIGAFDHN EIFONLCJOPG)
	{
		return ((::HCGMIGAFDHN(*)(::FlatBuffers::ByteBuffer*, ::HCGMIGAFDHN))((::PBYTE)hIl2Cpp + HCGMIGAFDHN_FFJHGNAHGOE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGMIGAFDHN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HCGMIGAFDHN FFJHGNAHGOE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HCGMIGAFDHN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCGMIGAFDHN_FFJHGNAHGOE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GGAGBPOCKMC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GGAGBPOCKMC&, ::System::Int32&))((::PBYTE)hIl2Cpp + HCGMIGAFDHN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
