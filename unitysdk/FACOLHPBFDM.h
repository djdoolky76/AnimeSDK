#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MJOFKMLIHDM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FACOLHPBFDM_AKIFNILBDHF_1_OFFSET UNITYSDK_OFFSET(0x187B2F30)
#define FACOLHPBFDM_AKIFNILBDHF_OFFSET UNITYSDK_OFFSET(0x187B2EC0)
#define FACOLHPBFDM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FACOLHPBFDM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D1370)
#define FACOLHPBFDM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FACOLHPBFDM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FACOLHPBFDM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D13B0)
#define FACOLHPBFDM___INIT_OFFSET UNITYSDK_OFFSET(0x7D1350)

inline static constexpr unsigned int FACOLHPBFDM_TypeDefinitionIndex = 12953;

struct alignas(8) FACOLHPBFDM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FACOLHPBFDM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FACOLHPBFDM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FACOLHPBFDM AKIFNILBDHF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FACOLHPBFDM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FACOLHPBFDM_AKIFNILBDHF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::FACOLHPBFDM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FACOLHPBFDM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FACOLHPBFDM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MJOFKMLIHDM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MJOFKMLIHDM&))((::PBYTE)hIl2Cpp + FACOLHPBFDM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FACOLHPBFDM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FACOLHPBFDM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::FACOLHPBFDM AKIFNILBDHF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FACOLHPBFDM EIFONLCJOPG)
	{
		return ((::FACOLHPBFDM(*)(::FlatBuffers::ByteBuffer*, ::FACOLHPBFDM))((::PBYTE)hIl2Cpp + FACOLHPBFDM_AKIFNILBDHF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
