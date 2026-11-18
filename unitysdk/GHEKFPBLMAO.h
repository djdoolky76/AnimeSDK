#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NJPMFCGOGKA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GHEKFPBLMAO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GHEKFPBLMAO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EB4E0)
#define GHEKFPBLMAO_DLGDMPGFIJF_1_OFFSET UNITYSDK_OFFSET(0x19AFAD60)
#define GHEKFPBLMAO_DLGDMPGFIJF_OFFSET UNITYSDK_OFFSET(0x19AFACF0)
#define GHEKFPBLMAO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GHEKFPBLMAO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GHEKFPBLMAO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EB4C0)
#define GHEKFPBLMAO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EB4D0)
#define GHEKFPBLMAO___INIT_OFFSET UNITYSDK_OFFSET(0x7EB4A0)

inline static constexpr unsigned int GHEKFPBLMAO_TypeDefinitionIndex = 15898;

struct alignas(8) GHEKFPBLMAO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEKFPBLMAO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHEKFPBLMAO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEKFPBLMAO_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NJPMFCGOGKA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NJPMFCGOGKA&, ::System::Int32&))((::PBYTE)hIl2Cpp + GHEKFPBLMAO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NJPMFCGOGKA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NJPMFCGOGKA&))((::PBYTE)hIl2Cpp + GHEKFPBLMAO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GHEKFPBLMAO DLGDMPGFIJF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GHEKFPBLMAO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHEKFPBLMAO_DLGDMPGFIJF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEKFPBLMAO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::GHEKFPBLMAO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GHEKFPBLMAO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHEKFPBLMAO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GHEKFPBLMAO DLGDMPGFIJF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GHEKFPBLMAO EIFONLCJOPG)
	{
		return ((::GHEKFPBLMAO(*)(::FlatBuffers::ByteBuffer*, ::GHEKFPBLMAO))((::PBYTE)hIl2Cpp + GHEKFPBLMAO_DLGDMPGFIJF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
