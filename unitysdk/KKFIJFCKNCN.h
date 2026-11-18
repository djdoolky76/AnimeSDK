#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KKFIJFCKNCN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x813010)
#define KKFIJFCKNCN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KKFIJFCKNCN_GGDANMGPPFK_1_OFFSET UNITYSDK_OFFSET(0x1B7E6220)
#define KKFIJFCKNCN_GGDANMGPPFK_OFFSET UNITYSDK_OFFSET(0x1B7E61B0)
#define KKFIJFCKNCN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KKFIJFCKNCN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x813000)
#define KKFIJFCKNCN___INIT_OFFSET UNITYSDK_OFFSET(0x812FE0)

inline static constexpr unsigned int KKFIJFCKNCN_TypeDefinitionIndex = 12972;

struct alignas(8) KKFIJFCKNCN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKFIJFCKNCN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KKFIJFCKNCN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKFIJFCKNCN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::KKFIJFCKNCN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KKFIJFCKNCN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KKFIJFCKNCN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KKFIJFCKNCN GGDANMGPPFK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KKFIJFCKNCN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KKFIJFCKNCN_GGDANMGPPFK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKFIJFCKNCN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::KKFIJFCKNCN GGDANMGPPFK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KKFIJFCKNCN EIFONLCJOPG)
	{
		return ((::KKFIJFCKNCN(*)(::FlatBuffers::ByteBuffer*, ::KKFIJFCKNCN))((::PBYTE)hIl2Cpp + KKFIJFCKNCN_GGDANMGPPFK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
