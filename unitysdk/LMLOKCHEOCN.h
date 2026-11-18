#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define LMLOKCHEOCN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LMLOKCHEOCN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LMLOKCHEOCN_ENODDFPOOHF_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define LMLOKCHEOCN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LMLOKCHEOCN_JKOBBCIPIJO_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define LMLOKCHEOCN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B7F3010)
#define LMLOKCHEOCN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LMLOKCHEOCN_TypeDefinitionIndex = 16718;

struct alignas(4) LMLOKCHEOCN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMLOKCHEOCN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LMLOKCHEOCN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean ENODDFPOOHF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LMLOKCHEOCN_ENODDFPOOHF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::LMLOKCHEOCN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LMLOKCHEOCN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LMLOKCHEOCN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMLOKCHEOCN_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 JKOBBCIPIJO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMLOKCHEOCN_JKOBBCIPIJO_OFFSET))(this);
	}

	/*
	static ::LMLOKCHEOCN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LMLOKCHEOCN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LMLOKCHEOCN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
