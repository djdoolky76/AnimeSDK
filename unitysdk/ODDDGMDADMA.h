#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ODDDGMDADMA_ABKDJPBKBDL_1_OFFSET UNITYSDK_OFFSET(0x1AD874F0)
#define ODDDGMDADMA_ABKDJPBKBDL_OFFSET UNITYSDK_OFFSET(0x1AD87450)
#define ODDDGMDADMA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x805B30)
#define ODDDGMDADMA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ODDDGMDADMA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ODDDGMDADMA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x805B20)
#define ODDDGMDADMA___INIT_OFFSET UNITYSDK_OFFSET(0x805B00)

inline static constexpr unsigned int ODDDGMDADMA_TypeDefinitionIndex = 10497;

struct alignas(8) ODDDGMDADMA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODDDGMDADMA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODDDGMDADMA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::ODDDGMDADMA ABKDJPBKBDL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ODDDGMDADMA EIFONLCJOPG)
	{
		return ((::ODDDGMDADMA(*)(::FlatBuffers::ByteBuffer*, ::ODDDGMDADMA))((::PBYTE)hIl2Cpp + ODDDGMDADMA_ABKDJPBKBDL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::ODDDGMDADMA ABKDJPBKBDL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ODDDGMDADMA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODDDGMDADMA_ABKDJPBKBDL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODDDGMDADMA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODDDGMDADMA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::ODDDGMDADMA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ODDDGMDADMA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODDDGMDADMA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
