#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NAHGJEFMIPK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x802A10)
#define NAHGJEFMIPK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NAHGJEFMIPK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NAHGJEFMIPK_LJGIFFPDNEL_1_OFFSET UNITYSDK_OFFSET(0x1AB12520)
#define NAHGJEFMIPK_LJGIFFPDNEL_OFFSET UNITYSDK_OFFSET(0x1AB124B0)
#define NAHGJEFMIPK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x802A50)
#define NAHGJEFMIPK___INIT_OFFSET UNITYSDK_OFFSET(0x8029F0)

inline static constexpr unsigned int NAHGJEFMIPK_TypeDefinitionIndex = 16604;

struct alignas(8) NAHGJEFMIPK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAHGJEFMIPK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NAHGJEFMIPK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::NAHGJEFMIPK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NAHGJEFMIPK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NAHGJEFMIPK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAHGJEFMIPK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NAHGJEFMIPK LJGIFFPDNEL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NAHGJEFMIPK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NAHGJEFMIPK_LJGIFFPDNEL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::NAHGJEFMIPK LJGIFFPDNEL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NAHGJEFMIPK EIFONLCJOPG)
	{
		return ((::NAHGJEFMIPK(*)(::FlatBuffers::ByteBuffer*, ::NAHGJEFMIPK))((::PBYTE)hIl2Cpp + NAHGJEFMIPK_LJGIFFPDNEL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAHGJEFMIPK_GHKKNCCLPAN_OFFSET))(this);
	}
};
