#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KGHMFCDIADG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AGDMPAILFBM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AGDMPAILFBM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B13C0)
#define AGDMPAILFBM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AGDMPAILFBM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AGDMPAILFBM_JCGHMDHIMMN_1_OFFSET UNITYSDK_OFFSET(0x17A6D9D0)
#define AGDMPAILFBM_JCGHMDHIMMN_OFFSET UNITYSDK_OFFSET(0x17A6D960)
#define AGDMPAILFBM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B13B0)
#define AGDMPAILFBM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B1400)
#define AGDMPAILFBM___INIT_OFFSET UNITYSDK_OFFSET(0x7B1390)

inline static constexpr unsigned int AGDMPAILFBM_TypeDefinitionIndex = 15467;

struct alignas(8) AGDMPAILFBM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDMPAILFBM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGDMPAILFBM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDMPAILFBM_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KGHMFCDIADG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KGHMFCDIADG&, ::System::Int32&))((::PBYTE)hIl2Cpp + AGDMPAILFBM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::AGDMPAILFBM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AGDMPAILFBM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGDMPAILFBM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AGDMPAILFBM JCGHMDHIMMN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AGDMPAILFBM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGDMPAILFBM_JCGHMDHIMMN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KGHMFCDIADG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KGHMFCDIADG&))((::PBYTE)hIl2Cpp + AGDMPAILFBM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::AGDMPAILFBM JCGHMDHIMMN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AGDMPAILFBM EIFONLCJOPG)
	{
		return ((::AGDMPAILFBM(*)(::FlatBuffers::ByteBuffer*, ::AGDMPAILFBM))((::PBYTE)hIl2Cpp + AGDMPAILFBM_JCGHMDHIMMN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDMPAILFBM_PPOMNIFACOL_OFFSET))(this);
	}
};
