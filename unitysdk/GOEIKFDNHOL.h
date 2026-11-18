#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HHKDLFDIJDA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GOEIKFDNHOL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GOEIKFDNHOL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A80D0)
#define GOEIKFDNHOL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GOEIKFDNHOL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GOEIKFDNHOL_HCMECMFIOJP_1_OFFSET UNITYSDK_OFFSET(0x1746CB50)
#define GOEIKFDNHOL_HCMECMFIOJP_OFFSET UNITYSDK_OFFSET(0x1746CAE0)
#define GOEIKFDNHOL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A8110)
#define GOEIKFDNHOL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A8120)
#define GOEIKFDNHOL___INIT_OFFSET UNITYSDK_OFFSET(0x7A80B0)

inline static constexpr unsigned int GOEIKFDNHOL_TypeDefinitionIndex = 11642;

struct alignas(8) GOEIKFDNHOL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOEIKFDNHOL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GOEIKFDNHOL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GOEIKFDNHOL HCMECMFIOJP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GOEIKFDNHOL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GOEIKFDNHOL_HCMECMFIOJP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HHKDLFDIJDA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HHKDLFDIJDA&))((::PBYTE)hIl2Cpp + GOEIKFDNHOL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GOEIKFDNHOL HCMECMFIOJP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GOEIKFDNHOL EIFONLCJOPG)
	{
		return ((::GOEIKFDNHOL(*)(::FlatBuffers::ByteBuffer*, ::GOEIKFDNHOL))((::PBYTE)hIl2Cpp + GOEIKFDNHOL_HCMECMFIOJP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOEIKFDNHOL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::GOEIKFDNHOL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GOEIKFDNHOL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GOEIKFDNHOL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HHKDLFDIJDA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HHKDLFDIJDA&, ::System::Int32&))((::PBYTE)hIl2Cpp + GOEIKFDNHOL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOEIKFDNHOL_PPOMNIFACOL_OFFSET))(this);
	}
};
