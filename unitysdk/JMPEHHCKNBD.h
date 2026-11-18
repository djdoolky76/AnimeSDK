#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HFNMHMDCDOG.h"
#include "unitysdk/HOALPDNFMKD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JMPEHHCKNBD_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JMPEHHCKNBD_AKGMBOBKNHP_OFFSET UNITYSDK_OFFSET(0x7612A0)
#define JMPEHHCKNBD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JMPEHHCKNBD_CGCIMHEHKHH_OFFSET UNITYSDK_OFFSET(0x815160)
#define JMPEHHCKNBD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JMPEHHCKNBD_JJJFLIHHNKN_OFFSET UNITYSDK_OFFSET(0x7F5D10)
#define JMPEHHCKNBD_MLAFJGPJOJF_OFFSET UNITYSDK_OFFSET(0x815200)
#define JMPEHHCKNBD_NAOPMIEPJME_OFFSET UNITYSDK_OFFSET(0x761240)
#define JMPEHHCKNBD_NEACPOMGDIM_OFFSET UNITYSDK_OFFSET(0x754D50)
#define JMPEHHCKNBD_NFILNNFHKEC_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define JMPEHHCKNBD_NOFIPBGELJF_OFFSET UNITYSDK_OFFSET(0x756720)
#define JMPEHHCKNBD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B89C820)
#define JMPEHHCKNBD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JMPEHHCKNBD_TypeDefinitionIndex = 16809;

struct alignas(4) JMPEHHCKNBD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPEHHCKNBD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JMPEHHCKNBD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::JMPEHHCKNBD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JMPEHHCKNBD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JMPEHHCKNBD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean JJJFLIHHNKN(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + JMPEHHCKNBD_JJJFLIHHNKN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NAOPMIEPJME()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPEHHCKNBD_NAOPMIEPJME_OFFSET))(this);
	}

	::System::Int32 NOFIPBGELJF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPEHHCKNBD_NOFIPBGELJF_OFFSET))(this);
	}

	::System::Int32 NFILNNFHKEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPEHHCKNBD_NFILNNFHKEC_OFFSET))(this);
	}

	::System::Boolean AKGMBOBKNHP(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + JMPEHHCKNBD_AKGMBOBKNHP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean CGCIMHEHKHH(::System::Int32 HPMEONKHFGG, ::HOALPDNFMKD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HOALPDNFMKD&))((::PBYTE)hIl2Cpp + JMPEHHCKNBD_CGCIMHEHKHH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NEACPOMGDIM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPEHHCKNBD_NEACPOMGDIM_OFFSET))(this);
	}

	/*
	static ::JMPEHHCKNBD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JMPEHHCKNBD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JMPEHHCKNBD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean MLAFJGPJOJF(::System::Int32 HPMEONKHFGG, ::HFNMHMDCDOG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HFNMHMDCDOG&))((::PBYTE)hIl2Cpp + JMPEHHCKNBD_MLAFJGPJOJF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPEHHCKNBD_ACOEONABOJL_OFFSET))(this);
	}
};
