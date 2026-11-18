#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ONCJCNPJIEA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JINHNALKFLK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JINHNALKFLK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8150E0)
#define JINHNALKFLK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JINHNALKFLK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JINHNALKFLK_IGHIELOAAKL_1_OFFSET UNITYSDK_OFFSET(0x1B898C60)
#define JINHNALKFLK_IGHIELOAAKL_OFFSET UNITYSDK_OFFSET(0x1B8989C0)
#define JINHNALKFLK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8150D0)
#define JINHNALKFLK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8150C0)
#define JINHNALKFLK___INIT_OFFSET UNITYSDK_OFFSET(0x8150A0)

inline static constexpr unsigned int JINHNALKFLK_TypeDefinitionIndex = 16508;

struct alignas(8) JINHNALKFLK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JINHNALKFLK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JINHNALKFLK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JINHNALKFLK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::JINHNALKFLK IGHIELOAAKL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JINHNALKFLK EIFONLCJOPG)
	{
		return ((::JINHNALKFLK(*)(::FlatBuffers::ByteBuffer*, ::JINHNALKFLK))((::PBYTE)hIl2Cpp + JINHNALKFLK_IGHIELOAAKL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ONCJCNPJIEA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ONCJCNPJIEA&, ::System::Int32&))((::PBYTE)hIl2Cpp + JINHNALKFLK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JINHNALKFLK_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ONCJCNPJIEA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ONCJCNPJIEA&))((::PBYTE)hIl2Cpp + JINHNALKFLK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::JINHNALKFLK IGHIELOAAKL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JINHNALKFLK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JINHNALKFLK_IGHIELOAAKL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::JINHNALKFLK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JINHNALKFLK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JINHNALKFLK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
