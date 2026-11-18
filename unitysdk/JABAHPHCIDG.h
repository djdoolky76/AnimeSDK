#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DEBPENFNCJA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JABAHPHCIDG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JABAHPHCIDG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80AAE0)
#define JABAHPHCIDG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JABAHPHCIDG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JABAHPHCIDG_ICPHAGCMKPG_1_OFFSET UNITYSDK_OFFSET(0x1B134AD0)
#define JABAHPHCIDG_ICPHAGCMKPG_OFFSET UNITYSDK_OFFSET(0x1B134A60)
#define JABAHPHCIDG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80AAD0)
#define JABAHPHCIDG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80AAC0)
#define JABAHPHCIDG___INIT_OFFSET UNITYSDK_OFFSET(0x80AAA0)

inline static constexpr unsigned int JABAHPHCIDG_TypeDefinitionIndex = 13741;

struct alignas(8) JABAHPHCIDG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JABAHPHCIDG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JABAHPHCIDG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DEBPENFNCJA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DEBPENFNCJA&))((::PBYTE)hIl2Cpp + JABAHPHCIDG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JABAHPHCIDG_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JABAHPHCIDG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::JABAHPHCIDG ICPHAGCMKPG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JABAHPHCIDG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JABAHPHCIDG_ICPHAGCMKPG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::JABAHPHCIDG ICPHAGCMKPG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JABAHPHCIDG EIFONLCJOPG)
	{
		return ((::JABAHPHCIDG(*)(::FlatBuffers::ByteBuffer*, ::JABAHPHCIDG))((::PBYTE)hIl2Cpp + JABAHPHCIDG_ICPHAGCMKPG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DEBPENFNCJA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DEBPENFNCJA&, ::System::Int32&))((::PBYTE)hIl2Cpp + JABAHPHCIDG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::JABAHPHCIDG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JABAHPHCIDG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JABAHPHCIDG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
