#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MLBLIKICEAK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HFBFJFOBMDE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HFBFJFOBMDE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F8380)
#define HFBFJFOBMDE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HFBFJFOBMDE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HFBFJFOBMDE_LEKBCNJODJM_1_OFFSET UNITYSDK_OFFSET(0x1A4EBE90)
#define HFBFJFOBMDE_LEKBCNJODJM_OFFSET UNITYSDK_OFFSET(0x1A4EBCF0)
#define HFBFJFOBMDE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F83C0)
#define HFBFJFOBMDE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F83D0)
#define HFBFJFOBMDE___INIT_OFFSET UNITYSDK_OFFSET(0x7F8360)

inline static constexpr unsigned int HFBFJFOBMDE_TypeDefinitionIndex = 15748;

struct alignas(8) HFBFJFOBMDE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBFJFOBMDE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFBFJFOBMDE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HFBFJFOBMDE LEKBCNJODJM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HFBFJFOBMDE EIFONLCJOPG)
	{
		return ((::HFBFJFOBMDE(*)(::FlatBuffers::ByteBuffer*, ::HFBFJFOBMDE))((::PBYTE)hIl2Cpp + HFBFJFOBMDE_LEKBCNJODJM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::HFBFJFOBMDE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HFBFJFOBMDE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFBFJFOBMDE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBFJFOBMDE_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MLBLIKICEAK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MLBLIKICEAK&))((::PBYTE)hIl2Cpp + HFBFJFOBMDE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::HFBFJFOBMDE LEKBCNJODJM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HFBFJFOBMDE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFBFJFOBMDE_LEKBCNJODJM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MLBLIKICEAK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MLBLIKICEAK&, ::System::Int32&))((::PBYTE)hIl2Cpp + HFBFJFOBMDE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBFJFOBMDE_PPOMNIFACOL_OFFSET))(this);
	}
};
