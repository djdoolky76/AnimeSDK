#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PNPKOEAFIEH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x9636D0)
#define PNPKOEAFIEH_GDJBJPDLCOF_1_OFFSET UNITYSDK_OFFSET(0x1F2928F0)
#define PNPKOEAFIEH_GDJBJPDLCOF_OFFSET UNITYSDK_OFFSET(0x1F292880)
#define PNPKOEAFIEH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PNPKOEAFIEH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PNPKOEAFIEH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x9636C0)
#define PNPKOEAFIEH___INIT_OFFSET UNITYSDK_OFFSET(0x9636A0)

inline static constexpr unsigned int PNPKOEAFIEH_TypeDefinitionIndex = 17298;

struct alignas(8) PNPKOEAFIEH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPKOEAFIEH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNPKOEAFIEH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PNPKOEAFIEH GDJBJPDLCOF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PNPKOEAFIEH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNPKOEAFIEH_GDJBJPDLCOF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPKOEAFIEH_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPKOEAFIEH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::PNPKOEAFIEH GDJBJPDLCOF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PNPKOEAFIEH EIFONLCJOPG)
	{
		return ((::PNPKOEAFIEH(*)(::FlatBuffers::ByteBuffer*, ::PNPKOEAFIEH))((::PBYTE)hIl2Cpp + PNPKOEAFIEH_GDJBJPDLCOF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::PNPKOEAFIEH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PNPKOEAFIEH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNPKOEAFIEH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
