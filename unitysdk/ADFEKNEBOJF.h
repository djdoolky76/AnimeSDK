#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ADFEKNEBOJF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7CFF90)
#define ADFEKNEBOJF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ADFEKNEBOJF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ADFEKNEBOJF_IBECNAGCEHB_1_OFFSET UNITYSDK_OFFSET(0x1876B580)
#define ADFEKNEBOJF_IBECNAGCEHB_OFFSET UNITYSDK_OFFSET(0x1876B4E0)
#define ADFEKNEBOJF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7CFF80)
#define ADFEKNEBOJF___INIT_OFFSET UNITYSDK_OFFSET(0x7CFF60)

inline static constexpr unsigned int ADFEKNEBOJF_TypeDefinitionIndex = 11557;

struct alignas(8) ADFEKNEBOJF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFEKNEBOJF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ADFEKNEBOJF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::ADFEKNEBOJF IBECNAGCEHB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ADFEKNEBOJF EIFONLCJOPG)
	{
		return ((::ADFEKNEBOJF(*)(::FlatBuffers::ByteBuffer*, ::ADFEKNEBOJF))((::PBYTE)hIl2Cpp + ADFEKNEBOJF_IBECNAGCEHB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::ADFEKNEBOJF IBECNAGCEHB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ADFEKNEBOJF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ADFEKNEBOJF_IBECNAGCEHB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFEKNEBOJF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFEKNEBOJF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::ADFEKNEBOJF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ADFEKNEBOJF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ADFEKNEBOJF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
