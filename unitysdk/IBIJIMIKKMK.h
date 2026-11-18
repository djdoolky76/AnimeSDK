#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BBBAKHNFPLH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IBIJIMIKKMK_AOEOPHDNBJM_1_OFFSET UNITYSDK_OFFSET(0x1B61E800)
#define IBIJIMIKKMK_AOEOPHDNBJM_OFFSET UNITYSDK_OFFSET(0x1B61E700)
#define IBIJIMIKKMK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IBIJIMIKKMK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80F630)
#define IBIJIMIKKMK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IBIJIMIKKMK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IBIJIMIKKMK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80F670)
#define IBIJIMIKKMK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80F620)
#define IBIJIMIKKMK___INIT_OFFSET UNITYSDK_OFFSET(0x80F600)

inline static constexpr unsigned int IBIJIMIKKMK_TypeDefinitionIndex = 9977;

struct alignas(8) IBIJIMIKKMK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIJIMIKKMK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBIJIMIKKMK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IBIJIMIKKMK AOEOPHDNBJM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IBIJIMIKKMK EIFONLCJOPG)
	{
		return ((::IBIJIMIKKMK(*)(::FlatBuffers::ByteBuffer*, ::IBIJIMIKKMK))((::PBYTE)hIl2Cpp + IBIJIMIKKMK_AOEOPHDNBJM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIJIMIKKMK_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIJIMIKKMK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::IBIJIMIKKMK AOEOPHDNBJM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IBIJIMIKKMK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBIJIMIKKMK_AOEOPHDNBJM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BBBAKHNFPLH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BBBAKHNFPLH&))((::PBYTE)hIl2Cpp + IBIJIMIKKMK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::IBIJIMIKKMK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IBIJIMIKKMK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBIJIMIKKMK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BBBAKHNFPLH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BBBAKHNFPLH&, ::System::Int32&))((::PBYTE)hIl2Cpp + IBIJIMIKKMK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
