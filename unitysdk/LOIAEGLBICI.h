#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DFJHNDBDHGN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LOIAEGLBICI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LOIAEGLBICI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E5650)
#define LOIAEGLBICI_CAGOBDODFCK_1_OFFSET UNITYSDK_OFFSET(0x19572CD0)
#define LOIAEGLBICI_CAGOBDODFCK_OFFSET UNITYSDK_OFFSET(0x19572C10)
#define LOIAEGLBICI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LOIAEGLBICI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LOIAEGLBICI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E5690)
#define LOIAEGLBICI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E56A0)
#define LOIAEGLBICI___INIT_OFFSET UNITYSDK_OFFSET(0x7E5630)

inline static constexpr unsigned int LOIAEGLBICI_TypeDefinitionIndex = 12212;

struct alignas(8) LOIAEGLBICI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIAEGLBICI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LOIAEGLBICI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::LOIAEGLBICI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LOIAEGLBICI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LOIAEGLBICI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DFJHNDBDHGN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DFJHNDBDHGN&, ::System::Int32&))((::PBYTE)hIl2Cpp + LOIAEGLBICI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::LOIAEGLBICI CAGOBDODFCK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LOIAEGLBICI EIFONLCJOPG)
	{
		return ((::LOIAEGLBICI(*)(::FlatBuffers::ByteBuffer*, ::LOIAEGLBICI))((::PBYTE)hIl2Cpp + LOIAEGLBICI_CAGOBDODFCK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DFJHNDBDHGN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DFJHNDBDHGN&))((::PBYTE)hIl2Cpp + LOIAEGLBICI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIAEGLBICI_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIAEGLBICI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LOIAEGLBICI CAGOBDODFCK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LOIAEGLBICI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LOIAEGLBICI_CAGOBDODFCK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
