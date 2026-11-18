#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PPIINGEECLF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F0A90)
#define PPIINGEECLF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PPIINGEECLF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PPIINGEECLF_PBINHBCGGLE_1_OFFSET UNITYSDK_OFFSET(0x20072A50)
#define PPIINGEECLF_PBINHBCGGLE_OFFSET UNITYSDK_OFFSET(0x19DE7650)
#define PPIINGEECLF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F0AD0)
#define PPIINGEECLF___INIT_OFFSET UNITYSDK_OFFSET(0x7F0A70)

inline static constexpr unsigned int PPIINGEECLF_TypeDefinitionIndex = 15481;

struct alignas(8) PPIINGEECLF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPIINGEECLF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PPIINGEECLF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::PPIINGEECLF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PPIINGEECLF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PPIINGEECLF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PPIINGEECLF PBINHBCGGLE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PPIINGEECLF EIFONLCJOPG)
	{
		return ((::PPIINGEECLF(*)(::FlatBuffers::ByteBuffer*, ::PPIINGEECLF))((::PBYTE)hIl2Cpp + PPIINGEECLF_PBINHBCGGLE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPIINGEECLF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::PPIINGEECLF PBINHBCGGLE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PPIINGEECLF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PPIINGEECLF_PBINHBCGGLE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPIINGEECLF_GHKKNCCLPAN_OFFSET))(this);
	}
};
