#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DJJEBNDANNG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LGBEGPPBDNG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LGBEGPPBDNG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x763F50)
#define LGBEGPPBDNG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LGBEGPPBDNG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LGBEGPPBDNG_IONIMPBCLBC_1_OFFSET UNITYSDK_OFFSET(0x195657C0)
#define LGBEGPPBDNG_IONIMPBCLBC_OFFSET UNITYSDK_OFFSET(0x19565470)
#define LGBEGPPBDNG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E5300)
#define LGBEGPPBDNG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LGBEGPPBDNG_TypeDefinitionIndex = 14750;

struct alignas(8) LGBEGPPBDNG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBEGPPBDNG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGBEGPPBDNG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LGBEGPPBDNG IONIMPBCLBC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LGBEGPPBDNG EIFONLCJOPG)
	{
		return ((::LGBEGPPBDNG(*)(::FlatBuffers::ByteBuffer*, ::LGBEGPPBDNG))((::PBYTE)hIl2Cpp + LGBEGPPBDNG_IONIMPBCLBC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::LGBEGPPBDNG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LGBEGPPBDNG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGBEGPPBDNG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::String* MCOHLHMKLIP, ::DJJEBNDANNG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::DJJEBNDANNG&, ::System::Int32&))((::PBYTE)hIl2Cpp + LGBEGPPBDNG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DJJEBNDANNG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DJJEBNDANNG&))((::PBYTE)hIl2Cpp + LGBEGPPBDNG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBEGPPBDNG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::LGBEGPPBDNG IONIMPBCLBC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LGBEGPPBDNG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGBEGPPBDNG_IONIMPBCLBC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
