#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MJGCFMKCMMB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x756B90)
#define MJGCFMKCMMB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MJGCFMKCMMB_ELADOKEPKPJ_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define MJGCFMKCMMB_FDONFGGPEPP_OFFSET UNITYSDK_OFFSET(0x763920)
#define MJGCFMKCMMB_FECAOFACIJM_OFFSET UNITYSDK_OFFSET(0x758320)
#define MJGCFMKCMMB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MJGCFMKCMMB_GGFFBJIJMMG_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define MJGCFMKCMMB_GLLFNGBODLJ_OFFSET UNITYSDK_OFFSET(0x757330)
#define MJGCFMKCMMB_GNAFBBFKAKM_OFFSET UNITYSDK_OFFSET(0x757190)
#define MJGCFMKCMMB_HOJIJHHLANC_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define MJGCFMKCMMB_IIEOBLMCGJL_OFFSET UNITYSDK_OFFSET(0x756D50)
#define MJGCFMKCMMB_JMGBAFIOBKC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MJGCFMKCMMB_LKCCNPOIPGA_OFFSET UNITYSDK_OFFSET(0x755190)
#define MJGCFMKCMMB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1CCE0200)
#define MJGCFMKCMMB_OHFKKNPGGIE_OFFSET UNITYSDK_OFFSET(0x756B10)
#define MJGCFMKCMMB_PBGFAKNFGNP_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define MJGCFMKCMMB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MJGCFMKCMMB_TypeDefinitionIndex = 11051;

struct alignas(4) MJGCFMKCMMB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJGCFMKCMMB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJGCFMKCMMB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* IIEOBLMCGJL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJGCFMKCMMB_IIEOBLMCGJL_OFFSET))(this);
	}

	/*
	::MJGCFMKCMMB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MJGCFMKCMMB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJGCFMKCMMB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LKCCNPOIPGA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJGCFMKCMMB_LKCCNPOIPGA_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJGCFMKCMMB_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::MJGCFMKCMMB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MJGCFMKCMMB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MJGCFMKCMMB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 GLLFNGBODLJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJGCFMKCMMB_GLLFNGBODLJ_OFFSET))(this);
	}

	::System::String* ELADOKEPKPJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJGCFMKCMMB_ELADOKEPKPJ_OFFSET))(this);
	}

	::System::Boolean FDONFGGPEPP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MJGCFMKCMMB_FDONFGGPEPP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GGFFBJIJMMG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJGCFMKCMMB_GGFFBJIJMMG_OFFSET))(this);
	}

	::System::String* PBGFAKNFGNP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJGCFMKCMMB_PBGFAKNFGNP_OFFSET))(this);
	}

	::System::Int32 HOJIJHHLANC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJGCFMKCMMB_HOJIJHHLANC_OFFSET))(this);
	}

	::System::Int32 JMGBAFIOBKC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJGCFMKCMMB_JMGBAFIOBKC_OFFSET))(this);
	}

	::System::String* GNAFBBFKAKM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJGCFMKCMMB_GNAFBBFKAKM_OFFSET))(this);
	}

	::System::String* FECAOFACIJM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJGCFMKCMMB_FECAOFACIJM_OFFSET))(this);
	}

	::System::String* OHFKKNPGGIE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJGCFMKCMMB_OHFKKNPGGIE_OFFSET))(this);
	}
};
