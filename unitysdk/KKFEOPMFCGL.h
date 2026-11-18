#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FABENOKEDPC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KKFEOPMFCGL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KKFEOPMFCGL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DFC70)
#define KKFEOPMFCGL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KKFEOPMFCGL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KKFEOPMFCGL_LKBGLFLELJO_1_OFFSET UNITYSDK_OFFSET(0x1936C670)
#define KKFEOPMFCGL_LKBGLFLELJO_OFFSET UNITYSDK_OFFSET(0x1936C600)
#define KKFEOPMFCGL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DFC50)
#define KKFEOPMFCGL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DFC60)
#define KKFEOPMFCGL___INIT_OFFSET UNITYSDK_OFFSET(0x7DFC30)

inline static constexpr unsigned int KKFEOPMFCGL_TypeDefinitionIndex = 17137;

struct alignas(8) KKFEOPMFCGL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKFEOPMFCGL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KKFEOPMFCGL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FABENOKEDPC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FABENOKEDPC&, ::System::Int32&))((::PBYTE)hIl2Cpp + KKFEOPMFCGL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FABENOKEDPC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FABENOKEDPC&))((::PBYTE)hIl2Cpp + KKFEOPMFCGL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::KKFEOPMFCGL LKBGLFLELJO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KKFEOPMFCGL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KKFEOPMFCGL_LKBGLFLELJO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKFEOPMFCGL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::KKFEOPMFCGL LKBGLFLELJO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KKFEOPMFCGL EIFONLCJOPG)
	{
		return ((::KKFEOPMFCGL(*)(::FlatBuffers::ByteBuffer*, ::KKFEOPMFCGL))((::PBYTE)hIl2Cpp + KKFEOPMFCGL_LKBGLFLELJO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKFEOPMFCGL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::KKFEOPMFCGL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KKFEOPMFCGL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KKFEOPMFCGL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
