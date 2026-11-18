#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define OPDKBBGGFHP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OPDKBBGGFHP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OPDKBBGGFHP_DFKMJJLNIJD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define OPDKBBGGFHP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OPDKBBGGFHP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B344720)
#define OPDKBBGGFHP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OPDKBBGGFHP_TypeDefinitionIndex = 12850;

struct alignas(4) OPDKBBGGFHP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDKBBGGFHP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OPDKBBGGFHP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DFKMJJLNIJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDKBBGGFHP_DFKMJJLNIJD_OFFSET))(this);
	}

	/*
	::OPDKBBGGFHP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OPDKBBGGFHP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OPDKBBGGFHP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDKBBGGFHP_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::OPDKBBGGFHP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OPDKBBGGFHP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OPDKBBGGFHP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
