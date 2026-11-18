#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OMPBJPFCPFH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HGOBJKFDAHJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HGOBJKFDAHJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HGOBJKFDAHJ_CGEFMHIAEAH_OFFSET UNITYSDK_OFFSET(0x7EAEF0)
#define HGOBJKFDAHJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HGOBJKFDAHJ_HPFCMDGLCBB_OFFSET UNITYSDK_OFFSET(0x761240)
#define HGOBJKFDAHJ_IOIENACFPEP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define HGOBJKFDAHJ_NAGALCPILLM_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define HGOBJKFDAHJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B4DE190)
#define HGOBJKFDAHJ_PFHIOKCLPAN_OFFSET UNITYSDK_OFFSET(0x754C20)
#define HGOBJKFDAHJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HGOBJKFDAHJ_TypeDefinitionIndex = 10141;

struct alignas(4) HGOBJKFDAHJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOBJKFDAHJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HGOBJKFDAHJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* IOIENACFPEP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOBJKFDAHJ_IOIENACFPEP_OFFSET))(this);
	}

	::System::Boolean NAGALCPILLM(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HGOBJKFDAHJ_NAGALCPILLM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 PFHIOKCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOBJKFDAHJ_PFHIOKCLPAN_OFFSET))(this);
	}

	/*
	static ::HGOBJKFDAHJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HGOBJKFDAHJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HGOBJKFDAHJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 HPFCMDGLCBB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOBJKFDAHJ_HPFCMDGLCBB_OFFSET))(this);
	}

	/*
	::HGOBJKFDAHJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HGOBJKFDAHJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HGOBJKFDAHJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean CGEFMHIAEAH(::System::Int32 HPMEONKHFGG, ::OMPBJPFCPFH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OMPBJPFCPFH&))((::PBYTE)hIl2Cpp + HGOBJKFDAHJ_CGEFMHIAEAH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOBJKFDAHJ_ACOEONABOJL_OFFSET))(this);
	}
};
