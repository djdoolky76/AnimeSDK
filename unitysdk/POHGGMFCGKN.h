#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define POHGGMFCGKN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x923EE0)
#define POHGGMFCGKN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define POHGGMFCGKN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define POHGGMFCGKN_KALEPHKBEML_1_OFFSET UNITYSDK_OFFSET(0x1EC8CE70)
#define POHGGMFCGKN_KALEPHKBEML_OFFSET UNITYSDK_OFFSET(0x1EC8CDD0)
#define POHGGMFCGKN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x923F20)
#define POHGGMFCGKN___INIT_OFFSET UNITYSDK_OFFSET(0x923EC0)

inline static constexpr unsigned int POHGGMFCGKN_TypeDefinitionIndex = 17696;

struct alignas(8) POHGGMFCGKN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + POHGGMFCGKN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POHGGMFCGKN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POHGGMFCGKN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::POHGGMFCGKN KALEPHKBEML(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::POHGGMFCGKN EIFONLCJOPG)
	{
		return ((::POHGGMFCGKN(*)(::FlatBuffers::ByteBuffer*, ::POHGGMFCGKN))((::PBYTE)hIl2Cpp + POHGGMFCGKN_KALEPHKBEML_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::POHGGMFCGKN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::POHGGMFCGKN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POHGGMFCGKN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POHGGMFCGKN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::POHGGMFCGKN KALEPHKBEML_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::POHGGMFCGKN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POHGGMFCGKN_KALEPHKBEML_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
