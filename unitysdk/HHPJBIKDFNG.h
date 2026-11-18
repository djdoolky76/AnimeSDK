#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CPCFDGJFLBF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HHPJBIKDFNG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HHPJBIKDFNG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81B8E0)
#define HHPJBIKDFNG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HHPJBIKDFNG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HHPJBIKDFNG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81B930)
#define HHPJBIKDFNG_NKIKHGBIBHK_1_OFFSET UNITYSDK_OFFSET(0x1BADA020)
#define HHPJBIKDFNG_NKIKHGBIBHK_OFFSET UNITYSDK_OFFSET(0x1BAD9FB0)
#define HHPJBIKDFNG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81B920)
#define HHPJBIKDFNG___INIT_OFFSET UNITYSDK_OFFSET(0x81B8C0)

inline static constexpr unsigned int HHPJBIKDFNG_TypeDefinitionIndex = 10008;

struct alignas(8) HHPJBIKDFNG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHPJBIKDFNG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHPJBIKDFNG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HHPJBIKDFNG NKIKHGBIBHK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HHPJBIKDFNG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHPJBIKDFNG_NKIKHGBIBHK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::HHPJBIKDFNG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HHPJBIKDFNG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHPJBIKDFNG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HHPJBIKDFNG NKIKHGBIBHK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HHPJBIKDFNG EIFONLCJOPG)
	{
		return ((::HHPJBIKDFNG(*)(::FlatBuffers::ByteBuffer*, ::HHPJBIKDFNG))((::PBYTE)hIl2Cpp + HHPJBIKDFNG_NKIKHGBIBHK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHPJBIKDFNG_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHPJBIKDFNG_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CPCFDGJFLBF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CPCFDGJFLBF&))((::PBYTE)hIl2Cpp + HHPJBIKDFNG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CPCFDGJFLBF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CPCFDGJFLBF&, ::System::Int32&))((::PBYTE)hIl2Cpp + HHPJBIKDFNG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
