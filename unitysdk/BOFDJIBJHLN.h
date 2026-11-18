#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BOFDJIBJHLN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D05B0)
#define BOFDJIBJHLN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BOFDJIBJHLN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BOFDJIBJHLN_NIIDOMNLFCI_1_OFFSET UNITYSDK_OFFSET(0x1877EC10)
#define BOFDJIBJHLN_NIIDOMNLFCI_OFFSET UNITYSDK_OFFSET(0x1877EBA0)
#define BOFDJIBJHLN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D05F0)
#define BOFDJIBJHLN___INIT_OFFSET UNITYSDK_OFFSET(0x7D0590)

inline static constexpr unsigned int BOFDJIBJHLN_TypeDefinitionIndex = 16696;

struct alignas(8) BOFDJIBJHLN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFDJIBJHLN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOFDJIBJHLN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFDJIBJHLN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::BOFDJIBJHLN NIIDOMNLFCI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BOFDJIBJHLN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOFDJIBJHLN_NIIDOMNLFCI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::BOFDJIBJHLN NIIDOMNLFCI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BOFDJIBJHLN EIFONLCJOPG)
	{
		return ((::BOFDJIBJHLN(*)(::FlatBuffers::ByteBuffer*, ::BOFDJIBJHLN))((::PBYTE)hIl2Cpp + BOFDJIBJHLN_NIIDOMNLFCI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::BOFDJIBJHLN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BOFDJIBJHLN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOFDJIBJHLN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFDJIBJHLN_PPOMNIFACOL_OFFSET))(this);
	}
};
