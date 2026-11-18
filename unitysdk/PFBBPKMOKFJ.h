#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PFBBPKMOKFJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x85E770)
#define PFBBPKMOKFJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PFBBPKMOKFJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PFBBPKMOKFJ_OMHKBFBEPNO_1_OFFSET UNITYSDK_OFFSET(0x1CD0BB40)
#define PFBBPKMOKFJ_OMHKBFBEPNO_OFFSET UNITYSDK_OFFSET(0x1CD0BAA0)
#define PFBBPKMOKFJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x85E760)
#define PFBBPKMOKFJ___INIT_OFFSET UNITYSDK_OFFSET(0x85E740)

inline static constexpr unsigned int PFBBPKMOKFJ_TypeDefinitionIndex = 12806;

struct alignas(8) PFBBPKMOKFJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFBBPKMOKFJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFBBPKMOKFJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFBBPKMOKFJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFBBPKMOKFJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::PFBBPKMOKFJ OMHKBFBEPNO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PFBBPKMOKFJ EIFONLCJOPG)
	{
		return ((::PFBBPKMOKFJ(*)(::FlatBuffers::ByteBuffer*, ::PFBBPKMOKFJ))((::PBYTE)hIl2Cpp + PFBBPKMOKFJ_OMHKBFBEPNO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::PFBBPKMOKFJ OMHKBFBEPNO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PFBBPKMOKFJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFBBPKMOKFJ_OMHKBFBEPNO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::PFBBPKMOKFJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PFBBPKMOKFJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFBBPKMOKFJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
