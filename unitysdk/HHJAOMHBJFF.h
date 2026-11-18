#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GFGCJJJMENN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HHJAOMHBJFF_BEBIMBGHGJC_1_OFFSET UNITYSDK_OFFSET(0x152DB800)
#define HHJAOMHBJFF_BEBIMBGHGJC_OFFSET UNITYSDK_OFFSET(0x152DB790)
#define HHJAOMHBJFF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HHJAOMHBJFF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x756F50)
#define HHJAOMHBJFF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HHJAOMHBJFF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HHJAOMHBJFF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x756FA0)
#define HHJAOMHBJFF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x756F90)
#define HHJAOMHBJFF___INIT_OFFSET UNITYSDK_OFFSET(0x756F30)

inline static constexpr unsigned int HHJAOMHBJFF_TypeDefinitionIndex = 14083;

struct alignas(8) HHJAOMHBJFF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJAOMHBJFF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHJAOMHBJFF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HHJAOMHBJFF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HHJAOMHBJFF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHJAOMHBJFF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HHJAOMHBJFF BEBIMBGHGJC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HHJAOMHBJFF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHJAOMHBJFF_BEBIMBGHGJC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::HHJAOMHBJFF BEBIMBGHGJC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HHJAOMHBJFF EIFONLCJOPG)
	{
		return ((::HHJAOMHBJFF(*)(::FlatBuffers::ByteBuffer*, ::HHJAOMHBJFF))((::PBYTE)hIl2Cpp + HHJAOMHBJFF_BEBIMBGHGJC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GFGCJJJMENN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GFGCJJJMENN&))((::PBYTE)hIl2Cpp + HHJAOMHBJFF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJAOMHBJFF_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJAOMHBJFF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GFGCJJJMENN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GFGCJJJMENN&, ::System::Int32&))((::PBYTE)hIl2Cpp + HHJAOMHBJFF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
