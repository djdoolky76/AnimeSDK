#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HAEMLNHOBEG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define INOGFBHDCIO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define INOGFBHDCIO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76F510)
#define INOGFBHDCIO_DOKGLAEOJJM_1_OFFSET UNITYSDK_OFFSET(0x15A9BDE0)
#define INOGFBHDCIO_DOKGLAEOJJM_OFFSET UNITYSDK_OFFSET(0x15A9BC20)
#define INOGFBHDCIO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define INOGFBHDCIO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define INOGFBHDCIO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x76F560)
#define INOGFBHDCIO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76F550)
#define INOGFBHDCIO___INIT_OFFSET UNITYSDK_OFFSET(0x76F4F0)

inline static constexpr unsigned int INOGFBHDCIO_TypeDefinitionIndex = 13575;

struct alignas(8) INOGFBHDCIO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + INOGFBHDCIO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + INOGFBHDCIO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HAEMLNHOBEG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HAEMLNHOBEG&))((::PBYTE)hIl2Cpp + INOGFBHDCIO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::INOGFBHDCIO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::INOGFBHDCIO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + INOGFBHDCIO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INOGFBHDCIO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::INOGFBHDCIO DOKGLAEOJJM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::INOGFBHDCIO EIFONLCJOPG)
	{
		return ((::INOGFBHDCIO(*)(::FlatBuffers::ByteBuffer*, ::INOGFBHDCIO))((::PBYTE)hIl2Cpp + INOGFBHDCIO_DOKGLAEOJJM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INOGFBHDCIO_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HAEMLNHOBEG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HAEMLNHOBEG&, ::System::Int32&))((::PBYTE)hIl2Cpp + INOGFBHDCIO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::INOGFBHDCIO DOKGLAEOJJM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::INOGFBHDCIO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + INOGFBHDCIO_DOKGLAEOJJM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
