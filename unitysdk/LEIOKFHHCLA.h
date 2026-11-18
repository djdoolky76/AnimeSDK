#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ECAEOJKFFAE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LEIOKFHHCLA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LEIOKFHHCLA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81C9E0)
#define LEIOKFHHCLA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LEIOKFHHCLA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LEIOKFHHCLA_PHNLJOIGLPG_1_OFFSET UNITYSDK_OFFSET(0x1BB0C360)
#define LEIOKFHHCLA_PHNLJOIGLPG_OFFSET UNITYSDK_OFFSET(0x1BB0C2F0)
#define LEIOKFHHCLA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81CA20)
#define LEIOKFHHCLA___INIT_OFFSET UNITYSDK_OFFSET(0x81C9C0)

inline static constexpr unsigned int LEIOKFHHCLA_TypeDefinitionIndex = 14867;

struct alignas(8) LEIOKFHHCLA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIOKFHHCLA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LEIOKFHHCLA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LEIOKFHHCLA PHNLJOIGLPG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LEIOKFHHCLA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LEIOKFHHCLA_PHNLJOIGLPG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::LEIOKFHHCLA PHNLJOIGLPG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LEIOKFHHCLA EIFONLCJOPG)
	{
		return ((::LEIOKFHHCLA(*)(::FlatBuffers::ByteBuffer*, ::LEIOKFHHCLA))((::PBYTE)hIl2Cpp + LEIOKFHHCLA_PHNLJOIGLPG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIOKFHHCLA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::LEIOKFHHCLA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LEIOKFHHCLA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LEIOKFHHCLA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIOKFHHCLA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ECAEOJKFFAE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ECAEOJKFFAE&))((::PBYTE)hIl2Cpp + LEIOKFHHCLA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
