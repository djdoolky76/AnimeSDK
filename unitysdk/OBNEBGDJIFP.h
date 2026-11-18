#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HNFIHLIKFBJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OBNEBGDJIFP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OBNEBGDJIFP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x820920)
#define OBNEBGDJIFP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OBNEBGDJIFP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OBNEBGDJIFP_GJEDAMAINGL_1_OFFSET UNITYSDK_OFFSET(0x1C1979A0)
#define OBNEBGDJIFP_GJEDAMAINGL_OFFSET UNITYSDK_OFFSET(0x1C197800)
#define OBNEBGDJIFP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x820960)
#define OBNEBGDJIFP___INIT_OFFSET UNITYSDK_OFFSET(0x820900)

inline static constexpr unsigned int OBNEBGDJIFP_TypeDefinitionIndex = 12741;

struct alignas(8) OBNEBGDJIFP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBNEBGDJIFP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBNEBGDJIFP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OBNEBGDJIFP GJEDAMAINGL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OBNEBGDJIFP EIFONLCJOPG)
	{
		return ((::OBNEBGDJIFP(*)(::FlatBuffers::ByteBuffer*, ::OBNEBGDJIFP))((::PBYTE)hIl2Cpp + OBNEBGDJIFP_GJEDAMAINGL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::OBNEBGDJIFP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OBNEBGDJIFP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBNEBGDJIFP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBNEBGDJIFP_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HNFIHLIKFBJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNFIHLIKFBJ&))((::PBYTE)hIl2Cpp + OBNEBGDJIFP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBNEBGDJIFP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::OBNEBGDJIFP GJEDAMAINGL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OBNEBGDJIFP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBNEBGDJIFP_GJEDAMAINGL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
