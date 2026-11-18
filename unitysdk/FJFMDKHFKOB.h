#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JLPHBPHJDPK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FJFMDKHFKOB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FJFMDKHFKOB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x817A70)
#define FJFMDKHFKOB_CCNAKEKHEOG_1_OFFSET UNITYSDK_OFFSET(0x1B9C59F0)
#define FJFMDKHFKOB_CCNAKEKHEOG_OFFSET UNITYSDK_OFFSET(0x1B9C58B0)
#define FJFMDKHFKOB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FJFMDKHFKOB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FJFMDKHFKOB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x817A60)
#define FJFMDKHFKOB___INIT_OFFSET UNITYSDK_OFFSET(0x817A40)

inline static constexpr unsigned int FJFMDKHFKOB_TypeDefinitionIndex = 17556;

struct alignas(8) FJFMDKHFKOB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFMDKHFKOB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJFMDKHFKOB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFMDKHFKOB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::FJFMDKHFKOB CCNAKEKHEOG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FJFMDKHFKOB EIFONLCJOPG)
	{
		return ((::FJFMDKHFKOB(*)(::FlatBuffers::ByteBuffer*, ::FJFMDKHFKOB))((::PBYTE)hIl2Cpp + FJFMDKHFKOB_CCNAKEKHEOG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFMDKHFKOB_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JLPHBPHJDPK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JLPHBPHJDPK&))((::PBYTE)hIl2Cpp + FJFMDKHFKOB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::FJFMDKHFKOB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FJFMDKHFKOB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJFMDKHFKOB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FJFMDKHFKOB CCNAKEKHEOG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FJFMDKHFKOB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJFMDKHFKOB_CCNAKEKHEOG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
