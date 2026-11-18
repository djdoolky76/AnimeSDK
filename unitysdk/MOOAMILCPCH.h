#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MIHOCMHDHPB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOOAMILCPCH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MOOAMILCPCH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DA040)
#define MOOAMILCPCH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MOOAMILCPCH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MOOAMILCPCH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DA080)
#define MOOAMILCPCH_PAOPBIGGGCJ_1_OFFSET UNITYSDK_OFFSET(0x191100F0)
#define MOOAMILCPCH_PAOPBIGGGCJ_OFFSET UNITYSDK_OFFSET(0x1910FF30)
#define MOOAMILCPCH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DA090)
#define MOOAMILCPCH___INIT_OFFSET UNITYSDK_OFFSET(0x7DA020)

inline static constexpr unsigned int MOOAMILCPCH_TypeDefinitionIndex = 11669;

struct alignas(8) MOOAMILCPCH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOAMILCPCH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MOOAMILCPCH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MIHOCMHDHPB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MIHOCMHDHPB&))((::PBYTE)hIl2Cpp + MOOAMILCPCH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::MOOAMILCPCH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MOOAMILCPCH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MOOAMILCPCH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOAMILCPCH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MOOAMILCPCH PAOPBIGGGCJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MOOAMILCPCH EIFONLCJOPG)
	{
		return ((::MOOAMILCPCH(*)(::FlatBuffers::ByteBuffer*, ::MOOAMILCPCH))((::PBYTE)hIl2Cpp + MOOAMILCPCH_PAOPBIGGGCJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MIHOCMHDHPB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MIHOCMHDHPB&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOOAMILCPCH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOAMILCPCH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MOOAMILCPCH PAOPBIGGGCJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MOOAMILCPCH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MOOAMILCPCH_PAOPBIGGGCJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
