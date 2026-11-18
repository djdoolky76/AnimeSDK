#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FHMCCOPJDAB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CNMGFNFDKPH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CNMGFNFDKPH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ED8E0)
#define CNMGFNFDKPH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CNMGFNFDKPH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CNMGFNFDKPH_NPAHIINIAEL_1_OFFSET UNITYSDK_OFFSET(0x19BF9760)
#define CNMGFNFDKPH_NPAHIINIAEL_OFFSET UNITYSDK_OFFSET(0x19BF96F0)
#define CNMGFNFDKPH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7ED8D0)
#define CNMGFNFDKPH___INIT_OFFSET UNITYSDK_OFFSET(0x7ED8B0)

inline static constexpr unsigned int CNMGFNFDKPH_TypeDefinitionIndex = 13826;

struct alignas(8) CNMGFNFDKPH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMGFNFDKPH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CNMGFNFDKPH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMGFNFDKPH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CNMGFNFDKPH NPAHIINIAEL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CNMGFNFDKPH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CNMGFNFDKPH_NPAHIINIAEL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::CNMGFNFDKPH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CNMGFNFDKPH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CNMGFNFDKPH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CNMGFNFDKPH NPAHIINIAEL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CNMGFNFDKPH EIFONLCJOPG)
	{
		return ((::CNMGFNFDKPH(*)(::FlatBuffers::ByteBuffer*, ::CNMGFNFDKPH))((::PBYTE)hIl2Cpp + CNMGFNFDKPH_NPAHIINIAEL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMGFNFDKPH_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FHMCCOPJDAB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FHMCCOPJDAB&))((::PBYTE)hIl2Cpp + CNMGFNFDKPH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
