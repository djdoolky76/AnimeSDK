#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AILGMLPMCEC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D00C0)
#define AILGMLPMCEC_GEPOIHHPBHF_1_OFFSET UNITYSDK_OFFSET(0x1876E3F0)
#define AILGMLPMCEC_GEPOIHHPBHF_OFFSET UNITYSDK_OFFSET(0x1876E380)
#define AILGMLPMCEC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AILGMLPMCEC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AILGMLPMCEC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D00B0)
#define AILGMLPMCEC___INIT_OFFSET UNITYSDK_OFFSET(0x7D0090)

inline static constexpr unsigned int AILGMLPMCEC_TypeDefinitionIndex = 15615;

struct alignas(8) AILGMLPMCEC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AILGMLPMCEC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AILGMLPMCEC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AILGMLPMCEC GEPOIHHPBHF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AILGMLPMCEC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AILGMLPMCEC_GEPOIHHPBHF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AILGMLPMCEC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::AILGMLPMCEC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AILGMLPMCEC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AILGMLPMCEC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AILGMLPMCEC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::AILGMLPMCEC GEPOIHHPBHF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AILGMLPMCEC EIFONLCJOPG)
	{
		return ((::AILGMLPMCEC(*)(::FlatBuffers::ByteBuffer*, ::AILGMLPMCEC))((::PBYTE)hIl2Cpp + AILGMLPMCEC_GEPOIHHPBHF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
