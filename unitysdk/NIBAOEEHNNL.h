#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AAKEHKEHIPN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NIBAOEEHNNL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NIBAOEEHNNL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8205B0)
#define NIBAOEEHNNL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NIBAOEEHNNL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NIBAOEEHNNL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8205F0)
#define NIBAOEEHNNL_OPPPNOHBIFH_1_OFFSET UNITYSDK_OFFSET(0x1C18E3C0)
#define NIBAOEEHNNL_OPPPNOHBIFH_OFFSET UNITYSDK_OFFSET(0x1C18E350)
#define NIBAOEEHNNL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8205A0)
#define NIBAOEEHNNL___INIT_OFFSET UNITYSDK_OFFSET(0x820580)

inline static constexpr unsigned int NIBAOEEHNNL_TypeDefinitionIndex = 15896;

struct alignas(8) NIBAOEEHNNL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBAOEEHNNL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NIBAOEEHNNL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBAOEEHNNL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::NIBAOEEHNNL OPPPNOHBIFH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NIBAOEEHNNL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NIBAOEEHNNL_OPPPNOHBIFH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::NIBAOEEHNNL OPPPNOHBIFH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NIBAOEEHNNL EIFONLCJOPG)
	{
		return ((::NIBAOEEHNNL(*)(::FlatBuffers::ByteBuffer*, ::NIBAOEEHNNL))((::PBYTE)hIl2Cpp + NIBAOEEHNNL_OPPPNOHBIFH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBAOEEHNNL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::NIBAOEEHNNL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NIBAOEEHNNL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NIBAOEEHNNL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AAKEHKEHIPN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AAKEHKEHIPN&))((::PBYTE)hIl2Cpp + NIBAOEEHNNL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AAKEHKEHIPN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AAKEHKEHIPN&, ::System::Int32&))((::PBYTE)hIl2Cpp + NIBAOEEHNNL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
