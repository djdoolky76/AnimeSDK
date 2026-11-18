#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MILCGBPMOML.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MJEKKDKCJDD_AKAGODPHLOA_1_OFFSET UNITYSDK_OFFSET(0x1AB0CBD0)
#define MJEKKDKCJDD_AKAGODPHLOA_OFFSET UNITYSDK_OFFSET(0x1AB0CAD0)
#define MJEKKDKCJDD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MJEKKDKCJDD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8024E0)
#define MJEKKDKCJDD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MJEKKDKCJDD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MJEKKDKCJDD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8024D0)
#define MJEKKDKCJDD___INIT_OFFSET UNITYSDK_OFFSET(0x8024B0)

inline static constexpr unsigned int MJEKKDKCJDD_TypeDefinitionIndex = 13753;

struct alignas(8) MJEKKDKCJDD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEKKDKCJDD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJEKKDKCJDD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MJEKKDKCJDD AKAGODPHLOA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MJEKKDKCJDD EIFONLCJOPG)
	{
		return ((::MJEKKDKCJDD(*)(::FlatBuffers::ByteBuffer*, ::MJEKKDKCJDD))((::PBYTE)hIl2Cpp + MJEKKDKCJDD_AKAGODPHLOA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEKKDKCJDD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::MJEKKDKCJDD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MJEKKDKCJDD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJEKKDKCJDD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEKKDKCJDD_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MJEKKDKCJDD AKAGODPHLOA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MJEKKDKCJDD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJEKKDKCJDD_AKAGODPHLOA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MILCGBPMOML& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MILCGBPMOML&))((::PBYTE)hIl2Cpp + MJEKKDKCJDD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
