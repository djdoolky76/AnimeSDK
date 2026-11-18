#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MMOPKPCBAOF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81F200)
#define MMOPKPCBAOF_GBLCIIONMGG_1_OFFSET UNITYSDK_OFFSET(0x1C08DF50)
#define MMOPKPCBAOF_GBLCIIONMGG_OFFSET UNITYSDK_OFFSET(0x1C08DEE0)
#define MMOPKPCBAOF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MMOPKPCBAOF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MMOPKPCBAOF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81F1F0)
#define MMOPKPCBAOF___INIT_OFFSET UNITYSDK_OFFSET(0x81F1D0)

inline static constexpr unsigned int MMOPKPCBAOF_TypeDefinitionIndex = 10779;

struct alignas(8) MMOPKPCBAOF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMOPKPCBAOF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMOPKPCBAOF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMOPKPCBAOF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MMOPKPCBAOF GBLCIIONMGG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MMOPKPCBAOF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMOPKPCBAOF_GBLCIIONMGG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMOPKPCBAOF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MMOPKPCBAOF GBLCIIONMGG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MMOPKPCBAOF EIFONLCJOPG)
	{
		return ((::MMOPKPCBAOF(*)(::FlatBuffers::ByteBuffer*, ::MMOPKPCBAOF))((::PBYTE)hIl2Cpp + MMOPKPCBAOF_GBLCIIONMGG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::MMOPKPCBAOF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MMOPKPCBAOF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMOPKPCBAOF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
