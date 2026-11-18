#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GENECIMHLIK_APJENGNMAOC_1_OFFSET UNITYSDK_OFFSET(0x19AFA5E0)
#define GENECIMHLIK_APJENGNMAOC_OFFSET UNITYSDK_OFFSET(0x19AFA580)
#define GENECIMHLIK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EB440)
#define GENECIMHLIK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GENECIMHLIK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GENECIMHLIK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EB430)
#define GENECIMHLIK___INIT_OFFSET UNITYSDK_OFFSET(0x7EB410)

inline static constexpr unsigned int GENECIMHLIK_TypeDefinitionIndex = 11042;

struct alignas(8) GENECIMHLIK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GENECIMHLIK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GENECIMHLIK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GENECIMHLIK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::GENECIMHLIK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GENECIMHLIK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GENECIMHLIK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GENECIMHLIK APJENGNMAOC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GENECIMHLIK EIFONLCJOPG)
	{
		return ((::GENECIMHLIK(*)(::FlatBuffers::ByteBuffer*, ::GENECIMHLIK))((::PBYTE)hIl2Cpp + GENECIMHLIK_APJENGNMAOC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GENECIMHLIK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GENECIMHLIK APJENGNMAOC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GENECIMHLIK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GENECIMHLIK_APJENGNMAOC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
