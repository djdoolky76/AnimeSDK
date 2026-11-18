#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LPBNHBFINLA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IEGAKHHMCKC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IEGAKHHMCKC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D4E80)
#define IEGAKHHMCKC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IEGAKHHMCKC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IEGAKHHMCKC_IKPJGNGAPFP_1_OFFSET UNITYSDK_OFFSET(0x18BB7E50)
#define IEGAKHHMCKC_IKPJGNGAPFP_OFFSET UNITYSDK_OFFSET(0x18BB7D10)
#define IEGAKHHMCKC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D4E70)
#define IEGAKHHMCKC___INIT_OFFSET UNITYSDK_OFFSET(0x7D4E50)

inline static constexpr unsigned int IEGAKHHMCKC_TypeDefinitionIndex = 11836;

struct alignas(8) IEGAKHHMCKC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGAKHHMCKC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IEGAKHHMCKC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGAKHHMCKC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::IEGAKHHMCKC IKPJGNGAPFP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IEGAKHHMCKC EIFONLCJOPG)
	{
		return ((::IEGAKHHMCKC(*)(::FlatBuffers::ByteBuffer*, ::IEGAKHHMCKC))((::PBYTE)hIl2Cpp + IEGAKHHMCKC_IKPJGNGAPFP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LPBNHBFINLA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LPBNHBFINLA&))((::PBYTE)hIl2Cpp + IEGAKHHMCKC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGAKHHMCKC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::IEGAKHHMCKC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IEGAKHHMCKC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IEGAKHHMCKC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IEGAKHHMCKC IKPJGNGAPFP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IEGAKHHMCKC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IEGAKHHMCKC_IKPJGNGAPFP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
