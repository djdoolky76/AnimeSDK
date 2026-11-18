#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define JEFGAHIGDBD_ABCLIDNADEG_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JEFGAHIGDBD_BCACLHDEJHP_OFFSET UNITYSDK_OFFSET(0x755C70)
#define JEFGAHIGDBD_BDHLENIFDJJ_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define JEFGAHIGDBD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JEFGAHIGDBD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JEFGAHIGDBD_IFKNEHPGFBJ_OFFSET UNITYSDK_OFFSET(0x754920)
#define JEFGAHIGDBD_LKMONAFPKEJ_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define JEFGAHIGDBD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1933EA50)
#define JEFGAHIGDBD_PNIJMOCLINL_OFFSET UNITYSDK_OFFSET(0x756B90)
#define JEFGAHIGDBD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JEFGAHIGDBD_TypeDefinitionIndex = 11680;

struct alignas(4) JEFGAHIGDBD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEFGAHIGDBD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEFGAHIGDBD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::JEFGAHIGDBD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JEFGAHIGDBD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEFGAHIGDBD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ABCLIDNADEG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEFGAHIGDBD_ABCLIDNADEG_OFFSET))(this);
	}

	::System::Int32 IFKNEHPGFBJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEFGAHIGDBD_IFKNEHPGFBJ_OFFSET))(this);
	}

	::System::Int32 BDHLENIFDJJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEFGAHIGDBD_BDHLENIFDJJ_OFFSET))(this);
	}

	::System::Boolean LKMONAFPKEJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JEFGAHIGDBD_LKMONAFPKEJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::JEFGAHIGDBD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JEFGAHIGDBD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JEFGAHIGDBD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 BCACLHDEJHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEFGAHIGDBD_BCACLHDEJHP_OFFSET))(this);
	}

	::System::Int32 PNIJMOCLINL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEFGAHIGDBD_PNIJMOCLINL_OFFSET))(this);
	}
};
