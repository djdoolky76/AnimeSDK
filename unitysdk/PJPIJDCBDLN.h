#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PJPIJDCBDLN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PJPIJDCBDLN_AODOANIIOBL_OFFSET UNITYSDK_OFFSET(0x758780)
#define PJPIJDCBDLN_APKOEFIGKCH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define PJPIJDCBDLN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PJPIJDCBDLN_CGMLFNJBJOE_OFFSET UNITYSDK_OFFSET(0x754920)
#define PJPIJDCBDLN_EDICHAKMIDC_OFFSET UNITYSDK_OFFSET(0x763920)
#define PJPIJDCBDLN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PJPIJDCBDLN_HEMOMIBMPHF_OFFSET UNITYSDK_OFFSET(0x755890)
#define PJPIJDCBDLN_LDOBKJOLLEM_OFFSET UNITYSDK_OFFSET(0x756B90)
#define PJPIJDCBDLN_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define PJPIJDCBDLN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1EDC18F0)
#define PJPIJDCBDLN_OMICHABJEGJ_OFFSET UNITYSDK_OFFSET(0x757330)
#define PJPIJDCBDLN_PLNBBDEBIII_OFFSET UNITYSDK_OFFSET(0x757190)
#define PJPIJDCBDLN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PJPIJDCBDLN_TypeDefinitionIndex = 11285;

struct alignas(4) PJPIJDCBDLN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPIJDCBDLN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PJPIJDCBDLN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PJPIJDCBDLN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PJPIJDCBDLN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PJPIJDCBDLN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPIJDCBDLN_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 OMICHABJEGJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPIJDCBDLN_OMICHABJEGJ_OFFSET))(this);
	}

	::System::String* APKOEFIGKCH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPIJDCBDLN_APKOEFIGKCH_OFFSET))(this);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPIJDCBDLN_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::Int32 CGMLFNJBJOE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPIJDCBDLN_CGMLFNJBJOE_OFFSET))(this);
	}

	::System::Boolean EDICHAKMIDC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PJPIJDCBDLN_EDICHAKMIDC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 LDOBKJOLLEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPIJDCBDLN_LDOBKJOLLEM_OFFSET))(this);
	}

	/*
	::PJPIJDCBDLN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PJPIJDCBDLN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PJPIJDCBDLN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* PLNBBDEBIII()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPIJDCBDLN_PLNBBDEBIII_OFFSET))(this);
	}

	::System::Int32 HEMOMIBMPHF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPIJDCBDLN_HEMOMIBMPHF_OFFSET))(this);
	}

	::System::Int32 AODOANIIOBL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPIJDCBDLN_AODOANIIOBL_OFFSET))(this);
	}
};
