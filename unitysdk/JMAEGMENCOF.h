#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define JMAEGMENCOF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JMAEGMENCOF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JMAEGMENCOF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JMAEGMENCOF_HODCDFELMEL_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define JMAEGMENCOF_JDGBILAIGNH_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define JMAEGMENCOF_KKILKOHKMIH_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define JMAEGMENCOF_MAJPKPCLAMJ_OFFSET UNITYSDK_OFFSET(0x761240)
#define JMAEGMENCOF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1954E050)
#define JMAEGMENCOF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JMAEGMENCOF_TypeDefinitionIndex = 10877;

struct alignas(4) JMAEGMENCOF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAEGMENCOF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JMAEGMENCOF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean JDGBILAIGNH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JMAEGMENCOF_JDGBILAIGNH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean KKILKOHKMIH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JMAEGMENCOF_KKILKOHKMIH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 MAJPKPCLAMJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAEGMENCOF_MAJPKPCLAMJ_OFFSET))(this);
	}

	::System::Int32 HODCDFELMEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAEGMENCOF_HODCDFELMEL_OFFSET))(this);
	}

	/*
	static ::JMAEGMENCOF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JMAEGMENCOF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JMAEGMENCOF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::JMAEGMENCOF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JMAEGMENCOF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JMAEGMENCOF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAEGMENCOF_ACOEONABOJL_OFFSET))(this);
	}
};
