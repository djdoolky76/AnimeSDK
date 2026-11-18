#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DODKHHAODOE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HAILMHKADEE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HAILMHKADEE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76E9F0)
#define HAILMHKADEE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HAILMHKADEE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HAILMHKADEE_GMFCPDNIBNP_1_OFFSET UNITYSDK_OFFSET(0x15A879B0)
#define HAILMHKADEE_GMFCPDNIBNP_OFFSET UNITYSDK_OFFSET(0x15A87950)
#define HAILMHKADEE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76EA30)
#define HAILMHKADEE___INIT_OFFSET UNITYSDK_OFFSET(0x76E9D0)

inline static constexpr unsigned int HAILMHKADEE_TypeDefinitionIndex = 15000;

struct alignas(8) HAILMHKADEE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAILMHKADEE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HAILMHKADEE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HAILMHKADEE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HAILMHKADEE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HAILMHKADEE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAILMHKADEE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DODKHHAODOE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DODKHHAODOE&))((::PBYTE)hIl2Cpp + HAILMHKADEE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAILMHKADEE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HAILMHKADEE GMFCPDNIBNP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HAILMHKADEE EIFONLCJOPG)
	{
		return ((::HAILMHKADEE(*)(::FlatBuffers::ByteBuffer*, ::HAILMHKADEE))((::PBYTE)hIl2Cpp + HAILMHKADEE_GMFCPDNIBNP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::HAILMHKADEE GMFCPDNIBNP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HAILMHKADEE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HAILMHKADEE_GMFCPDNIBNP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
