#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FMNBFBCJEOC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MMPMOFLCIBE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MMPMOFLCIBE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x85D7B0)
#define MMPMOFLCIBE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MMPMOFLCIBE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MMPMOFLCIBE_PIPGNMIFPLI_1_OFFSET UNITYSDK_OFFSET(0x1CCE4F10)
#define MMPMOFLCIBE_PIPGNMIFPLI_OFFSET UNITYSDK_OFFSET(0x1CCE4EA0)
#define MMPMOFLCIBE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x85D7F0)
#define MMPMOFLCIBE___INIT_OFFSET UNITYSDK_OFFSET(0x85D790)

inline static constexpr unsigned int MMPMOFLCIBE_TypeDefinitionIndex = 13694;

struct alignas(8) MMPMOFLCIBE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPMOFLCIBE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMPMOFLCIBE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MMPMOFLCIBE PIPGNMIFPLI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MMPMOFLCIBE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMPMOFLCIBE_PIPGNMIFPLI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::MMPMOFLCIBE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MMPMOFLCIBE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMPMOFLCIBE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FMNBFBCJEOC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FMNBFBCJEOC&))((::PBYTE)hIl2Cpp + MMPMOFLCIBE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPMOFLCIBE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MMPMOFLCIBE PIPGNMIFPLI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MMPMOFLCIBE EIFONLCJOPG)
	{
		return ((::MMPMOFLCIBE(*)(::FlatBuffers::ByteBuffer*, ::MMPMOFLCIBE))((::PBYTE)hIl2Cpp + MMPMOFLCIBE_PIPGNMIFPLI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPMOFLCIBE_PPOMNIFACOL_OFFSET))(this);
	}
};
