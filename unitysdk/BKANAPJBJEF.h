#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CAFDLHGBPME.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BKANAPJBJEF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BKANAPJBJEF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F18F0)
#define BKANAPJBJEF_ELEMBIMEKPM_1_OFFSET UNITYSDK_OFFSET(0x19F1BB50)
#define BKANAPJBJEF_ELEMBIMEKPM_OFFSET UNITYSDK_OFFSET(0x19F1BAF0)
#define BKANAPJBJEF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BKANAPJBJEF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BKANAPJBJEF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F1940)
#define BKANAPJBJEF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F1930)
#define BKANAPJBJEF___INIT_OFFSET UNITYSDK_OFFSET(0x7F18D0)

inline static constexpr unsigned int BKANAPJBJEF_TypeDefinitionIndex = 16346;

struct alignas(8) BKANAPJBJEF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKANAPJBJEF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BKANAPJBJEF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKANAPJBJEF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::BKANAPJBJEF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BKANAPJBJEF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BKANAPJBJEF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKANAPJBJEF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CAFDLHGBPME& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CAFDLHGBPME&))((::PBYTE)hIl2Cpp + BKANAPJBJEF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::BKANAPJBJEF ELEMBIMEKPM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BKANAPJBJEF EIFONLCJOPG)
	{
		return ((::BKANAPJBJEF(*)(::FlatBuffers::ByteBuffer*, ::BKANAPJBJEF))((::PBYTE)hIl2Cpp + BKANAPJBJEF_ELEMBIMEKPM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::BKANAPJBJEF ELEMBIMEKPM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BKANAPJBJEF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BKANAPJBJEF_ELEMBIMEKPM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CAFDLHGBPME& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CAFDLHGBPME&, ::System::Int32&))((::PBYTE)hIl2Cpp + BKANAPJBJEF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
