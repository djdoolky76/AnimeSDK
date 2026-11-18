#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NDJHMPKOJGC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LIBBOFJBLJG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LIBBOFJBLJG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80B470)
#define LIBBOFJBLJG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LIBBOFJBLJG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LIBBOFJBLJG_PONMHCHAOPB_1_OFFSET UNITYSDK_OFFSET(0x1B3032F0)
#define LIBBOFJBLJG_PONMHCHAOPB_OFFSET UNITYSDK_OFFSET(0x1B303280)
#define LIBBOFJBLJG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80B4B0)
#define LIBBOFJBLJG___INIT_OFFSET UNITYSDK_OFFSET(0x80B450)

inline static constexpr unsigned int LIBBOFJBLJG_TypeDefinitionIndex = 14187;

struct alignas(8) LIBBOFJBLJG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIBBOFJBLJG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LIBBOFJBLJG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIBBOFJBLJG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::LIBBOFJBLJG PONMHCHAOPB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LIBBOFJBLJG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LIBBOFJBLJG_PONMHCHAOPB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::LIBBOFJBLJG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LIBBOFJBLJG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LIBBOFJBLJG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIBBOFJBLJG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LIBBOFJBLJG PONMHCHAOPB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LIBBOFJBLJG EIFONLCJOPG)
	{
		return ((::LIBBOFJBLJG(*)(::FlatBuffers::ByteBuffer*, ::LIBBOFJBLJG))((::PBYTE)hIl2Cpp + LIBBOFJBLJG_PONMHCHAOPB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NDJHMPKOJGC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NDJHMPKOJGC&))((::PBYTE)hIl2Cpp + LIBBOFJBLJG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
