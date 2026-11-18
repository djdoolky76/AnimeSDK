#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HJIJMNMKNCL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HGGIANGKPDB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HGGIANGKPDB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F8430)
#define HGGIANGKPDB_EKNPPLJCFID_1_OFFSET UNITYSDK_OFFSET(0x1A4E9370)
#define HGGIANGKPDB_EKNPPLJCFID_OFFSET UNITYSDK_OFFSET(0x1A4EEF40)
#define HGGIANGKPDB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HGGIANGKPDB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HGGIANGKPDB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F8420)
#define HGGIANGKPDB___INIT_OFFSET UNITYSDK_OFFSET(0x7F8400)

inline static constexpr unsigned int HGGIANGKPDB_TypeDefinitionIndex = 12364;

struct alignas(8) HGGIANGKPDB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGIANGKPDB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HGGIANGKPDB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGIANGKPDB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HGGIANGKPDB EKNPPLJCFID(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HGGIANGKPDB EIFONLCJOPG)
	{
		return ((::HGGIANGKPDB(*)(::FlatBuffers::ByteBuffer*, ::HGGIANGKPDB))((::PBYTE)hIl2Cpp + HGGIANGKPDB_EKNPPLJCFID_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::HGGIANGKPDB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HGGIANGKPDB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HGGIANGKPDB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HGGIANGKPDB EKNPPLJCFID_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HGGIANGKPDB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HGGIANGKPDB_EKNPPLJCFID_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGIANGKPDB_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HJIJMNMKNCL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HJIJMNMKNCL&))((::PBYTE)hIl2Cpp + HGGIANGKPDB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
