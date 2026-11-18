#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GBCPFGCGLDG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IFINCOLPOJD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IFINCOLPOJD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8124E0)
#define IFINCOLPOJD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IFINCOLPOJD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IFINCOLPOJD_IJKJJOJLGIC_1_OFFSET UNITYSDK_OFFSET(0x1B7CC470)
#define IFINCOLPOJD_IJKJJOJLGIC_OFFSET UNITYSDK_OFFSET(0x1B7CC400)
#define IFINCOLPOJD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8124D0)
#define IFINCOLPOJD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8124C0)
#define IFINCOLPOJD___INIT_OFFSET UNITYSDK_OFFSET(0x8124A0)

inline static constexpr unsigned int IFINCOLPOJD_TypeDefinitionIndex = 12824;

struct alignas(8) IFINCOLPOJD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFINCOLPOJD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFINCOLPOJD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IFINCOLPOJD IJKJJOJLGIC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IFINCOLPOJD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFINCOLPOJD_IJKJJOJLGIC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFINCOLPOJD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GBCPFGCGLDG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GBCPFGCGLDG&, ::System::Int32&))((::PBYTE)hIl2Cpp + IFINCOLPOJD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GBCPFGCGLDG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GBCPFGCGLDG&))((::PBYTE)hIl2Cpp + IFINCOLPOJD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::IFINCOLPOJD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IFINCOLPOJD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFINCOLPOJD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IFINCOLPOJD IJKJJOJLGIC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IFINCOLPOJD EIFONLCJOPG)
	{
		return ((::IFINCOLPOJD(*)(::FlatBuffers::ByteBuffer*, ::IFINCOLPOJD))((::PBYTE)hIl2Cpp + IFINCOLPOJD_IJKJJOJLGIC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFINCOLPOJD_GHKKNCCLPAN_OFFSET))(this);
	}
};
