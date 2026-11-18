#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EKJJGMJBAMF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A7190)
#define EKJJGMJBAMF_COCPPMIHPEO_1_OFFSET UNITYSDK_OFFSET(0x1744EB30)
#define EKJJGMJBAMF_COCPPMIHPEO_OFFSET UNITYSDK_OFFSET(0x1744EA90)
#define EKJJGMJBAMF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EKJJGMJBAMF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EKJJGMJBAMF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A71D0)
#define EKJJGMJBAMF___INIT_OFFSET UNITYSDK_OFFSET(0x7A7170)

inline static constexpr unsigned int EKJJGMJBAMF_TypeDefinitionIndex = 9519;

struct alignas(8) EKJJGMJBAMF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJJGMJBAMF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EKJJGMJBAMF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EKJJGMJBAMF COCPPMIHPEO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EKJJGMJBAMF EIFONLCJOPG)
	{
		return ((::EKJJGMJBAMF(*)(::FlatBuffers::ByteBuffer*, ::EKJJGMJBAMF))((::PBYTE)hIl2Cpp + EKJJGMJBAMF_COCPPMIHPEO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::EKJJGMJBAMF COCPPMIHPEO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EKJJGMJBAMF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EKJJGMJBAMF_COCPPMIHPEO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJJGMJBAMF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::EKJJGMJBAMF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EKJJGMJBAMF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EKJJGMJBAMF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJJGMJBAMF_PPOMNIFACOL_OFFSET))(this);
	}
};
