#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IMEAOFJKJJM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FMFMNMLKJEF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FMFMNMLKJEF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80D390)
#define FMFMNMLKJEF_DLJFPPMGLMG_1_OFFSET UNITYSDK_OFFSET(0x1B4C86F0)
#define FMFMNMLKJEF_DLJFPPMGLMG_OFFSET UNITYSDK_OFFSET(0x1B4C8650)
#define FMFMNMLKJEF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FMFMNMLKJEF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FMFMNMLKJEF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80D380)
#define FMFMNMLKJEF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80D3D0)
#define FMFMNMLKJEF___INIT_OFFSET UNITYSDK_OFFSET(0x80D360)

inline static constexpr unsigned int FMFMNMLKJEF_TypeDefinitionIndex = 15051;

struct alignas(8) FMFMNMLKJEF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMFMNMLKJEF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMFMNMLKJEF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMFMNMLKJEF_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IMEAOFJKJJM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IMEAOFJKJJM&, ::System::Int32&))((::PBYTE)hIl2Cpp + FMFMNMLKJEF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::FMFMNMLKJEF DLJFPPMGLMG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FMFMNMLKJEF EIFONLCJOPG)
	{
		return ((::FMFMNMLKJEF(*)(::FlatBuffers::ByteBuffer*, ::FMFMNMLKJEF))((::PBYTE)hIl2Cpp + FMFMNMLKJEF_DLJFPPMGLMG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::FMFMNMLKJEF DLJFPPMGLMG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FMFMNMLKJEF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMFMNMLKJEF_DLJFPPMGLMG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::FMFMNMLKJEF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FMFMNMLKJEF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMFMNMLKJEF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IMEAOFJKJJM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IMEAOFJKJJM&))((::PBYTE)hIl2Cpp + FMFMNMLKJEF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMFMNMLKJEF_PPOMNIFACOL_OFFSET))(this);
	}
};
