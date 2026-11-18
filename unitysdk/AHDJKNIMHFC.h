#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define AHDJKNIMHFC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AHDJKNIMHFC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AHDJKNIMHFC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AHDJKNIMHFC_HDJHKBENEPD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define AHDJKNIMHFC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17747B30)
#define AHDJKNIMHFC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AHDJKNIMHFC_TypeDefinitionIndex = 14949;

struct alignas(4) AHDJKNIMHFC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDJKNIMHFC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AHDJKNIMHFC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::AHDJKNIMHFC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AHDJKNIMHFC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AHDJKNIMHFC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 HDJHKBENEPD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDJKNIMHFC_HDJHKBENEPD_OFFSET))(this);
	}

	/*
	static ::AHDJKNIMHFC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::AHDJKNIMHFC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + AHDJKNIMHFC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDJKNIMHFC_ACOEONABOJL_OFFSET))(this);
	}
};
