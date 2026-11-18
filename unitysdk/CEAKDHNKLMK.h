#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CODAFJFDIKI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CEAKDHNKLMK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CEAKDHNKLMK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x807310)
#define CEAKDHNKLMK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CEAKDHNKLMK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CEAKDHNKLMK_JECKIMLJCKB_1_OFFSET UNITYSDK_OFFSET(0x1ADB90B0)
#define CEAKDHNKLMK_JECKIMLJCKB_OFFSET UNITYSDK_OFFSET(0x1ADB9050)
#define CEAKDHNKLMK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x807350)
#define CEAKDHNKLMK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x807300)
#define CEAKDHNKLMK___INIT_OFFSET UNITYSDK_OFFSET(0x8072E0)

inline static constexpr unsigned int CEAKDHNKLMK_TypeDefinitionIndex = 15191;

struct alignas(8) CEAKDHNKLMK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAKDHNKLMK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CEAKDHNKLMK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAKDHNKLMK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CODAFJFDIKI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CODAFJFDIKI&))((::PBYTE)hIl2Cpp + CEAKDHNKLMK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAKDHNKLMK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::CEAKDHNKLMK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CEAKDHNKLMK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CEAKDHNKLMK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CEAKDHNKLMK JECKIMLJCKB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CEAKDHNKLMK EIFONLCJOPG)
	{
		return ((::CEAKDHNKLMK(*)(::FlatBuffers::ByteBuffer*, ::CEAKDHNKLMK))((::PBYTE)hIl2Cpp + CEAKDHNKLMK_JECKIMLJCKB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::CEAKDHNKLMK JECKIMLJCKB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CEAKDHNKLMK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CEAKDHNKLMK_JECKIMLJCKB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CODAFJFDIKI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CODAFJFDIKI&, ::System::Int32&))((::PBYTE)hIl2Cpp + CEAKDHNKLMK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
