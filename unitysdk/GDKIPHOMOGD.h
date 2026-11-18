#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GDKIPHOMOGD_ALLENMMGLEK_OFFSET UNITYSDK_OFFSET(0x7587D0)
#define GDKIPHOMOGD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GDKIPHOMOGD_BKPHOELENPJ_OFFSET UNITYSDK_OFFSET(0x766400)
#define GDKIPHOMOGD_CIOKPIGOKJL_OFFSET UNITYSDK_OFFSET(0x755D20)
#define GDKIPHOMOGD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GDKIPHOMOGD_GKKEEOMPEGE_OFFSET UNITYSDK_OFFSET(0x754970)
#define GDKIPHOMOGD_HAIEPDAPFOH_OFFSET UNITYSDK_OFFSET(0x76FE20)
#define GDKIPHOMOGD_HMPFPCCBKMJ_OFFSET UNITYSDK_OFFSET(0x758320)
#define GDKIPHOMOGD_JFNPOFGNJFC_OFFSET UNITYSDK_OFFSET(0x7D5F20)
#define GDKIPHOMOGD_KNJMDGBPJLC_OFFSET UNITYSDK_OFFSET(0x760650)
#define GDKIPHOMOGD_LCNAPELFGBG_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GDKIPHOMOGD_LJDCFEJHENK_OFFSET UNITYSDK_OFFSET(0x757290)
#define GDKIPHOMOGD_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define GDKIPHOMOGD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19AF91D0)
#define GDKIPHOMOGD_OIDHIIEMDLG_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define GDKIPHOMOGD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GDKIPHOMOGD_TypeDefinitionIndex = 12711;

struct alignas(4) GDKIPHOMOGD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKIPHOMOGD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDKIPHOMOGD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BKPHOELENPJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKIPHOMOGD_BKPHOELENPJ_OFFSET))(this);
	}

	::System::Int32 GKKEEOMPEGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKIPHOMOGD_GKKEEOMPEGE_OFFSET))(this);
	}

	::System::Int32 LCNAPELFGBG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKIPHOMOGD_LCNAPELFGBG_OFFSET))(this);
	}

	/*
	static ::GDKIPHOMOGD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GDKIPHOMOGD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GDKIPHOMOGD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::GDKIPHOMOGD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GDKIPHOMOGD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDKIPHOMOGD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* LJDCFEJHENK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKIPHOMOGD_LJDCFEJHENK_OFFSET))(this);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKIPHOMOGD_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::Int32 OIDHIIEMDLG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKIPHOMOGD_OIDHIIEMDLG_OFFSET))(this);
	}

	::System::Boolean HAIEPDAPFOH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GDKIPHOMOGD_HAIEPDAPFOH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 KNJMDGBPJLC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKIPHOMOGD_KNJMDGBPJLC_OFFSET))(this);
	}

	::System::String* HMPFPCCBKMJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKIPHOMOGD_HMPFPCCBKMJ_OFFSET))(this);
	}

	::System::Boolean JFNPOFGNJFC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKIPHOMOGD_JFNPOFGNJFC_OFFSET))(this);
	}

	::System::Int32 CIOKPIGOKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKIPHOMOGD_CIOKPIGOKJL_OFFSET))(this);
	}

	::System::Int32 ALLENMMGLEK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKIPHOMOGD_ALLENMMGLEK_OFFSET))(this);
	}
};
