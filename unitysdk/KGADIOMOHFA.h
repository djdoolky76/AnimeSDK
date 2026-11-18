#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CJFPIJMDDEN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KGADIOMOHFA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KGADIOMOHFA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x77B1C0)
#define KGADIOMOHFA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KGADIOMOHFA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KGADIOMOHFA_LELPHCKLMIF_1_OFFSET UNITYSDK_OFFSET(0x161228B0)
#define KGADIOMOHFA_LELPHCKLMIF_OFFSET UNITYSDK_OFFSET(0x16122840)
#define KGADIOMOHFA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x77B1B0)
#define KGADIOMOHFA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x77B200)
#define KGADIOMOHFA___INIT_OFFSET UNITYSDK_OFFSET(0x77B190)

inline static constexpr unsigned int KGADIOMOHFA_TypeDefinitionIndex = 17106;

struct alignas(8) KGADIOMOHFA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGADIOMOHFA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KGADIOMOHFA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CJFPIJMDDEN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CJFPIJMDDEN&))((::PBYTE)hIl2Cpp + KGADIOMOHFA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CJFPIJMDDEN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CJFPIJMDDEN&, ::System::Int32&))((::PBYTE)hIl2Cpp + KGADIOMOHFA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::KGADIOMOHFA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KGADIOMOHFA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KGADIOMOHFA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGADIOMOHFA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::KGADIOMOHFA LELPHCKLMIF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KGADIOMOHFA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KGADIOMOHFA_LELPHCKLMIF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGADIOMOHFA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::KGADIOMOHFA LELPHCKLMIF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KGADIOMOHFA EIFONLCJOPG)
	{
		return ((::KGADIOMOHFA(*)(::FlatBuffers::ByteBuffer*, ::KGADIOMOHFA))((::PBYTE)hIl2Cpp + KGADIOMOHFA_LELPHCKLMIF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
