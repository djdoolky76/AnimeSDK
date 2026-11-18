#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DJNBABOHAJN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DJNBABOHAJN_AJFEEILIIKH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define DJNBABOHAJN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DJNBABOHAJN_DKCOMIFGLAF_OFFSET UNITYSDK_OFFSET(0x761710)
#define DJNBABOHAJN_FEDPLDCPDHN_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define DJNBABOHAJN_GBPMBGFBMEO_OFFSET UNITYSDK_OFFSET(0x755A00)
#define DJNBABOHAJN_GCMEHDMMOEI_OFFSET UNITYSDK_OFFSET(0x757190)
#define DJNBABOHAJN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DJNBABOHAJN_GLKECJPJGDH_OFFSET UNITYSDK_OFFSET(0x758320)
#define DJNBABOHAJN_GOALEBFJGKL_OFFSET UNITYSDK_OFFSET(0x756D50)
#define DJNBABOHAJN_IMOCPDILBHP_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define DJNBABOHAJN_KLAHAEOJPHG_OFFSET UNITYSDK_OFFSET(0x756440)
#define DJNBABOHAJN_LGCDCINFEHD_OFFSET UNITYSDK_OFFSET(0x757290)
#define DJNBABOHAJN_LJKBJOGLAIB_OFFSET UNITYSDK_OFFSET(0x754F10)
#define DJNBABOHAJN_MACNCBCKIEN_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define DJNBABOHAJN_NIBNOFAHOAM_OFFSET UNITYSDK_OFFSET(0x756B10)
#define DJNBABOHAJN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1ADC79C0)
#define DJNBABOHAJN_PBJMNJLLIGC_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define DJNBABOHAJN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DJNBABOHAJN_TypeDefinitionIndex = 11231;

struct alignas(4) DJNBABOHAJN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNBABOHAJN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJNBABOHAJN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* GBPMBGFBMEO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNBABOHAJN_GBPMBGFBMEO_OFFSET))(this);
	}

	/*
	static ::DJNBABOHAJN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DJNBABOHAJN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DJNBABOHAJN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* DKCOMIFGLAF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNBABOHAJN_DKCOMIFGLAF_OFFSET))(this);
	}

	::System::String* GCMEHDMMOEI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNBABOHAJN_GCMEHDMMOEI_OFFSET))(this);
	}

	::System::String* LGCDCINFEHD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNBABOHAJN_LGCDCINFEHD_OFFSET))(this);
	}

	::System::String* AJFEEILIIKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNBABOHAJN_AJFEEILIIKH_OFFSET))(this);
	}

	::System::String* MACNCBCKIEN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNBABOHAJN_MACNCBCKIEN_OFFSET))(this);
	}

	::System::String* LJKBJOGLAIB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNBABOHAJN_LJKBJOGLAIB_OFFSET))(this);
	}

	::System::String* FEDPLDCPDHN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNBABOHAJN_FEDPLDCPDHN_OFFSET))(this);
	}

	/*
	::DJNBABOHAJN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DJNBABOHAJN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJNBABOHAJN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* GLKECJPJGDH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNBABOHAJN_GLKECJPJGDH_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNBABOHAJN_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* GOALEBFJGKL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNBABOHAJN_GOALEBFJGKL_OFFSET))(this);
	}

	::System::Int32 KLAHAEOJPHG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNBABOHAJN_KLAHAEOJPHG_OFFSET))(this);
	}

	::System::String* IMOCPDILBHP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNBABOHAJN_IMOCPDILBHP_OFFSET))(this);
	}

	::System::String* NIBNOFAHOAM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNBABOHAJN_NIBNOFAHOAM_OFFSET))(this);
	}

	::System::String* PBJMNJLLIGC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNBABOHAJN_PBJMNJLLIGC_OFFSET))(this);
	}
};
