#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AJOMCIGNOKD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F93C0)
#define AJOMCIGNOKD_CLEONBHENHG_1_OFFSET UNITYSDK_OFFSET(0x1A521170)
#define AJOMCIGNOKD_CLEONBHENHG_OFFSET UNITYSDK_OFFSET(0x1A5210D0)
#define AJOMCIGNOKD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AJOMCIGNOKD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AJOMCIGNOKD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F9400)
#define AJOMCIGNOKD___INIT_OFFSET UNITYSDK_OFFSET(0x7F93A0)

inline static constexpr unsigned int AJOMCIGNOKD_TypeDefinitionIndex = 11611;

struct alignas(8) AJOMCIGNOKD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOMCIGNOKD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AJOMCIGNOKD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOMCIGNOKD_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::AJOMCIGNOKD CLEONBHENHG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AJOMCIGNOKD EIFONLCJOPG)
	{
		return ((::AJOMCIGNOKD(*)(::FlatBuffers::ByteBuffer*, ::AJOMCIGNOKD))((::PBYTE)hIl2Cpp + AJOMCIGNOKD_CLEONBHENHG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::AJOMCIGNOKD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AJOMCIGNOKD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AJOMCIGNOKD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AJOMCIGNOKD CLEONBHENHG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AJOMCIGNOKD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AJOMCIGNOKD_CLEONBHENHG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOMCIGNOKD_PPOMNIFACOL_OFFSET))(this);
	}
};
