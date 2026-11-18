#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BLOOLBKMAHK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F19A0)
#define BLOOLBKMAHK_EGGNJNHDEAO_1_OFFSET UNITYSDK_OFFSET(0x19F0EB00)
#define BLOOLBKMAHK_EGGNJNHDEAO_OFFSET UNITYSDK_OFFSET(0x19F221C0)
#define BLOOLBKMAHK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BLOOLBKMAHK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BLOOLBKMAHK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F1990)
#define BLOOLBKMAHK___INIT_OFFSET UNITYSDK_OFFSET(0x7F1970)

inline static constexpr unsigned int BLOOLBKMAHK_TypeDefinitionIndex = 17650;

struct alignas(8) BLOOLBKMAHK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOOLBKMAHK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BLOOLBKMAHK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOOLBKMAHK_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOOLBKMAHK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::BLOOLBKMAHK EGGNJNHDEAO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BLOOLBKMAHK EIFONLCJOPG)
	{
		return ((::BLOOLBKMAHK(*)(::FlatBuffers::ByteBuffer*, ::BLOOLBKMAHK))((::PBYTE)hIl2Cpp + BLOOLBKMAHK_EGGNJNHDEAO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::BLOOLBKMAHK EGGNJNHDEAO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BLOOLBKMAHK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BLOOLBKMAHK_EGGNJNHDEAO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::BLOOLBKMAHK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BLOOLBKMAHK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BLOOLBKMAHK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
