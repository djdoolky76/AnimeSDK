#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JBCJOMPNJFJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76F750)
#define JBCJOMPNJFJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JBCJOMPNJFJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JBCJOMPNJFJ_MJHEODEBALM_1_OFFSET UNITYSDK_OFFSET(0x15A9EAC0)
#define JBCJOMPNJFJ_MJHEODEBALM_OFFSET UNITYSDK_OFFSET(0x15A9EA50)
#define JBCJOMPNJFJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76F790)
#define JBCJOMPNJFJ___INIT_OFFSET UNITYSDK_OFFSET(0x76F730)

inline static constexpr unsigned int JBCJOMPNJFJ_TypeDefinitionIndex = 15130;

struct alignas(8) JBCJOMPNJFJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBCJOMPNJFJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JBCJOMPNJFJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JBCJOMPNJFJ MJHEODEBALM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JBCJOMPNJFJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JBCJOMPNJFJ_MJHEODEBALM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBCJOMPNJFJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::JBCJOMPNJFJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JBCJOMPNJFJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JBCJOMPNJFJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JBCJOMPNJFJ MJHEODEBALM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JBCJOMPNJFJ EIFONLCJOPG)
	{
		return ((::JBCJOMPNJFJ(*)(::FlatBuffers::ByteBuffer*, ::JBCJOMPNJFJ))((::PBYTE)hIl2Cpp + JBCJOMPNJFJ_MJHEODEBALM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBCJOMPNJFJ_PPOMNIFACOL_OFFSET))(this);
	}
};
