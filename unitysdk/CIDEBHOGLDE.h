#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CIDEBHOGLDE_AEMEKAOPJHL_1_OFFSET UNITYSDK_OFFSET(0x1573EE60)
#define CIDEBHOGLDE_AEMEKAOPJHL_OFFSET UNITYSDK_OFFSET(0x1573ED80)
#define CIDEBHOGLDE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CIDEBHOGLDE_FNLMLBBGAHJ_OFFSET UNITYSDK_OFFSET(0x762060)
#define CIDEBHOGLDE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CIDEBHOGLDE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CIDEBHOGLDE_TypeDefinitionIndex = 16298;

struct alignas(4) CIDEBHOGLDE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDEBHOGLDE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CIDEBHOGLDE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::CIDEBHOGLDE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CIDEBHOGLDE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CIDEBHOGLDE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CIDEBHOGLDE AEMEKAOPJHL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CIDEBHOGLDE EIFONLCJOPG)
	{
		return ((::CIDEBHOGLDE(*)(::FlatBuffers::ByteBuffer*, ::CIDEBHOGLDE))((::PBYTE)hIl2Cpp + CIDEBHOGLDE_AEMEKAOPJHL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::String* FNLMLBBGAHJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDEBHOGLDE_FNLMLBBGAHJ_OFFSET))(this);
	}

	/*
	static ::CIDEBHOGLDE AEMEKAOPJHL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CIDEBHOGLDE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CIDEBHOGLDE_AEMEKAOPJHL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
