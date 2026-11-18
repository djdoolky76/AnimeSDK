#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NGMDIBPKNGM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LIBNFBCKFMJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LIBNFBCKFMJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EF260)
#define LIBNFBCKFMJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LIBNFBCKFMJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LIBNFBCKFMJ_MBNLOLPNONJ_1_OFFSET UNITYSDK_OFFSET(0x19DA6DE0)
#define LIBNFBCKFMJ_MBNLOLPNONJ_OFFSET UNITYSDK_OFFSET(0x19DA6D70)
#define LIBNFBCKFMJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EF250)
#define LIBNFBCKFMJ___INIT_OFFSET UNITYSDK_OFFSET(0x7EF230)

inline static constexpr unsigned int LIBNFBCKFMJ_TypeDefinitionIndex = 17090;

struct alignas(8) LIBNFBCKFMJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIBNFBCKFMJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LIBNFBCKFMJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LIBNFBCKFMJ MBNLOLPNONJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LIBNFBCKFMJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LIBNFBCKFMJ_MBNLOLPNONJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIBNFBCKFMJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIBNFBCKFMJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LIBNFBCKFMJ MBNLOLPNONJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LIBNFBCKFMJ EIFONLCJOPG)
	{
		return ((::LIBNFBCKFMJ(*)(::FlatBuffers::ByteBuffer*, ::LIBNFBCKFMJ))((::PBYTE)hIl2Cpp + LIBNFBCKFMJ_MBNLOLPNONJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::LIBNFBCKFMJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LIBNFBCKFMJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LIBNFBCKFMJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NGMDIBPKNGM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NGMDIBPKNGM&))((::PBYTE)hIl2Cpp + LIBNFBCKFMJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
