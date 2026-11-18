#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OIAHEHBFIAA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C4C10)
#define OIAHEHBFIAA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OIAHEHBFIAA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OIAHEHBFIAA_IOPGFOBAPGG_1_OFFSET UNITYSDK_OFFSET(0x17FE0F90)
#define OIAHEHBFIAA_IOPGFOBAPGG_OFFSET UNITYSDK_OFFSET(0x17FE0F20)
#define OIAHEHBFIAA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C4C50)
#define OIAHEHBFIAA___INIT_OFFSET UNITYSDK_OFFSET(0x7C4BF0)

inline static constexpr unsigned int OIAHEHBFIAA_TypeDefinitionIndex = 11367;

struct alignas(8) OIAHEHBFIAA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIAHEHBFIAA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OIAHEHBFIAA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::OIAHEHBFIAA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OIAHEHBFIAA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OIAHEHBFIAA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OIAHEHBFIAA IOPGFOBAPGG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OIAHEHBFIAA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OIAHEHBFIAA_IOPGFOBAPGG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::OIAHEHBFIAA IOPGFOBAPGG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OIAHEHBFIAA EIFONLCJOPG)
	{
		return ((::OIAHEHBFIAA(*)(::FlatBuffers::ByteBuffer*, ::OIAHEHBFIAA))((::PBYTE)hIl2Cpp + OIAHEHBFIAA_IOPGFOBAPGG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIAHEHBFIAA_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIAHEHBFIAA_PPOMNIFACOL_OFFSET))(this);
	}
};
