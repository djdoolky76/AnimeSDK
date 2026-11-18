#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MINHKOEANBP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EBLEOKEOMPE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EBLEOKEOMPE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B2790)
#define EBLEOKEOMPE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EBLEOKEOMPE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EBLEOKEOMPE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B27D0)
#define EBLEOKEOMPE_PFBCLACAJDI_1_OFFSET UNITYSDK_OFFSET(0x17AA1C20)
#define EBLEOKEOMPE_PFBCLACAJDI_OFFSET UNITYSDK_OFFSET(0x17AA1BB0)
#define EBLEOKEOMPE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B27E0)
#define EBLEOKEOMPE___INIT_OFFSET UNITYSDK_OFFSET(0x7B2770)

inline static constexpr unsigned int EBLEOKEOMPE_TypeDefinitionIndex = 13802;

struct alignas(8) EBLEOKEOMPE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLEOKEOMPE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBLEOKEOMPE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MINHKOEANBP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MINHKOEANBP&))((::PBYTE)hIl2Cpp + EBLEOKEOMPE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLEOKEOMPE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::EBLEOKEOMPE PFBCLACAJDI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EBLEOKEOMPE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBLEOKEOMPE_PFBCLACAJDI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::EBLEOKEOMPE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EBLEOKEOMPE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBLEOKEOMPE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::EBLEOKEOMPE PFBCLACAJDI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EBLEOKEOMPE EIFONLCJOPG)
	{
		return ((::EBLEOKEOMPE(*)(::FlatBuffers::ByteBuffer*, ::EBLEOKEOMPE))((::PBYTE)hIl2Cpp + EBLEOKEOMPE_PFBCLACAJDI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MINHKOEANBP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MINHKOEANBP&, ::System::Int32&))((::PBYTE)hIl2Cpp + EBLEOKEOMPE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLEOKEOMPE_PPOMNIFACOL_OFFSET))(this);
	}
};
