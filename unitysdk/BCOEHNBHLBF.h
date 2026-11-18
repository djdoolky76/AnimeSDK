#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HEBEDMJMODF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BCOEHNBHLBF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BCOEHNBHLBF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x764150)
#define BCOEHNBHLBF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BCOEHNBHLBF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BCOEHNBHLBF_JPFAHMKDNBB_1_OFFSET UNITYSDK_OFFSET(0x1577B530)
#define BCOEHNBHLBF_JPFAHMKDNBB_OFFSET UNITYSDK_OFFSET(0x1577B4C0)
#define BCOEHNBHLBF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x764190)
#define BCOEHNBHLBF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7641A0)
#define BCOEHNBHLBF___INIT_OFFSET UNITYSDK_OFFSET(0x764130)

inline static constexpr unsigned int BCOEHNBHLBF_TypeDefinitionIndex = 10154;

struct alignas(8) BCOEHNBHLBF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOEHNBHLBF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BCOEHNBHLBF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::BCOEHNBHLBF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BCOEHNBHLBF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BCOEHNBHLBF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BCOEHNBHLBF JPFAHMKDNBB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BCOEHNBHLBF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BCOEHNBHLBF_JPFAHMKDNBB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HEBEDMJMODF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HEBEDMJMODF&))((::PBYTE)hIl2Cpp + BCOEHNBHLBF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOEHNBHLBF_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HEBEDMJMODF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HEBEDMJMODF&, ::System::Int32&))((::PBYTE)hIl2Cpp + BCOEHNBHLBF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::BCOEHNBHLBF JPFAHMKDNBB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BCOEHNBHLBF EIFONLCJOPG)
	{
		return ((::BCOEHNBHLBF(*)(::FlatBuffers::ByteBuffer*, ::BCOEHNBHLBF))((::PBYTE)hIl2Cpp + BCOEHNBHLBF_JPFAHMKDNBB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOEHNBHLBF_PPOMNIFACOL_OFFSET))(this);
	}
};
