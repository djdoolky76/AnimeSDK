#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KBCNMGEJMDA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OKFDHOAANFF_ALFHICCMPBH_1_OFFSET UNITYSDK_OFFSET(0x1CFFE3C0)
#define OKFDHOAANFF_ALFHICCMPBH_OFFSET UNITYSDK_OFFSET(0x1CFFE2C0)
#define OKFDHOAANFF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OKFDHOAANFF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AB900)
#define OKFDHOAANFF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OKFDHOAANFF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OKFDHOAANFF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AB940)
#define OKFDHOAANFF___INIT_OFFSET UNITYSDK_OFFSET(0x8AB8E0)

inline static constexpr unsigned int OKFDHOAANFF_TypeDefinitionIndex = 12217;

struct alignas(8) OKFDHOAANFF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFDHOAANFF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OKFDHOAANFF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OKFDHOAANFF ALFHICCMPBH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OKFDHOAANFF EIFONLCJOPG)
	{
		return ((::OKFDHOAANFF(*)(::FlatBuffers::ByteBuffer*, ::OKFDHOAANFF))((::PBYTE)hIl2Cpp + OKFDHOAANFF_ALFHICCMPBH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::OKFDHOAANFF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OKFDHOAANFF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OKFDHOAANFF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFDHOAANFF_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFDHOAANFF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::OKFDHOAANFF ALFHICCMPBH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OKFDHOAANFF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OKFDHOAANFF_ALFHICCMPBH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KBCNMGEJMDA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KBCNMGEJMDA&))((::PBYTE)hIl2Cpp + OKFDHOAANFF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
