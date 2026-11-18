#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GBGCPHMKIID.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HFFIGOGAECL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HFFIGOGAECL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x814480)
#define HFFIGOGAECL_FNINLHIIABK_1_OFFSET UNITYSDK_OFFSET(0x1B878830)
#define HFFIGOGAECL_FNINLHIIABK_OFFSET UNITYSDK_OFFSET(0x1B8787C0)
#define HFFIGOGAECL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HFFIGOGAECL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HFFIGOGAECL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8144D0)
#define HFFIGOGAECL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8144C0)
#define HFFIGOGAECL___INIT_OFFSET UNITYSDK_OFFSET(0x814460)

inline static constexpr unsigned int HFFIGOGAECL_TypeDefinitionIndex = 13095;

struct alignas(8) HFFIGOGAECL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFIGOGAECL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFFIGOGAECL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFIGOGAECL_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GBGCPHMKIID& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GBGCPHMKIID&))((::PBYTE)hIl2Cpp + HFFIGOGAECL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::HFFIGOGAECL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HFFIGOGAECL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFFIGOGAECL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HFFIGOGAECL FNINLHIIABK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HFFIGOGAECL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFFIGOGAECL_FNINLHIIABK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::HFFIGOGAECL FNINLHIIABK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HFFIGOGAECL EIFONLCJOPG)
	{
		return ((::HFFIGOGAECL(*)(::FlatBuffers::ByteBuffer*, ::HFFIGOGAECL))((::PBYTE)hIl2Cpp + HFFIGOGAECL_FNINLHIIABK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFIGOGAECL_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GBGCPHMKIID& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GBGCPHMKIID&, ::System::Int32&))((::PBYTE)hIl2Cpp + HFFIGOGAECL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
