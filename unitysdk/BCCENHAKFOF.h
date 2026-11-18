#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CJHPIEKNNBN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BCCENHAKFOF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BCCENHAKFOF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x825D20)
#define BCCENHAKFOF_DEEPKMHKKFI_1_OFFSET UNITYSDK_OFFSET(0x1C511060)
#define BCCENHAKFOF_DEEPKMHKKFI_OFFSET UNITYSDK_OFFSET(0x1C510FF0)
#define BCCENHAKFOF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BCCENHAKFOF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BCCENHAKFOF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x825D10)
#define BCCENHAKFOF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x825D00)
#define BCCENHAKFOF___INIT_OFFSET UNITYSDK_OFFSET(0x825CE0)

inline static constexpr unsigned int BCCENHAKFOF_TypeDefinitionIndex = 17313;

struct alignas(8) BCCENHAKFOF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCCENHAKFOF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BCCENHAKFOF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CJHPIEKNNBN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CJHPIEKNNBN&))((::PBYTE)hIl2Cpp + BCCENHAKFOF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::BCCENHAKFOF DEEPKMHKKFI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BCCENHAKFOF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BCCENHAKFOF_DEEPKMHKKFI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::BCCENHAKFOF DEEPKMHKKFI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BCCENHAKFOF EIFONLCJOPG)
	{
		return ((::BCCENHAKFOF(*)(::FlatBuffers::ByteBuffer*, ::BCCENHAKFOF))((::PBYTE)hIl2Cpp + BCCENHAKFOF_DEEPKMHKKFI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCCENHAKFOF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCCENHAKFOF_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CJHPIEKNNBN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CJHPIEKNNBN&, ::System::Int32&))((::PBYTE)hIl2Cpp + BCCENHAKFOF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::BCCENHAKFOF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BCCENHAKFOF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BCCENHAKFOF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
