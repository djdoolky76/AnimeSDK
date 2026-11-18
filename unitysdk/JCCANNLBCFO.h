#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KDKFMPABABD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JCCANNLBCFO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JCCANNLBCFO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x814D70)
#define JCCANNLBCFO_GBCJGAAMIIC_1_OFFSET UNITYSDK_OFFSET(0x1B892980)
#define JCCANNLBCFO_GBCJGAAMIIC_OFFSET UNITYSDK_OFFSET(0x1B892840)
#define JCCANNLBCFO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JCCANNLBCFO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JCCANNLBCFO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x814D60)
#define JCCANNLBCFO___INIT_OFFSET UNITYSDK_OFFSET(0x814D40)

inline static constexpr unsigned int JCCANNLBCFO_TypeDefinitionIndex = 11567;

struct alignas(8) JCCANNLBCFO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCCANNLBCFO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCCANNLBCFO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCCANNLBCFO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::JCCANNLBCFO GBCJGAAMIIC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JCCANNLBCFO EIFONLCJOPG)
	{
		return ((::JCCANNLBCFO(*)(::FlatBuffers::ByteBuffer*, ::JCCANNLBCFO))((::PBYTE)hIl2Cpp + JCCANNLBCFO_GBCJGAAMIIC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KDKFMPABABD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KDKFMPABABD&))((::PBYTE)hIl2Cpp + JCCANNLBCFO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::JCCANNLBCFO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JCCANNLBCFO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCCANNLBCFO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JCCANNLBCFO GBCJGAAMIIC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JCCANNLBCFO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCCANNLBCFO_GBCJGAAMIIC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCCANNLBCFO_GHKKNCCLPAN_OFFSET))(this);
	}
};
