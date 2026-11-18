#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MICELLKOLPE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80BAE0)
#define MICELLKOLPE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MICELLKOLPE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MICELLKOLPE_IPGEKIAFOJB_1_OFFSET UNITYSDK_OFFSET(0x1B317E50)
#define MICELLKOLPE_IPGEKIAFOJB_OFFSET UNITYSDK_OFFSET(0x1B317DE0)
#define MICELLKOLPE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80BB20)
#define MICELLKOLPE___INIT_OFFSET UNITYSDK_OFFSET(0x80BAC0)

inline static constexpr unsigned int MICELLKOLPE_TypeDefinitionIndex = 9525;

struct alignas(8) MICELLKOLPE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICELLKOLPE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MICELLKOLPE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::MICELLKOLPE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MICELLKOLPE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MICELLKOLPE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICELLKOLPE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MICELLKOLPE IPGEKIAFOJB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MICELLKOLPE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MICELLKOLPE_IPGEKIAFOJB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::MICELLKOLPE IPGEKIAFOJB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MICELLKOLPE EIFONLCJOPG)
	{
		return ((::MICELLKOLPE(*)(::FlatBuffers::ByteBuffer*, ::MICELLKOLPE))((::PBYTE)hIl2Cpp + MICELLKOLPE_IPGEKIAFOJB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MICELLKOLPE_GHKKNCCLPAN_OFFSET))(this);
	}
};
