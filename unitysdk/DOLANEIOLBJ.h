#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JJHLIPGEKDJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DOLANEIOLBJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DOLANEIOLBJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x817060)
#define DOLANEIOLBJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DOLANEIOLBJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DOLANEIOLBJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8170B0)
#define DOLANEIOLBJ_MCKMKJILLDH_1_OFFSET UNITYSDK_OFFSET(0x1B9ACD40)
#define DOLANEIOLBJ_MCKMKJILLDH_OFFSET UNITYSDK_OFFSET(0x1B9ACCD0)
#define DOLANEIOLBJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8170A0)
#define DOLANEIOLBJ___INIT_OFFSET UNITYSDK_OFFSET(0x817040)

inline static constexpr unsigned int DOLANEIOLBJ_TypeDefinitionIndex = 16636;

struct alignas(8) DOLANEIOLBJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLANEIOLBJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOLANEIOLBJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DOLANEIOLBJ MCKMKJILLDH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DOLANEIOLBJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOLANEIOLBJ_MCKMKJILLDH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::DOLANEIOLBJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DOLANEIOLBJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOLANEIOLBJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLANEIOLBJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLANEIOLBJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JJHLIPGEKDJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JJHLIPGEKDJ&))((::PBYTE)hIl2Cpp + DOLANEIOLBJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 OKAAJABEHDP, ::System::Int32 JMCOMOCFOGB, ::JJHLIPGEKDJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::JJHLIPGEKDJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + DOLANEIOLBJ_LLGCOCLACNA_OFFSET))(this, OKAAJABEHDP, JMCOMOCFOGB, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::DOLANEIOLBJ MCKMKJILLDH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DOLANEIOLBJ EIFONLCJOPG)
	{
		return ((::DOLANEIOLBJ(*)(::FlatBuffers::ByteBuffer*, ::DOLANEIOLBJ))((::PBYTE)hIl2Cpp + DOLANEIOLBJ_MCKMKJILLDH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
