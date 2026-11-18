#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EBCEOHNJECL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BDPIBNHGPPH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BDPIBNHGPPH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7AC820)
#define BDPIBNHGPPH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BDPIBNHGPPH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BDPIBNHGPPH_JMLAEINABEI_1_OFFSET UNITYSDK_OFFSET(0x177585E0)
#define BDPIBNHGPPH_JMLAEINABEI_OFFSET UNITYSDK_OFFSET(0x177582E0)
#define BDPIBNHGPPH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7AC810)
#define BDPIBNHGPPH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7AC800)
#define BDPIBNHGPPH___INIT_OFFSET UNITYSDK_OFFSET(0x7AC7E0)

inline static constexpr unsigned int BDPIBNHGPPH_TypeDefinitionIndex = 10007;

struct alignas(8) BDPIBNHGPPH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPIBNHGPPH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDPIBNHGPPH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BDPIBNHGPPH JMLAEINABEI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BDPIBNHGPPH EIFONLCJOPG)
	{
		return ((::BDPIBNHGPPH(*)(::FlatBuffers::ByteBuffer*, ::BDPIBNHGPPH))((::PBYTE)hIl2Cpp + BDPIBNHGPPH_JMLAEINABEI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPIBNHGPPH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EBCEOHNJECL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EBCEOHNJECL&, ::System::Int32&))((::PBYTE)hIl2Cpp + BDPIBNHGPPH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::BDPIBNHGPPH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BDPIBNHGPPH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDPIBNHGPPH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EBCEOHNJECL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EBCEOHNJECL&))((::PBYTE)hIl2Cpp + BDPIBNHGPPH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPIBNHGPPH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::BDPIBNHGPPH JMLAEINABEI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BDPIBNHGPPH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDPIBNHGPPH_JMLAEINABEI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
