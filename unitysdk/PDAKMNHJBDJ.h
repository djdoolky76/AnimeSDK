#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OCJFPNBFEAB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PDAKMNHJBDJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PDAKMNHJBDJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8ABBC0)
#define PDAKMNHJBDJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PDAKMNHJBDJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PDAKMNHJBDJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8ABBB0)
#define PDAKMNHJBDJ_MABHINNELKC_1_OFFSET UNITYSDK_OFFSET(0x1D001A90)
#define PDAKMNHJBDJ_MABHINNELKC_OFFSET UNITYSDK_OFFSET(0x1D001A30)
#define PDAKMNHJBDJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8ABBA0)
#define PDAKMNHJBDJ___INIT_OFFSET UNITYSDK_OFFSET(0x8ABB80)

inline static constexpr unsigned int PDAKMNHJBDJ_TypeDefinitionIndex = 15012;

struct alignas(8) PDAKMNHJBDJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDAKMNHJBDJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PDAKMNHJBDJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDAKMNHJBDJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDAKMNHJBDJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OCJFPNBFEAB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OCJFPNBFEAB&, ::System::Int32&))((::PBYTE)hIl2Cpp + PDAKMNHJBDJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::PDAKMNHJBDJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PDAKMNHJBDJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PDAKMNHJBDJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PDAKMNHJBDJ MABHINNELKC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PDAKMNHJBDJ EIFONLCJOPG)
	{
		return ((::PDAKMNHJBDJ(*)(::FlatBuffers::ByteBuffer*, ::PDAKMNHJBDJ))((::PBYTE)hIl2Cpp + PDAKMNHJBDJ_MABHINNELKC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OCJFPNBFEAB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OCJFPNBFEAB&))((::PBYTE)hIl2Cpp + PDAKMNHJBDJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PDAKMNHJBDJ MABHINNELKC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PDAKMNHJBDJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PDAKMNHJBDJ_MABHINNELKC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
