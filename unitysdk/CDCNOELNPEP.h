#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HPCGJBPBIDP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CDCNOELNPEP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CDCNOELNPEP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8071C0)
#define CDCNOELNPEP_CKAINJOEGGO_1_OFFSET UNITYSDK_OFFSET(0x1ADB7760)
#define CDCNOELNPEP_CKAINJOEGGO_OFFSET UNITYSDK_OFFSET(0x1ADB76F0)
#define CDCNOELNPEP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CDCNOELNPEP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CDCNOELNPEP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8071B0)
#define CDCNOELNPEP___INIT_OFFSET UNITYSDK_OFFSET(0x807190)

inline static constexpr unsigned int CDCNOELNPEP_TypeDefinitionIndex = 11045;

struct alignas(8) CDCNOELNPEP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCNOELNPEP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDCNOELNPEP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCNOELNPEP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CDCNOELNPEP CKAINJOEGGO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CDCNOELNPEP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDCNOELNPEP_CKAINJOEGGO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::CDCNOELNPEP CKAINJOEGGO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CDCNOELNPEP EIFONLCJOPG)
	{
		return ((::CDCNOELNPEP(*)(::FlatBuffers::ByteBuffer*, ::CDCNOELNPEP))((::PBYTE)hIl2Cpp + CDCNOELNPEP_CKAINJOEGGO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HPCGJBPBIDP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HPCGJBPBIDP&))((::PBYTE)hIl2Cpp + CDCNOELNPEP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::CDCNOELNPEP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CDCNOELNPEP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDCNOELNPEP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCNOELNPEP_GHKKNCCLPAN_OFFSET))(this);
	}
};
