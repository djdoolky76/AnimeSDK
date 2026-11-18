#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define MHGECKJKDHJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MHGECKJKDHJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MHGECKJKDHJ_EDBIIAJKCPN_OFFSET UNITYSDK_OFFSET(0x754B50)
#define MHGECKJKDHJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MHGECKJKDHJ_IIBDCIPKOHL_OFFSET UNITYSDK_OFFSET(0x755C70)
#define MHGECKJKDHJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1AD75640)
#define MHGECKJKDHJ_PNJOCJGNGCJ_OFFSET UNITYSDK_OFFSET(0x754920)
#define MHGECKJKDHJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MHGECKJKDHJ_TypeDefinitionIndex = 16949;

struct alignas(4) MHGECKJKDHJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGECKJKDHJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHGECKJKDHJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGECKJKDHJ_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 IIBDCIPKOHL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGECKJKDHJ_IIBDCIPKOHL_OFFSET))(this);
	}

	::System::Int32 EDBIIAJKCPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGECKJKDHJ_EDBIIAJKCPN_OFFSET))(this);
	}

	::System::Int32 PNJOCJGNGCJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGECKJKDHJ_PNJOCJGNGCJ_OFFSET))(this);
	}

	/*
	::MHGECKJKDHJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MHGECKJKDHJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHGECKJKDHJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MHGECKJKDHJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MHGECKJKDHJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MHGECKJKDHJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
