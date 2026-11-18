#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DMOIGHNOFOM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define POHPJFOCHDF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define POHPJFOCHDF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x963800)
#define POHPJFOCHDF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define POHPJFOCHDF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define POHPJFOCHDF_HADBKKIFGNP_1_OFFSET UNITYSDK_OFFSET(0x1F294D60)
#define POHPJFOCHDF_HADBKKIFGNP_OFFSET UNITYSDK_OFFSET(0x1F294CF0)
#define POHPJFOCHDF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x9637F0)
#define POHPJFOCHDF___INIT_OFFSET UNITYSDK_OFFSET(0x9637D0)

inline static constexpr unsigned int POHPJFOCHDF_TypeDefinitionIndex = 11252;

struct alignas(8) POHPJFOCHDF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + POHPJFOCHDF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POHPJFOCHDF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POHPJFOCHDF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POHPJFOCHDF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::POHPJFOCHDF HADBKKIFGNP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::POHPJFOCHDF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POHPJFOCHDF_HADBKKIFGNP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::POHPJFOCHDF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::POHPJFOCHDF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POHPJFOCHDF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::POHPJFOCHDF HADBKKIFGNP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::POHPJFOCHDF EIFONLCJOPG)
	{
		return ((::POHPJFOCHDF(*)(::FlatBuffers::ByteBuffer*, ::POHPJFOCHDF))((::PBYTE)hIl2Cpp + POHPJFOCHDF_HADBKKIFGNP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DMOIGHNOFOM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DMOIGHNOFOM&))((::PBYTE)hIl2Cpp + POHPJFOCHDF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
