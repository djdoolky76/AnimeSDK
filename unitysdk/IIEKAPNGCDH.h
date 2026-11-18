#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EGKHPIFKFDA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IIEKAPNGCDH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IIEKAPNGCDH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DF3B0)
#define IIEKAPNGCDH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IIEKAPNGCDH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IIEKAPNGCDH_KEFMLIFPIFB_1_OFFSET UNITYSDK_OFFSET(0x1934EA70)
#define IIEKAPNGCDH_KEFMLIFPIFB_OFFSET UNITYSDK_OFFSET(0x1934E970)
#define IIEKAPNGCDH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DF3F0)
#define IIEKAPNGCDH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DF3A0)
#define IIEKAPNGCDH___INIT_OFFSET UNITYSDK_OFFSET(0x7DF380)

inline static constexpr unsigned int IIEKAPNGCDH_TypeDefinitionIndex = 11194;

struct alignas(8) IIEKAPNGCDH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEKAPNGCDH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IIEKAPNGCDH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IIEKAPNGCDH KEFMLIFPIFB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IIEKAPNGCDH EIFONLCJOPG)
	{
		return ((::IIEKAPNGCDH(*)(::FlatBuffers::ByteBuffer*, ::IIEKAPNGCDH))((::PBYTE)hIl2Cpp + IIEKAPNGCDH_KEFMLIFPIFB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEKAPNGCDH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::IIEKAPNGCDH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IIEKAPNGCDH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IIEKAPNGCDH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IIEKAPNGCDH KEFMLIFPIFB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IIEKAPNGCDH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IIEKAPNGCDH_KEFMLIFPIFB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEKAPNGCDH_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EGKHPIFKFDA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EGKHPIFKFDA&, ::System::Int32&))((::PBYTE)hIl2Cpp + IIEKAPNGCDH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EGKHPIFKFDA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EGKHPIFKFDA&))((::PBYTE)hIl2Cpp + IIEKAPNGCDH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
