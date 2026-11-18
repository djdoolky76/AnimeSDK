#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CEIEPCGBPMI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x826940)
#define CEIEPCGBPMI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CEIEPCGBPMI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CEIEPCGBPMI_LJKBCOHPNBH_1_OFFSET UNITYSDK_OFFSET(0x1C529540)
#define CEIEPCGBPMI_LJKBCOHPNBH_OFFSET UNITYSDK_OFFSET(0x1C529480)
#define CEIEPCGBPMI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x826980)
#define CEIEPCGBPMI___INIT_OFFSET UNITYSDK_OFFSET(0x826920)

inline static constexpr unsigned int CEIEPCGBPMI_TypeDefinitionIndex = 9277;

struct alignas(8) CEIEPCGBPMI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEIEPCGBPMI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CEIEPCGBPMI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::CEIEPCGBPMI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CEIEPCGBPMI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CEIEPCGBPMI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CEIEPCGBPMI LJKBCOHPNBH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CEIEPCGBPMI EIFONLCJOPG)
	{
		return ((::CEIEPCGBPMI(*)(::FlatBuffers::ByteBuffer*, ::CEIEPCGBPMI))((::PBYTE)hIl2Cpp + CEIEPCGBPMI_LJKBCOHPNBH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEIEPCGBPMI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEIEPCGBPMI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::CEIEPCGBPMI LJKBCOHPNBH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CEIEPCGBPMI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CEIEPCGBPMI_LJKBCOHPNBH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
