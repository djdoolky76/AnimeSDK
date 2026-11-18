#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OEBNGKDJJDO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HHCKODMFBEG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HHCKODMFBEG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x811FA0)
#define HHCKODMFBEG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HHCKODMFBEG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HHCKODMFBEG_JIHBLBOLNIO_1_OFFSET UNITYSDK_OFFSET(0x1B7C48E0)
#define HHCKODMFBEG_JIHBLBOLNIO_OFFSET UNITYSDK_OFFSET(0x1B7C4880)
#define HHCKODMFBEG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x811FE0)
#define HHCKODMFBEG___INIT_OFFSET UNITYSDK_OFFSET(0x811F80)

inline static constexpr unsigned int HHCKODMFBEG_TypeDefinitionIndex = 10821;

struct alignas(8) HHCKODMFBEG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCKODMFBEG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHCKODMFBEG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OEBNGKDJJDO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OEBNGKDJJDO&))((::PBYTE)hIl2Cpp + HHCKODMFBEG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCKODMFBEG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::HHCKODMFBEG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HHCKODMFBEG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHCKODMFBEG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCKODMFBEG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HHCKODMFBEG JIHBLBOLNIO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HHCKODMFBEG EIFONLCJOPG)
	{
		return ((::HHCKODMFBEG(*)(::FlatBuffers::ByteBuffer*, ::HHCKODMFBEG))((::PBYTE)hIl2Cpp + HHCKODMFBEG_JIHBLBOLNIO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::HHCKODMFBEG JIHBLBOLNIO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HHCKODMFBEG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHCKODMFBEG_JIHBLBOLNIO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
