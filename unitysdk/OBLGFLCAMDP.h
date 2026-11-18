#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OBLGFLCAMDP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D82E0)
#define OBLGFLCAMDP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OBLGFLCAMDP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OBLGFLCAMDP_MLIECFALABI_1_OFFSET UNITYSDK_OFFSET(0x18E266D0)
#define OBLGFLCAMDP_MLIECFALABI_OFFSET UNITYSDK_OFFSET(0x18E26630)
#define OBLGFLCAMDP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D82D0)
#define OBLGFLCAMDP___INIT_OFFSET UNITYSDK_OFFSET(0x7D82B0)

inline static constexpr unsigned int OBLGFLCAMDP_TypeDefinitionIndex = 17158;

struct alignas(8) OBLGFLCAMDP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBLGFLCAMDP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBLGFLCAMDP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBLGFLCAMDP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::OBLGFLCAMDP MLIECFALABI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OBLGFLCAMDP EIFONLCJOPG)
	{
		return ((::OBLGFLCAMDP(*)(::FlatBuffers::ByteBuffer*, ::OBLGFLCAMDP))((::PBYTE)hIl2Cpp + OBLGFLCAMDP_MLIECFALABI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::OBLGFLCAMDP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OBLGFLCAMDP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBLGFLCAMDP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OBLGFLCAMDP MLIECFALABI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OBLGFLCAMDP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBLGFLCAMDP_MLIECFALABI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBLGFLCAMDP_GHKKNCCLPAN_OFFSET))(this);
	}
};
