#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MOKEMPJGCBE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HPMKFNGEJHJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HPMKFNGEJHJ_BFBPDNMBJDJ_1_OFFSET UNITYSDK_OFFSET(0x1953BC40)
#define HPMKFNGEJHJ_BFBPDNMBJDJ_OFFSET UNITYSDK_OFFSET(0x1953BBD0)
#define HPMKFNGEJHJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E3C80)
#define HPMKFNGEJHJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HPMKFNGEJHJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HPMKFNGEJHJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E3C60)
#define HPMKFNGEJHJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E3C70)
#define HPMKFNGEJHJ___INIT_OFFSET UNITYSDK_OFFSET(0x7E3C40)

inline static constexpr unsigned int HPMKFNGEJHJ_TypeDefinitionIndex = 11264;

struct alignas(8) HPMKFNGEJHJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMKFNGEJHJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPMKFNGEJHJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HPMKFNGEJHJ BFBPDNMBJDJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HPMKFNGEJHJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPMKFNGEJHJ_BFBPDNMBJDJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MOKEMPJGCBE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MOKEMPJGCBE&, ::System::Int32&))((::PBYTE)hIl2Cpp + HPMKFNGEJHJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::HPMKFNGEJHJ BFBPDNMBJDJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HPMKFNGEJHJ EIFONLCJOPG)
	{
		return ((::HPMKFNGEJHJ(*)(::FlatBuffers::ByteBuffer*, ::HPMKFNGEJHJ))((::PBYTE)hIl2Cpp + HPMKFNGEJHJ_BFBPDNMBJDJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MOKEMPJGCBE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MOKEMPJGCBE&))((::PBYTE)hIl2Cpp + HPMKFNGEJHJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMKFNGEJHJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMKFNGEJHJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::HPMKFNGEJHJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HPMKFNGEJHJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPMKFNGEJHJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
