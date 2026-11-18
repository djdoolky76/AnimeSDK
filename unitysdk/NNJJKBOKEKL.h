#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NHGAFEKICKP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NNJJKBOKEKL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NNJJKBOKEKL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x805900)
#define NNJJKBOKEKL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NNJJKBOKEKL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NNJJKBOKEKL_OGKIHFCFABB_1_OFFSET UNITYSDK_OFFSET(0x1AD6BC20)
#define NNJJKBOKEKL_OGKIHFCFABB_OFFSET UNITYSDK_OFFSET(0x1AD835B0)
#define NNJJKBOKEKL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8058F0)
#define NNJJKBOKEKL___INIT_OFFSET UNITYSDK_OFFSET(0x8058D0)

inline static constexpr unsigned int NNJJKBOKEKL_TypeDefinitionIndex = 15200;

struct alignas(8) NNJJKBOKEKL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJJKBOKEKL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NNJJKBOKEKL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NNJJKBOKEKL OGKIHFCFABB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NNJJKBOKEKL EIFONLCJOPG)
	{
		return ((::NNJJKBOKEKL(*)(::FlatBuffers::ByteBuffer*, ::NNJJKBOKEKL))((::PBYTE)hIl2Cpp + NNJJKBOKEKL_OGKIHFCFABB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJJKBOKEKL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::NNJJKBOKEKL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NNJJKBOKEKL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NNJJKBOKEKL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NHGAFEKICKP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NHGAFEKICKP&))((::PBYTE)hIl2Cpp + NNJJKBOKEKL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::NNJJKBOKEKL OGKIHFCFABB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NNJJKBOKEKL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NNJJKBOKEKL_OGKIHFCFABB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJJKBOKEKL_GHKKNCCLPAN_OFFSET))(this);
	}
};
