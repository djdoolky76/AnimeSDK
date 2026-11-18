#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DHNMONBIKNI_BHBEANPOPNH_OFFSET UNITYSDK_OFFSET(0x755710)
#define DHNMONBIKNI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DHNMONBIKNI_BIALAONOBMD_OFFSET UNITYSDK_OFFSET(0x757830)
#define DHNMONBIKNI_BIGJGLEDBPJ_OFFSET UNITYSDK_OFFSET(0x757290)
#define DHNMONBIKNI_DGBFPGKMICM_OFFSET UNITYSDK_OFFSET(0x7587D0)
#define DHNMONBIKNI_FAOAECMHOPJ_OFFSET UNITYSDK_OFFSET(0x757E20)
#define DHNMONBIKNI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DHNMONBIKNI_HAIEHAILAHL_OFFSET UNITYSDK_OFFSET(0x7552C0)
#define DHNMONBIKNI_INGCPNKPHDM_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define DHNMONBIKNI_IPNIHNDFMHA_OFFSET UNITYSDK_OFFSET(0x757390)
#define DHNMONBIKNI_JIGCIDPFIHP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define DHNMONBIKNI_KIJFKOHPKJE_OFFSET UNITYSDK_OFFSET(0x755A00)
#define DHNMONBIKNI_KINKHOPMBPP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DHNMONBIKNI_LDBINFCBNCE_OFFSET UNITYSDK_OFFSET(0x757190)
#define DHNMONBIKNI_LMICHEJIFLE_OFFSET UNITYSDK_OFFSET(0x754920)
#define DHNMONBIKNI_MABKKBJGJLH_OFFSET UNITYSDK_OFFSET(0x757A30)
#define DHNMONBIKNI_MHAHANOBNCA_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define DHNMONBIKNI_NDKFPAJAIKB_OFFSET UNITYSDK_OFFSET(0x755140)
#define DHNMONBIKNI_NEEFKFFJEJE_OFFSET UNITYSDK_OFFSET(0x761710)
#define DHNMONBIKNI_OGEFMGIMALG_OFFSET UNITYSDK_OFFSET(0x762FE0)
#define DHNMONBIKNI_PDFHIKFLIAF_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define DHNMONBIKNI_PLNBBDEBIII_OFFSET UNITYSDK_OFFSET(0x756D50)
#define DHNMONBIKNI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DHNMONBIKNI_TypeDefinitionIndex = 10715;

struct alignas(4) DHNMONBIKNI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNMONBIKNI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DHNMONBIKNI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* JIGCIDPFIHP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNMONBIKNI_JIGCIDPFIHP_OFFSET))(this);
	}

	::System::Int32 NDKFPAJAIKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNMONBIKNI_NDKFPAJAIKB_OFFSET))(this);
	}

	::System::Int32 HAIEHAILAHL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNMONBIKNI_HAIEHAILAHL_OFFSET))(this);
	}

	::System::Boolean IPNIHNDFMHA(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + DHNMONBIKNI_IPNIHNDFMHA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::DHNMONBIKNI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DHNMONBIKNI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DHNMONBIKNI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LMICHEJIFLE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNMONBIKNI_LMICHEJIFLE_OFFSET))(this);
	}

	::System::String* INGCPNKPHDM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNMONBIKNI_INGCPNKPHDM_OFFSET))(this);
	}

	::System::Int32 MABKKBJGJLH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNMONBIKNI_MABKKBJGJLH_OFFSET))(this);
	}

	::System::String* KIJFKOHPKJE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNMONBIKNI_KIJFKOHPKJE_OFFSET))(this);
	}

	::System::String* BIGJGLEDBPJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNMONBIKNI_BIGJGLEDBPJ_OFFSET))(this);
	}

	::System::String* BHBEANPOPNH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNMONBIKNI_BHBEANPOPNH_OFFSET))(this);
	}

	::System::Boolean BIALAONOBMD(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + DHNMONBIKNI_BIALAONOBMD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 DGBFPGKMICM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNMONBIKNI_DGBFPGKMICM_OFFSET))(this);
	}

	::System::String* PDFHIKFLIAF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNMONBIKNI_PDFHIKFLIAF_OFFSET))(this);
	}

	::System::Int32 OGEFMGIMALG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNMONBIKNI_OGEFMGIMALG_OFFSET))(this);
	}

	::System::String* NEEFKFFJEJE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNMONBIKNI_NEEFKFFJEJE_OFFSET))(this);
	}

	::System::Int32 MHAHANOBNCA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNMONBIKNI_MHAHANOBNCA_OFFSET))(this);
	}

	::System::String* FAOAECMHOPJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNMONBIKNI_FAOAECMHOPJ_OFFSET))(this);
	}

	::System::String* PLNBBDEBIII()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNMONBIKNI_PLNBBDEBIII_OFFSET))(this);
	}

	::System::Int32 KINKHOPMBPP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNMONBIKNI_KINKHOPMBPP_OFFSET))(this);
	}

	::System::String* LDBINFCBNCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNMONBIKNI_LDBINFCBNCE_OFFSET))(this);
	}
};
