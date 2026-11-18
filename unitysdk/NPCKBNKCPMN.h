#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCKBNKCPMN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x820810)
#define NPCKBNKCPMN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NPCKBNKCPMN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NPCKBNKCPMN_HBCIGLGJGHD_1_OFFSET UNITYSDK_OFFSET(0x1C194760)
#define NPCKBNKCPMN_HBCIGLGJGHD_OFFSET UNITYSDK_OFFSET(0x1C194660)
#define NPCKBNKCPMN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x820800)
#define NPCKBNKCPMN___INIT_OFFSET UNITYSDK_OFFSET(0x8207E0)

inline static constexpr unsigned int NPCKBNKCPMN_TypeDefinitionIndex = 15367;

struct alignas(8) NPCKBNKCPMN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCKBNKCPMN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPCKBNKCPMN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NPCKBNKCPMN HBCIGLGJGHD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NPCKBNKCPMN EIFONLCJOPG)
	{
		return ((::NPCKBNKCPMN(*)(::FlatBuffers::ByteBuffer*, ::NPCKBNKCPMN))((::PBYTE)hIl2Cpp + NPCKBNKCPMN_HBCIGLGJGHD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCKBNKCPMN_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCKBNKCPMN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NPCKBNKCPMN HBCIGLGJGHD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NPCKBNKCPMN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPCKBNKCPMN_HBCIGLGJGHD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::NPCKBNKCPMN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NPCKBNKCPMN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPCKBNKCPMN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
