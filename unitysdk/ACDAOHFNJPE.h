#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ACDAOHFNJPE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F4790)
#define ACDAOHFNJPE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ACDAOHFNJPE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ACDAOHFNJPE_OEPOEBLBKCL_1_OFFSET UNITYSDK_OFFSET(0x1A15AF10)
#define ACDAOHFNJPE_OEPOEBLBKCL_OFFSET UNITYSDK_OFFSET(0x1A15AE10)
#define ACDAOHFNJPE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F4780)
#define ACDAOHFNJPE___INIT_OFFSET UNITYSDK_OFFSET(0x7F4760)

inline static constexpr unsigned int ACDAOHFNJPE_TypeDefinitionIndex = 12633;

struct alignas(8) ACDAOHFNJPE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACDAOHFNJPE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ACDAOHFNJPE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::ACDAOHFNJPE OEPOEBLBKCL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ACDAOHFNJPE EIFONLCJOPG)
	{
		return ((::ACDAOHFNJPE(*)(::FlatBuffers::ByteBuffer*, ::ACDAOHFNJPE))((::PBYTE)hIl2Cpp + ACDAOHFNJPE_OEPOEBLBKCL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACDAOHFNJPE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::ACDAOHFNJPE OEPOEBLBKCL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ACDAOHFNJPE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ACDAOHFNJPE_OEPOEBLBKCL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACDAOHFNJPE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::ACDAOHFNJPE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ACDAOHFNJPE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ACDAOHFNJPE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
