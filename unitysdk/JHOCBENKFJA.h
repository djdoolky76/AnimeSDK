#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JHOCBENKFJA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x812B20)
#define JHOCBENKFJA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JHOCBENKFJA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JHOCBENKFJA_GIPAMGCKHCI_1_OFFSET UNITYSDK_OFFSET(0x1B7DA5C0)
#define JHOCBENKFJA_GIPAMGCKHCI_OFFSET UNITYSDK_OFFSET(0x1B7DA520)
#define JHOCBENKFJA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x812B60)
#define JHOCBENKFJA___INIT_OFFSET UNITYSDK_OFFSET(0x812B00)

inline static constexpr unsigned int JHOCBENKFJA_TypeDefinitionIndex = 10911;

struct alignas(8) JHOCBENKFJA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOCBENKFJA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHOCBENKFJA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JHOCBENKFJA GIPAMGCKHCI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JHOCBENKFJA EIFONLCJOPG)
	{
		return ((::JHOCBENKFJA(*)(::FlatBuffers::ByteBuffer*, ::JHOCBENKFJA))((::PBYTE)hIl2Cpp + JHOCBENKFJA_GIPAMGCKHCI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::JHOCBENKFJA GIPAMGCKHCI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JHOCBENKFJA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHOCBENKFJA_GIPAMGCKHCI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::JHOCBENKFJA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JHOCBENKFJA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHOCBENKFJA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOCBENKFJA_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOCBENKFJA_PPOMNIFACOL_OFFSET))(this);
	}
};
