#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CCJPFIPIBIH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x816970)
#define CCJPFIPIBIH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CCJPFIPIBIH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CCJPFIPIBIH_HHLPIMOIKAL_1_OFFSET UNITYSDK_OFFSET(0x1B998560)
#define CCJPFIPIBIH_HHLPIMOIKAL_OFFSET UNITYSDK_OFFSET(0x1B9984F0)
#define CCJPFIPIBIH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8169B0)
#define CCJPFIPIBIH___INIT_OFFSET UNITYSDK_OFFSET(0x816950)

inline static constexpr unsigned int CCJPFIPIBIH_TypeDefinitionIndex = 15956;

struct alignas(8) CCJPFIPIBIH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJPFIPIBIH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CCJPFIPIBIH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::CCJPFIPIBIH HHLPIMOIKAL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CCJPFIPIBIH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CCJPFIPIBIH_HHLPIMOIKAL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJPFIPIBIH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::CCJPFIPIBIH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CCJPFIPIBIH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CCJPFIPIBIH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CCJPFIPIBIH HHLPIMOIKAL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CCJPFIPIBIH EIFONLCJOPG)
	{
		return ((::CCJPFIPIBIH(*)(::FlatBuffers::ByteBuffer*, ::CCJPFIPIBIH))((::PBYTE)hIl2Cpp + CCJPFIPIBIH_HHLPIMOIKAL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJPFIPIBIH_PPOMNIFACOL_OFFSET))(this);
	}
};
