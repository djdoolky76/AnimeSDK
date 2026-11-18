#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define EBCGFIAOADM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EBCGFIAOADM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EBCGFIAOADM_EFPLAOBBKPJ_OFFSET UNITYSDK_OFFSET(0x755E40)
#define EBCGFIAOADM_EKCBKDGPPNB_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define EBCGFIAOADM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EBCGFIAOADM_LJNBIAFBMIL_OFFSET UNITYSDK_OFFSET(0x754920)
#define EBCGFIAOADM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A55CEE0)
#define EBCGFIAOADM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EBCGFIAOADM_TypeDefinitionIndex = 12597;

struct alignas(4) EBCGFIAOADM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCGFIAOADM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBCGFIAOADM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EBCGFIAOADM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EBCGFIAOADM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EBCGFIAOADM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::EBCGFIAOADM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EBCGFIAOADM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBCGFIAOADM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 EKCBKDGPPNB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCGFIAOADM_EKCBKDGPPNB_OFFSET))(this);
	}

	::System::Int32 LJNBIAFBMIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCGFIAOADM_LJNBIAFBMIL_OFFSET))(this);
	}

	::System::Int32 EFPLAOBBKPJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCGFIAOADM_EFPLAOBBKPJ_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCGFIAOADM_ACOEONABOJL_OFFSET))(this);
	}
};
