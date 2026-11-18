#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JFPMCCPADFM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80E780)
#define JFPMCCPADFM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JFPMCCPADFM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JFPMCCPADFM_IEPFJLDBDCD_1_OFFSET UNITYSDK_OFFSET(0x1B4F6590)
#define JFPMCCPADFM_IEPFJLDBDCD_OFFSET UNITYSDK_OFFSET(0x1B4F6520)
#define JFPMCCPADFM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80E770)
#define JFPMCCPADFM___INIT_OFFSET UNITYSDK_OFFSET(0x80E750)

inline static constexpr unsigned int JFPMCCPADFM_TypeDefinitionIndex = 13804;

struct alignas(8) JFPMCCPADFM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPMCCPADFM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JFPMCCPADFM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JFPMCCPADFM IEPFJLDBDCD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JFPMCCPADFM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JFPMCCPADFM_IEPFJLDBDCD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPMCCPADFM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::JFPMCCPADFM IEPFJLDBDCD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JFPMCCPADFM EIFONLCJOPG)
	{
		return ((::JFPMCCPADFM(*)(::FlatBuffers::ByteBuffer*, ::JFPMCCPADFM))((::PBYTE)hIl2Cpp + JFPMCCPADFM_IEPFJLDBDCD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPMCCPADFM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::JFPMCCPADFM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JFPMCCPADFM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JFPMCCPADFM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
