#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GLANDAGNIJK_AFIKPGHMNCI_OFFSET UNITYSDK_OFFSET(0x755E40)
#define GLANDAGNIJK_BDDHPOBHLKF_OFFSET UNITYSDK_OFFSET(0x758DB0)
#define GLANDAGNIJK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GLANDAGNIJK_BLJKKGNBDOD_OFFSET UNITYSDK_OFFSET(0x756800)
#define GLANDAGNIJK_CKMLCFFCLFM_OFFSET UNITYSDK_OFFSET(0x757290)
#define GLANDAGNIJK_CLIBBOBLPHA_OFFSET UNITYSDK_OFFSET(0x756D50)
#define GLANDAGNIJK_DGHHJKPMIOM_OFFSET UNITYSDK_OFFSET(0x761000)
#define GLANDAGNIJK_DIHHIJGONON_OFFSET UNITYSDK_OFFSET(0x755320)
#define GLANDAGNIJK_EOCDNIMPDJH_OFFSET UNITYSDK_OFFSET(0x754B50)
#define GLANDAGNIJK_FPGACCEGOOF_OFFSET UNITYSDK_OFFSET(0x758E30)
#define GLANDAGNIJK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GLANDAGNIJK_GKDBLJADJLG_OFFSET UNITYSDK_OFFSET(0x757690)
#define GLANDAGNIJK_IEKIAKBFPBH_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define GLANDAGNIJK_IFIBPBKFDPD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GLANDAGNIJK_JALHMMLAGGD_OFFSET UNITYSDK_OFFSET(0x7551E0)
#define GLANDAGNIJK_JOEOJGCPHEE_OFFSET UNITYSDK_OFFSET(0x756280)
#define GLANDAGNIJK_KHGJDPMCBAF_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define GLANDAGNIJK_KLHOJNPBLPP_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define GLANDAGNIJK_KMPMEPNBJNB_OFFSET UNITYSDK_OFFSET(0x756B10)
#define GLANDAGNIJK_KODGANBKKBN_OFFSET UNITYSDK_OFFSET(0x7552C0)
#define GLANDAGNIJK_MDLLGIMAGCP_OFFSET UNITYSDK_OFFSET(0x755190)
#define GLANDAGNIJK_MJBPIFOIKIL_OFFSET UNITYSDK_OFFSET(0x754F10)
#define GLANDAGNIJK_NBIAMNOEBDM_OFFSET UNITYSDK_OFFSET(0x757520)
#define GLANDAGNIJK_OCCCLACBEOF_OFFSET UNITYSDK_OFFSET(0x755890)
#define GLANDAGNIJK_PBOHCIJCJEO_OFFSET UNITYSDK_OFFSET(0x765AF0)
#define GLANDAGNIJK_PGFDKBOEKEG_OFFSET UNITYSDK_OFFSET(0x7C3280)
#define GLANDAGNIJK_PGGAFBFMJKF_OFFSET UNITYSDK_OFFSET(0x762A90)
#define GLANDAGNIJK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GLANDAGNIJK_TypeDefinitionIndex = 15860;

struct alignas(4) GLANDAGNIJK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLANDAGNIJK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLANDAGNIJK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 BLJKKGNBDOD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLANDAGNIJK_BLJKKGNBDOD_OFFSET))(this);
	}

	::System::Boolean PBOHCIJCJEO(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + GLANDAGNIJK_PBOHCIJCJEO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* PGGAFBFMJKF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLANDAGNIJK_PGGAFBFMJKF_OFFSET))(this);
	}

	::System::Int32 IFIBPBKFDPD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLANDAGNIJK_IFIBPBKFDPD_OFFSET))(this);
	}

	::System::String* MJBPIFOIKIL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLANDAGNIJK_MJBPIFOIKIL_OFFSET))(this);
	}

	::System::Int32 FPGACCEGOOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLANDAGNIJK_FPGACCEGOOF_OFFSET))(this);
	}

	::System::Int32 JOEOJGCPHEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLANDAGNIJK_JOEOJGCPHEE_OFFSET))(this);
	}

	::System::String* KHGJDPMCBAF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLANDAGNIJK_KHGJDPMCBAF_OFFSET))(this);
	}

	/*
	::GLANDAGNIJK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GLANDAGNIJK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLANDAGNIJK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 AFIKPGHMNCI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLANDAGNIJK_AFIKPGHMNCI_OFFSET))(this);
	}

	::System::Int32 IEKIAKBFPBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLANDAGNIJK_IEKIAKBFPBH_OFFSET))(this);
	}

	::System::Int32 KODGANBKKBN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLANDAGNIJK_KODGANBKKBN_OFFSET))(this);
	}

	::System::String* KMPMEPNBJNB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLANDAGNIJK_KMPMEPNBJNB_OFFSET))(this);
	}

	::System::String* NBIAMNOEBDM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLANDAGNIJK_NBIAMNOEBDM_OFFSET))(this);
	}

	::System::String* GKDBLJADJLG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLANDAGNIJK_GKDBLJADJLG_OFFSET))(this);
	}

	::System::Int32 OCCCLACBEOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLANDAGNIJK_OCCCLACBEOF_OFFSET))(this);
	}

	::System::String* DGHHJKPMIOM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLANDAGNIJK_DGHHJKPMIOM_OFFSET))(this);
	}

	::System::String* CKMLCFFCLFM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLANDAGNIJK_CKMLCFFCLFM_OFFSET))(this);
	}

	::System::Int32 EOCDNIMPDJH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLANDAGNIJK_EOCDNIMPDJH_OFFSET))(this);
	}

	::System::Boolean PGFDKBOEKEG(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + GLANDAGNIJK_PGFDKBOEKEG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean JALHMMLAGGD(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GLANDAGNIJK_JALHMMLAGGD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean BDDHPOBHLKF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GLANDAGNIJK_BDDHPOBHLKF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 DIHHIJGONON()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLANDAGNIJK_DIHHIJGONON_OFFSET))(this);
	}

	::System::String* CLIBBOBLPHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLANDAGNIJK_CLIBBOBLPHA_OFFSET))(this);
	}

	::System::Int32 MDLLGIMAGCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLANDAGNIJK_MDLLGIMAGCP_OFFSET))(this);
	}

	::System::String* KLHOJNPBLPP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLANDAGNIJK_KLHOJNPBLPP_OFFSET))(this);
	}
};
