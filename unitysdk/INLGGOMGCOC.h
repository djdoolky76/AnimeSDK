#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JNHOFFJIPKA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define INLGGOMGCOC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define INLGGOMGCOC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x814C00)
#define INLGGOMGCOC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define INLGGOMGCOC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define INLGGOMGCOC_HIEJIHKNMBL_1_OFFSET UNITYSDK_OFFSET(0x1B88F950)
#define INLGGOMGCOC_HIEJIHKNMBL_OFFSET UNITYSDK_OFFSET(0x1B88F8F0)
#define INLGGOMGCOC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x814C50)
#define INLGGOMGCOC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x814C40)
#define INLGGOMGCOC___INIT_OFFSET UNITYSDK_OFFSET(0x814BE0)

inline static constexpr unsigned int INLGGOMGCOC_TypeDefinitionIndex = 15970;

struct alignas(8) INLGGOMGCOC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + INLGGOMGCOC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + INLGGOMGCOC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::INLGGOMGCOC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::INLGGOMGCOC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + INLGGOMGCOC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::INLGGOMGCOC HIEJIHKNMBL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::INLGGOMGCOC EIFONLCJOPG)
	{
		return ((::INLGGOMGCOC(*)(::FlatBuffers::ByteBuffer*, ::INLGGOMGCOC))((::PBYTE)hIl2Cpp + INLGGOMGCOC_HIEJIHKNMBL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::INLGGOMGCOC HIEJIHKNMBL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::INLGGOMGCOC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + INLGGOMGCOC_HIEJIHKNMBL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INLGGOMGCOC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JNHOFFJIPKA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JNHOFFJIPKA&, ::System::Int32&))((::PBYTE)hIl2Cpp + INLGGOMGCOC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JNHOFFJIPKA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JNHOFFJIPKA&))((::PBYTE)hIl2Cpp + INLGGOMGCOC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INLGGOMGCOC_GHKKNCCLPAN_OFFSET))(this);
	}
};
