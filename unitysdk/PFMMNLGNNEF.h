#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PFMMNLGNNEF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PFMMNLGNNEF_BDJDPCEGHBH_OFFSET UNITYSDK_OFFSET(0x7563E0)
#define PFMMNLGNNEF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PFMMNLGNNEF_CMOIBDJNBNI_OFFSET UNITYSDK_OFFSET(0x755890)
#define PFMMNLGNNEF_ENIEBAEMFHG_OFFSET UNITYSDK_OFFSET(0x755790)
#define PFMMNLGNNEF_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x755710)
#define PFMMNLGNNEF_GANAHMCNBHP_OFFSET UNITYSDK_OFFSET(0x758780)
#define PFMMNLGNNEF_GEFPBOMLNHJ_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define PFMMNLGNNEF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PFMMNLGNNEF_JADHELLDBML_OFFSET UNITYSDK_OFFSET(0x754B50)
#define PFMMNLGNNEF_JDAIGAJJBPJ_OFFSET UNITYSDK_OFFSET(0x755320)
#define PFMMNLGNNEF_JIFNOAAOLFG_OFFSET UNITYSDK_OFFSET(0x756780)
#define PFMMNLGNNEF_JMNININIFAD_OFFSET UNITYSDK_OFFSET(0x756220)
#define PFMMNLGNNEF_MAHAMPAJFAE_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define PFMMNLGNNEF_MBKDAHKIDLE_OFFSET UNITYSDK_OFFSET(0x756570)
#define PFMMNLGNNEF_NJDCPNJHADK_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define PFMMNLGNNEF_NNGLEIDGPDA_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define PFMMNLGNNEF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BABFA50)
#define PFMMNLGNNEF_OEEDHKIBMOM_OFFSET UNITYSDK_OFFSET(0x756440)
#define PFMMNLGNNEF_ONGHHCGBDJJ_OFFSET UNITYSDK_OFFSET(0x754970)
#define PFMMNLGNNEF_PIPBPLEIPFK_OFFSET UNITYSDK_OFFSET(0x755E40)
#define PFMMNLGNNEF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PFMMNLGNNEF_TypeDefinitionIndex = 11903;

struct alignas(4) PFMMNLGNNEF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMMNLGNNEF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFMMNLGNNEF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean JIFNOAAOLFG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PFMMNLGNNEF_JIFNOAAOLFG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 CMOIBDJNBNI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMMNLGNNEF_CMOIBDJNBNI_OFFSET))(this);
	}

	::System::Boolean MBKDAHKIDLE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PFMMNLGNNEF_MBKDAHKIDLE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean NNGLEIDGPDA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PFMMNLGNNEF_NNGLEIDGPDA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ONGHHCGBDJJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMMNLGNNEF_ONGHHCGBDJJ_OFFSET))(this);
	}

	::System::Int32 OEEDHKIBMOM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMMNLGNNEF_OEEDHKIBMOM_OFFSET))(this);
	}

	::System::Boolean GEFPBOMLNHJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PFMMNLGNNEF_GEFPBOMLNHJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ENIEBAEMFHG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMMNLGNNEF_ENIEBAEMFHG_OFFSET))(this);
	}

	/*
	::PFMMNLGNNEF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PFMMNLGNNEF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFMMNLGNNEF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BDJDPCEGHBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMMNLGNNEF_BDJDPCEGHBH_OFFSET))(this);
	}

	::System::Int32 JMNININIFAD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMMNLGNNEF_JMNININIFAD_OFFSET))(this);
	}

	::System::Int32 GANAHMCNBHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMMNLGNNEF_GANAHMCNBHP_OFFSET))(this);
	}

	::System::Int32 JDAIGAJJBPJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMMNLGNNEF_JDAIGAJJBPJ_OFFSET))(this);
	}

	::System::Int32 MAHAMPAJFAE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMMNLGNNEF_MAHAMPAJFAE_OFFSET))(this);
	}

	/*
	static ::PFMMNLGNNEF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PFMMNLGNNEF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PFMMNLGNNEF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 PIPBPLEIPFK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMMNLGNNEF_PIPBPLEIPFK_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMMNLGNNEF_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 NJDCPNJHADK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMMNLGNNEF_NJDCPNJHADK_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMMNLGNNEF_ENJENAJGHFI_OFFSET))(this);
	}

	::System::Int32 JADHELLDBML()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMMNLGNNEF_JADHELLDBML_OFFSET))(this);
	}
};
