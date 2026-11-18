#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLJMIHDDGDA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C1A20)
#define CLJMIHDDGDA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CLJMIHDDGDA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CLJMIHDDGDA_JPNMOJBDBDC_1_OFFSET UNITYSDK_OFFSET(0x17F14380)
#define CLJMIHDDGDA_JPNMOJBDBDC_OFFSET UNITYSDK_OFFSET(0x17F14310)
#define CLJMIHDDGDA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C1A60)
#define CLJMIHDDGDA___INIT_OFFSET UNITYSDK_OFFSET(0x7C1A00)

inline static constexpr unsigned int CLJMIHDDGDA_TypeDefinitionIndex = 16236;

struct alignas(8) CLJMIHDDGDA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLJMIHDDGDA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLJMIHDDGDA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLJMIHDDGDA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::CLJMIHDDGDA JPNMOJBDBDC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CLJMIHDDGDA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLJMIHDDGDA_JPNMOJBDBDC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::CLJMIHDDGDA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CLJMIHDDGDA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLJMIHDDGDA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLJMIHDDGDA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CLJMIHDDGDA JPNMOJBDBDC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CLJMIHDDGDA EIFONLCJOPG)
	{
		return ((::CLJMIHDDGDA(*)(::FlatBuffers::ByteBuffer*, ::CLJMIHDDGDA))((::PBYTE)hIl2Cpp + CLJMIHDDGDA_JPNMOJBDBDC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
