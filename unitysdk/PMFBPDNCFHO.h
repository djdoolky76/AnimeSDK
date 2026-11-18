#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PMFBPDNCFHO_AAMCMGOFCPB_OFFSET UNITYSDK_OFFSET(0x756360)
#define PMFBPDNCFHO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PMFBPDNCFHO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PMFBPDNCFHO_CHIOMGGNHME_OFFSET UNITYSDK_OFFSET(0x754C20)
#define PMFBPDNCFHO_EECOPHGKOFH_OFFSET UNITYSDK_OFFSET(0x755C70)
#define PMFBPDNCFHO_FJGFCBNPNJL_OFFSET UNITYSDK_OFFSET(0x757190)
#define PMFBPDNCFHO_FPGBOOEFDGG_OFFSET UNITYSDK_OFFSET(0x755D20)
#define PMFBPDNCFHO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PMFBPDNCFHO_IBPACBJOEBJ_OFFSET UNITYSDK_OFFSET(0x756B10)
#define PMFBPDNCFHO_IFILNMEDHOC_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define PMFBPDNCFHO_JGICFKIOBFO_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define PMFBPDNCFHO_LPICBNOBIEE_OFFSET UNITYSDK_OFFSET(0x757290)
#define PMFBPDNCFHO_NELAKPNLBEG_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define PMFBPDNCFHO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1AD9CA50)
#define PMFBPDNCFHO_OFNBFDPOHBG_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define PMFBPDNCFHO_POPCOODPNOK_OFFSET UNITYSDK_OFFSET(0x761240)
#define PMFBPDNCFHO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PMFBPDNCFHO_TypeDefinitionIndex = 15700;

struct alignas(4) PMFBPDNCFHO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFBPDNCFHO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMFBPDNCFHO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* IBPACBJOEBJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFBPDNCFHO_IBPACBJOEBJ_OFFSET))(this);
	}

	::System::String* FJGFCBNPNJL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFBPDNCFHO_FJGFCBNPNJL_OFFSET))(this);
	}

	::System::Int32 CHIOMGGNHME()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFBPDNCFHO_CHIOMGGNHME_OFFSET))(this);
	}

	::System::Int32 IFILNMEDHOC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFBPDNCFHO_IFILNMEDHOC_OFFSET))(this);
	}

	::System::String* OFNBFDPOHBG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFBPDNCFHO_OFNBFDPOHBG_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFBPDNCFHO_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 POPCOODPNOK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFBPDNCFHO_POPCOODPNOK_OFFSET))(this);
	}

	::System::Int32 FPGBOOEFDGG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFBPDNCFHO_FPGBOOEFDGG_OFFSET))(this);
	}

	::System::Boolean AAMCMGOFCPB(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PMFBPDNCFHO_AAMCMGOFCPB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 EECOPHGKOFH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFBPDNCFHO_EECOPHGKOFH_OFFSET))(this);
	}

	::System::Boolean JGICFKIOBFO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PMFBPDNCFHO_JGICFKIOBFO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean NELAKPNLBEG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PMFBPDNCFHO_NELAKPNLBEG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* LPICBNOBIEE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFBPDNCFHO_LPICBNOBIEE_OFFSET))(this);
	}

	/*
	static ::PMFBPDNCFHO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PMFBPDNCFHO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PMFBPDNCFHO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::PMFBPDNCFHO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PMFBPDNCFHO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMFBPDNCFHO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
