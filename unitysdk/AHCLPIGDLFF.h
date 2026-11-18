#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HKLADNCBIPB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AHCLPIGDLFF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AHCLPIGDLFF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x806A50)
#define AHCLPIGDLFF_BMJLINOGKND_1_OFFSET UNITYSDK_OFFSET(0x1ADA72D0)
#define AHCLPIGDLFF_BMJLINOGKND_OFFSET UNITYSDK_OFFSET(0x1ADA7030)
#define AHCLPIGDLFF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AHCLPIGDLFF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AHCLPIGDLFF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x806A40)
#define AHCLPIGDLFF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x806A30)
#define AHCLPIGDLFF___INIT_OFFSET UNITYSDK_OFFSET(0x806A10)

inline static constexpr unsigned int AHCLPIGDLFF_TypeDefinitionIndex = 11140;

struct alignas(8) AHCLPIGDLFF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCLPIGDLFF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AHCLPIGDLFF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCLPIGDLFF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::AHCLPIGDLFF BMJLINOGKND(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AHCLPIGDLFF EIFONLCJOPG)
	{
		return ((::AHCLPIGDLFF(*)(::FlatBuffers::ByteBuffer*, ::AHCLPIGDLFF))((::PBYTE)hIl2Cpp + AHCLPIGDLFF_BMJLINOGKND_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HKLADNCBIPB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HKLADNCBIPB&, ::System::Int32&))((::PBYTE)hIl2Cpp + AHCLPIGDLFF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCLPIGDLFF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::AHCLPIGDLFF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AHCLPIGDLFF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AHCLPIGDLFF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HKLADNCBIPB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HKLADNCBIPB&))((::PBYTE)hIl2Cpp + AHCLPIGDLFF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::AHCLPIGDLFF BMJLINOGKND_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AHCLPIGDLFF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AHCLPIGDLFF_BMJLINOGKND_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
