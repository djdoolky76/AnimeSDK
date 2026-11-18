#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KJKAJBENJMA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HLKOBNLJGKP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HLKOBNLJGKP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80A390)
#define HLKOBNLJGKP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HLKOBNLJGKP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HLKOBNLJGKP_JMKAMLDDEEL_1_OFFSET UNITYSDK_OFFSET(0x1B125DC0)
#define HLKOBNLJGKP_JMKAMLDDEEL_OFFSET UNITYSDK_OFFSET(0x1B125CC0)
#define HLKOBNLJGKP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80A3D0)
#define HLKOBNLJGKP___INIT_OFFSET UNITYSDK_OFFSET(0x80A370)

inline static constexpr unsigned int HLKOBNLJGKP_TypeDefinitionIndex = 15539;

struct alignas(8) HLKOBNLJGKP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKOBNLJGKP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLKOBNLJGKP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KJKAJBENJMA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KJKAJBENJMA&))((::PBYTE)hIl2Cpp + HLKOBNLJGKP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::HLKOBNLJGKP JMKAMLDDEEL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HLKOBNLJGKP EIFONLCJOPG)
	{
		return ((::HLKOBNLJGKP(*)(::FlatBuffers::ByteBuffer*, ::HLKOBNLJGKP))((::PBYTE)hIl2Cpp + HLKOBNLJGKP_JMKAMLDDEEL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::HLKOBNLJGKP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HLKOBNLJGKP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLKOBNLJGKP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKOBNLJGKP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HLKOBNLJGKP JMKAMLDDEEL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HLKOBNLJGKP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLKOBNLJGKP_JMKAMLDDEEL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKOBNLJGKP_GHKKNCCLPAN_OFFSET))(this);
	}
};
