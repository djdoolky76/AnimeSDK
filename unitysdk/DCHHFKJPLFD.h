#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KKNMDOHBDDJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DCHHFKJPLFD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DCHHFKJPLFD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7AD6E0)
#define DCHHFKJPLFD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DCHHFKJPLFD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DCHHFKJPLFD_HAGDNAPCFPI_1_OFFSET UNITYSDK_OFFSET(0x1777A780)
#define DCHHFKJPLFD_HAGDNAPCFPI_OFFSET UNITYSDK_OFFSET(0x1777A710)
#define DCHHFKJPLFD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7AD720)
#define DCHHFKJPLFD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7AD6D0)
#define DCHHFKJPLFD___INIT_OFFSET UNITYSDK_OFFSET(0x7AD6B0)

inline static constexpr unsigned int DCHHFKJPLFD_TypeDefinitionIndex = 13131;

struct alignas(8) DCHHFKJPLFD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCHHFKJPLFD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DCHHFKJPLFD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCHHFKJPLFD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCHHFKJPLFD_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::DCHHFKJPLFD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DCHHFKJPLFD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DCHHFKJPLFD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DCHHFKJPLFD HAGDNAPCFPI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DCHHFKJPLFD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DCHHFKJPLFD_HAGDNAPCFPI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KKNMDOHBDDJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KKNMDOHBDDJ&))((::PBYTE)hIl2Cpp + DCHHFKJPLFD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::DCHHFKJPLFD HAGDNAPCFPI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DCHHFKJPLFD EIFONLCJOPG)
	{
		return ((::DCHHFKJPLFD(*)(::FlatBuffers::ByteBuffer*, ::DCHHFKJPLFD))((::PBYTE)hIl2Cpp + DCHHFKJPLFD_HAGDNAPCFPI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KKNMDOHBDDJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KKNMDOHBDDJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + DCHHFKJPLFD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
