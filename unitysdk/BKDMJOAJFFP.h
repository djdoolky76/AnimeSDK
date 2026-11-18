#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BKDMJOAJFFP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BKDMJOAJFFP_AEBOKBEAJIC_OFFSET UNITYSDK_OFFSET(0x7578F0)
#define BKDMJOAJFFP_APMGLCCPLBJ_OFFSET UNITYSDK_OFFSET(0x755D20)
#define BKDMJOAJFFP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BKDMJOAJFFP_BMJNPIDOPNO_OFFSET UNITYSDK_OFFSET(0x755E40)
#define BKDMJOAJFFP_CALIJMDFCHM_OFFSET UNITYSDK_OFFSET(0x756220)
#define BKDMJOAJFFP_EOPJJMOMPFK_OFFSET UNITYSDK_OFFSET(0x757B50)
#define BKDMJOAJFFP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BKDMJOAJFFP_IGLFKIBEGGH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define BKDMJOAJFFP_IMPLDHCOHEB_OFFSET UNITYSDK_OFFSET(0x756B10)
#define BKDMJOAJFFP_JIEBDFEFHAI_OFFSET UNITYSDK_OFFSET(0x756B90)
#define BKDMJOAJFFP_JJPKNIJAAGA_OFFSET UNITYSDK_OFFSET(0x754E10)
#define BKDMJOAJFFP_LBGFEIDDBGE_OFFSET UNITYSDK_OFFSET(0x757330)
#define BKDMJOAJFFP_MHMABJFIFFF_OFFSET UNITYSDK_OFFSET(0x7588B0)
#define BKDMJOAJFFP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1ADB5850)
#define BKDMJOAJFFP_OIDAKFHNLCM_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define BKDMJOAJFFP_OLCIIBINHOM_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define BKDMJOAJFFP_PGOPHHBCJCI_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define BKDMJOAJFFP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BKDMJOAJFFP_TypeDefinitionIndex = 12982;

struct alignas(4) BKDMJOAJFFP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKDMJOAJFFP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BKDMJOAJFFP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 APMGLCCPLBJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKDMJOAJFFP_APMGLCCPLBJ_OFFSET))(this);
	}

	::System::Boolean AEBOKBEAJIC(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + BKDMJOAJFFP_AEBOKBEAJIC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 PGOPHHBCJCI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKDMJOAJFFP_PGOPHHBCJCI_OFFSET))(this);
	}

	::System::Boolean EOPJJMOMPFK(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + BKDMJOAJFFP_EOPJJMOMPFK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean MHMABJFIFFF(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + BKDMJOAJFFP_MHMABJFIFFF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean JJPKNIJAAGA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKDMJOAJFFP_JJPKNIJAAGA_OFFSET))(this);
	}

	::System::Int32 LBGFEIDDBGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKDMJOAJFFP_LBGFEIDDBGE_OFFSET))(this);
	}

	::System::String* IMPLDHCOHEB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKDMJOAJFFP_IMPLDHCOHEB_OFFSET))(this);
	}

	/*
	static ::BKDMJOAJFFP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BKDMJOAJFFP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BKDMJOAJFFP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* IGLFKIBEGGH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKDMJOAJFFP_IGLFKIBEGGH_OFFSET))(this);
	}

	::System::Int32 OIDAKFHNLCM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKDMJOAJFFP_OIDAKFHNLCM_OFFSET))(this);
	}

	::System::Int32 JIEBDFEFHAI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKDMJOAJFFP_JIEBDFEFHAI_OFFSET))(this);
	}

	::System::String* OLCIIBINHOM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKDMJOAJFFP_OLCIIBINHOM_OFFSET))(this);
	}

	::System::Int32 BMJNPIDOPNO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKDMJOAJFFP_BMJNPIDOPNO_OFFSET))(this);
	}

	::System::Int32 CALIJMDFCHM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKDMJOAJFFP_CALIJMDFCHM_OFFSET))(this);
	}

	/*
	::BKDMJOAJFFP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BKDMJOAJFFP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BKDMJOAJFFP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKDMJOAJFFP_ACOEONABOJL_OFFSET))(this);
	}
};
