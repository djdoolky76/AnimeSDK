#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define INIBNMLGNFN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define INIBNMLGNFN_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define INIBNMLGNFN_FEBKNEGBFHI_OFFSET UNITYSDK_OFFSET(0x755D20)
#define INIBNMLGNFN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define INIBNMLGNFN_IPFAFPNCHLK_OFFSET UNITYSDK_OFFSET(0x754B50)
#define INIBNMLGNFN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B132EF0)
#define INIBNMLGNFN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int INIBNMLGNFN_TypeDefinitionIndex = 10381;

struct alignas(4) INIBNMLGNFN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIBNMLGNFN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + INIBNMLGNFN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::INIBNMLGNFN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::INIBNMLGNFN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + INIBNMLGNFN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 FEBKNEGBFHI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INIBNMLGNFN_FEBKNEGBFHI_OFFSET))(this);
	}

	::System::Int32 IPFAFPNCHLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INIBNMLGNFN_IPFAFPNCHLK_OFFSET))(this);
	}

	/*
	::INIBNMLGNFN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::INIBNMLGNFN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + INIBNMLGNFN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INIBNMLGNFN_DNKLBHKEDEM_OFFSET))(this);
	}
};
