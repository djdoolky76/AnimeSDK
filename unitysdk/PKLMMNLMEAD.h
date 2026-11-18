#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PDFIIMIHDPB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PKLMMNLMEAD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PKLMMNLMEAD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x85E960)
#define PKLMMNLMEAD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PKLMMNLMEAD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PKLMMNLMEAD_KHIOBDMHJEM_1_OFFSET UNITYSDK_OFFSET(0x1CD0EEF0)
#define PKLMMNLMEAD_KHIOBDMHJEM_OFFSET UNITYSDK_OFFSET(0x1CD0EDF0)
#define PKLMMNLMEAD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x85E9A0)
#define PKLMMNLMEAD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x85E9B0)
#define PKLMMNLMEAD___INIT_OFFSET UNITYSDK_OFFSET(0x85E940)

inline static constexpr unsigned int PKLMMNLMEAD_TypeDefinitionIndex = 9483;

struct alignas(8) PKLMMNLMEAD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLMMNLMEAD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PKLMMNLMEAD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PDFIIMIHDPB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PDFIIMIHDPB&))((::PBYTE)hIl2Cpp + PKLMMNLMEAD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PKLMMNLMEAD KHIOBDMHJEM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PKLMMNLMEAD EIFONLCJOPG)
	{
		return ((::PKLMMNLMEAD(*)(::FlatBuffers::ByteBuffer*, ::PKLMMNLMEAD))((::PBYTE)hIl2Cpp + PKLMMNLMEAD_KHIOBDMHJEM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLMMNLMEAD_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::PKLMMNLMEAD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PKLMMNLMEAD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PKLMMNLMEAD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PKLMMNLMEAD KHIOBDMHJEM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PKLMMNLMEAD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PKLMMNLMEAD_KHIOBDMHJEM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PDFIIMIHDPB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PDFIIMIHDPB&, ::System::Int32&))((::PBYTE)hIl2Cpp + PKLMMNLMEAD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLMMNLMEAD_PPOMNIFACOL_OFFSET))(this);
	}
};
