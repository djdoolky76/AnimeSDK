#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KKIKACBOAGJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FCNKGAANGLG_AJHCCOEPIOJ_1_OFFSET UNITYSDK_OFFSET(0x16635090)
#define FCNKGAANGLG_AJHCCOEPIOJ_OFFSET UNITYSDK_OFFSET(0x16635030)
#define FCNKGAANGLG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FCNKGAANGLG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x789E30)
#define FCNKGAANGLG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FCNKGAANGLG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FCNKGAANGLG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x789E80)
#define FCNKGAANGLG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x789E70)
#define FCNKGAANGLG___INIT_OFFSET UNITYSDK_OFFSET(0x789E10)

inline static constexpr unsigned int FCNKGAANGLG_TypeDefinitionIndex = 10655;

struct alignas(8) FCNKGAANGLG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNKGAANGLG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCNKGAANGLG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::FCNKGAANGLG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FCNKGAANGLG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCNKGAANGLG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNKGAANGLG_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNKGAANGLG_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KKIKACBOAGJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KKIKACBOAGJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + FCNKGAANGLG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::FCNKGAANGLG AJHCCOEPIOJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FCNKGAANGLG EIFONLCJOPG)
	{
		return ((::FCNKGAANGLG(*)(::FlatBuffers::ByteBuffer*, ::FCNKGAANGLG))((::PBYTE)hIl2Cpp + FCNKGAANGLG_AJHCCOEPIOJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::FCNKGAANGLG AJHCCOEPIOJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FCNKGAANGLG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCNKGAANGLG_AJHCCOEPIOJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KKIKACBOAGJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KKIKACBOAGJ&))((::PBYTE)hIl2Cpp + FCNKGAANGLG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
