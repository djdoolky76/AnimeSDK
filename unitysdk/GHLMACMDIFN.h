#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CDIGPMFILMK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GHLMACMDIFN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GHLMACMDIFN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x78AFF0)
#define GHLMACMDIFN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GHLMACMDIFN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GHLMACMDIFN_HGMFBOCGNFK_1_OFFSET UNITYSDK_OFFSET(0x1664A380)
#define GHLMACMDIFN_HGMFBOCGNFK_OFFSET UNITYSDK_OFFSET(0x1664A310)
#define GHLMACMDIFN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x78AFE0)
#define GHLMACMDIFN___INIT_OFFSET UNITYSDK_OFFSET(0x78AFC0)

inline static constexpr unsigned int GHLMACMDIFN_TypeDefinitionIndex = 9460;

struct alignas(8) GHLMACMDIFN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLMACMDIFN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHLMACMDIFN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLMACMDIFN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::GHLMACMDIFN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GHLMACMDIFN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHLMACMDIFN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GHLMACMDIFN HGMFBOCGNFK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GHLMACMDIFN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHLMACMDIFN_HGMFBOCGNFK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CDIGPMFILMK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CDIGPMFILMK&))((::PBYTE)hIl2Cpp + GHLMACMDIFN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GHLMACMDIFN HGMFBOCGNFK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GHLMACMDIFN EIFONLCJOPG)
	{
		return ((::GHLMACMDIFN(*)(::FlatBuffers::ByteBuffer*, ::GHLMACMDIFN))((::PBYTE)hIl2Cpp + GHLMACMDIFN_HGMFBOCGNFK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLMACMDIFN_GHKKNCCLPAN_OFFSET))(this);
	}
};
