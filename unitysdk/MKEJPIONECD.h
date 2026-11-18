#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MKEJPIONECD_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MKEJPIONECD_AGAJEDPIEKD_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define MKEJPIONECD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MKEJPIONECD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MKEJPIONECD_HIHKBMCPIJH_OFFSET UNITYSDK_OFFSET(0x754B50)
#define MKEJPIONECD_IFBAFAPJIDO_OFFSET UNITYSDK_OFFSET(0x757290)
#define MKEJPIONECD_JJBIGEEEEAA_OFFSET UNITYSDK_OFFSET(0x756B10)
#define MKEJPIONECD_JMBLEJJDJAK_OFFSET UNITYSDK_OFFSET(0x756D50)
#define MKEJPIONECD_LBMEFLAOHFP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define MKEJPIONECD_LHLJOIHKDAL_OFFSET UNITYSDK_OFFSET(0x779440)
#define MKEJPIONECD_MDLLGIMAGCP_OFFSET UNITYSDK_OFFSET(0x756B90)
#define MKEJPIONECD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C17D9F0)
#define MKEJPIONECD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MKEJPIONECD_TypeDefinitionIndex = 15683;

struct alignas(4) MKEJPIONECD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEJPIONECD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKEJPIONECD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* JJBIGEEEEAA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEJPIONECD_JJBIGEEEEAA_OFFSET))(this);
	}

	::System::String* LBMEFLAOHFP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEJPIONECD_LBMEFLAOHFP_OFFSET))(this);
	}

	/*
	::MKEJPIONECD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MKEJPIONECD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKEJPIONECD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* AGAJEDPIEKD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEJPIONECD_AGAJEDPIEKD_OFFSET))(this);
	}

	::System::String* IFBAFAPJIDO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEJPIONECD_IFBAFAPJIDO_OFFSET))(this);
	}

	::System::String* JMBLEJJDJAK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEJPIONECD_JMBLEJJDJAK_OFFSET))(this);
	}

	/*
	static ::MKEJPIONECD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MKEJPIONECD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MKEJPIONECD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean LHLJOIHKDAL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEJPIONECD_LHLJOIHKDAL_OFFSET))(this);
	}

	::System::Int32 MDLLGIMAGCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEJPIONECD_MDLLGIMAGCP_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEJPIONECD_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 HIHKBMCPIJH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEJPIONECD_HIHKBMCPIJH_OFFSET))(this);
	}
};
