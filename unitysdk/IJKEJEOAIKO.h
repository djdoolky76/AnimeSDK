#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IJKEJEOAIKO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D50E0)
#define IJKEJEOAIKO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IJKEJEOAIKO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IJKEJEOAIKO_PLAFJFOJOLD_1_OFFSET UNITYSDK_OFFSET(0x18BBD1A0)
#define IJKEJEOAIKO_PLAFJFOJOLD_OFFSET UNITYSDK_OFFSET(0x18BBD100)
#define IJKEJEOAIKO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D50D0)
#define IJKEJEOAIKO___INIT_OFFSET UNITYSDK_OFFSET(0x7D50B0)

inline static constexpr unsigned int IJKEJEOAIKO_TypeDefinitionIndex = 12801;

struct alignas(8) IJKEJEOAIKO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJKEJEOAIKO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IJKEJEOAIKO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJKEJEOAIKO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::IJKEJEOAIKO PLAFJFOJOLD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IJKEJEOAIKO EIFONLCJOPG)
	{
		return ((::IJKEJEOAIKO(*)(::FlatBuffers::ByteBuffer*, ::IJKEJEOAIKO))((::PBYTE)hIl2Cpp + IJKEJEOAIKO_PLAFJFOJOLD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJKEJEOAIKO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::IJKEJEOAIKO PLAFJFOJOLD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IJKEJEOAIKO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IJKEJEOAIKO_PLAFJFOJOLD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::IJKEJEOAIKO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IJKEJEOAIKO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IJKEJEOAIKO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
