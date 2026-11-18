#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HMMMJKIEGPF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IPACNBNKJBE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IPACNBNKJBE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7BEFB0)
#define IPACNBNKJBE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IPACNBNKJBE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IPACNBNKJBE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7BEFF0)
#define IPACNBNKJBE_PKOPICMJHOB_1_OFFSET UNITYSDK_OFFSET(0x17C20B90)
#define IPACNBNKJBE_PKOPICMJHOB_OFFSET UNITYSDK_OFFSET(0x17C208D0)
#define IPACNBNKJBE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7BF000)
#define IPACNBNKJBE___INIT_OFFSET UNITYSDK_OFFSET(0x7BEF90)

inline static constexpr unsigned int IPACNBNKJBE_TypeDefinitionIndex = 13007;

struct alignas(8) IPACNBNKJBE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPACNBNKJBE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IPACNBNKJBE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::IPACNBNKJBE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IPACNBNKJBE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IPACNBNKJBE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IPACNBNKJBE PKOPICMJHOB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IPACNBNKJBE EIFONLCJOPG)
	{
		return ((::IPACNBNKJBE(*)(::FlatBuffers::ByteBuffer*, ::IPACNBNKJBE))((::PBYTE)hIl2Cpp + IPACNBNKJBE_PKOPICMJHOB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HMMMJKIEGPF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HMMMJKIEGPF&, ::System::Int32&))((::PBYTE)hIl2Cpp + IPACNBNKJBE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HMMMJKIEGPF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HMMMJKIEGPF&))((::PBYTE)hIl2Cpp + IPACNBNKJBE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPACNBNKJBE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPACNBNKJBE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::IPACNBNKJBE PKOPICMJHOB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IPACNBNKJBE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IPACNBNKJBE_PKOPICMJHOB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
