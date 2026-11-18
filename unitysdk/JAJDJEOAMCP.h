#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JAJDJEOAMCP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JAJDJEOAMCP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JAJDJEOAMCP_BHMMKDGCLGB_OFFSET UNITYSDK_OFFSET(0x757190)
#define JAJDJEOAMCP_BLLMJMIPJKN_OFFSET UNITYSDK_OFFSET(0x765A30)
#define JAJDJEOAMCP_ELHJOMPHFNM_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define JAJDJEOAMCP_ELJPPPBJKAJ_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define JAJDJEOAMCP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JAJDJEOAMCP_IBOOEAEHNMN_OFFSET UNITYSDK_OFFSET(0x7561C0)
#define JAJDJEOAMCP_ICEPJNCOIBO_OFFSET UNITYSDK_OFFSET(0x758320)
#define JAJDJEOAMCP_LFPFCAFBOEK_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define JAJDJEOAMCP_MFGPCPDNOKO_OFFSET UNITYSDK_OFFSET(0x761710)
#define JAJDJEOAMCP_MLBBHFKALPL_OFFSET UNITYSDK_OFFSET(0x754920)
#define JAJDJEOAMCP_NEBLIFEABCP_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define JAJDJEOAMCP_NEHMBENIPLB_OFFSET UNITYSDK_OFFSET(0x758780)
#define JAJDJEOAMCP_NHHCNEDKJBG_OFFSET UNITYSDK_OFFSET(0x755C70)
#define JAJDJEOAMCP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x193567B0)
#define JAJDJEOAMCP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JAJDJEOAMCP_TypeDefinitionIndex = 14897;

struct alignas(4) JAJDJEOAMCP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJDJEOAMCP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JAJDJEOAMCP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* MFGPCPDNOKO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJDJEOAMCP_MFGPCPDNOKO_OFFSET))(this);
	}

	::System::Int32 MLBBHFKALPL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJDJEOAMCP_MLBBHFKALPL_OFFSET))(this);
	}

	::System::String* BHMMKDGCLGB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJDJEOAMCP_BHMMKDGCLGB_OFFSET))(this);
	}

	::System::Int32 IBOOEAEHNMN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJDJEOAMCP_IBOOEAEHNMN_OFFSET))(this);
	}

	::System::Int32 ELHJOMPHFNM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJDJEOAMCP_ELHJOMPHFNM_OFFSET))(this);
	}

	/*
	::JAJDJEOAMCP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JAJDJEOAMCP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JAJDJEOAMCP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BLLMJMIPJKN(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + JAJDJEOAMCP_BLLMJMIPJKN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NHHCNEDKJBG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJDJEOAMCP_NHHCNEDKJBG_OFFSET))(this);
	}

	::System::String* LFPFCAFBOEK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJDJEOAMCP_LFPFCAFBOEK_OFFSET))(this);
	}

	::System::String* NEBLIFEABCP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJDJEOAMCP_NEBLIFEABCP_OFFSET))(this);
	}

	/*
	static ::JAJDJEOAMCP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JAJDJEOAMCP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JAJDJEOAMCP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJDJEOAMCP_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 NEHMBENIPLB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJDJEOAMCP_NEHMBENIPLB_OFFSET))(this);
	}

	::System::String* ELJPPPBJKAJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJDJEOAMCP_ELJPPPBJKAJ_OFFSET))(this);
	}

	::System::String* ICEPJNCOIBO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJDJEOAMCP_ICEPJNCOIBO_OFFSET))(this);
	}
};
