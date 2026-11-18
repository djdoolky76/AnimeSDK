#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MDGGOGHFKLK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81EFC0)
#define MDGGOGHFKLK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MDGGOGHFKLK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MDGGOGHFKLK_HPCBDHPMHJG_1_OFFSET UNITYSDK_OFFSET(0x1C0844F0)
#define MDGGOGHFKLK_HPCBDHPMHJG_OFFSET UNITYSDK_OFFSET(0x1C084480)
#define MDGGOGHFKLK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81EFB0)
#define MDGGOGHFKLK___INIT_OFFSET UNITYSDK_OFFSET(0x81EF90)

inline static constexpr unsigned int MDGGOGHFKLK_TypeDefinitionIndex = 15629;

struct alignas(8) MDGGOGHFKLK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGGOGHFKLK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDGGOGHFKLK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MDGGOGHFKLK HPCBDHPMHJG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MDGGOGHFKLK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDGGOGHFKLK_HPCBDHPMHJG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGGOGHFKLK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MDGGOGHFKLK HPCBDHPMHJG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MDGGOGHFKLK EIFONLCJOPG)
	{
		return ((::MDGGOGHFKLK(*)(::FlatBuffers::ByteBuffer*, ::MDGGOGHFKLK))((::PBYTE)hIl2Cpp + MDGGOGHFKLK_HPCBDHPMHJG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGGOGHFKLK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::MDGGOGHFKLK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MDGGOGHFKLK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDGGOGHFKLK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
