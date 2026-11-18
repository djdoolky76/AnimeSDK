#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LCJABMDONNH_ANABHBMDFDC_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define LCJABMDONNH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LCJABMDONNH_CHGNDIPLEKH_OFFSET UNITYSDK_OFFSET(0x755E40)
#define LCJABMDONNH_COJMIANDHOI_OFFSET UNITYSDK_OFFSET(0x7618B0)
#define LCJABMDONNH_DHNOLPMMNCN_OFFSET UNITYSDK_OFFSET(0x758DB0)
#define LCJABMDONNH_EMOMPKLLCDH_OFFSET UNITYSDK_OFFSET(0x756570)
#define LCJABMDONNH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LCJABMDONNH_HAKOCLOIMJJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LCJABMDONNH_HIOHEOEFHGJ_OFFSET UNITYSDK_OFFSET(0x756780)
#define LCJABMDONNH_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x755670)
#define LCJABMDONNH_HOCHJJGFCAF_OFFSET UNITYSDK_OFFSET(0x761000)
#define LCJABMDONNH_HPLOFABHFOJ_OFFSET UNITYSDK_OFFSET(0x755D70)
#define LCJABMDONNH_LLNFIKKEHJH_OFFSET UNITYSDK_OFFSET(0x7563E0)
#define LCJABMDONNH_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define LCJABMDONNH_LPFHBOMNFPE_OFFSET UNITYSDK_OFFSET(0x758E30)
#define LCJABMDONNH_NCHMNOMKBDE_OFFSET UNITYSDK_OFFSET(0x755840)
#define LCJABMDONNH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B6482A0)
#define LCJABMDONNH_PCAMPKLMGLB_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define LCJABMDONNH_PIKDNAEOHAA_OFFSET UNITYSDK_OFFSET(0x756220)
#define LCJABMDONNH_PPOFDDKLLAO_OFFSET UNITYSDK_OFFSET(0x760910)
#define LCJABMDONNH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LCJABMDONNH_TypeDefinitionIndex = 11816;

struct alignas(4) LCJABMDONNH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJABMDONNH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCJABMDONNH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NCHMNOMKBDE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJABMDONNH_NCHMNOMKBDE_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJABMDONNH_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 ANABHBMDFDC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJABMDONNH_ANABHBMDFDC_OFFSET))(this);
	}

	/*
	static ::LCJABMDONNH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LCJABMDONNH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LCJABMDONNH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::LCJABMDONNH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LCJABMDONNH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCJABMDONNH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* HOCHJJGFCAF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJABMDONNH_HOCHJJGFCAF_OFFSET))(this);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJABMDONNH_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::String* PCAMPKLMGLB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJABMDONNH_PCAMPKLMGLB_OFFSET))(this);
	}

	::System::Int32 LLNFIKKEHJH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJABMDONNH_LLNFIKKEHJH_OFFSET))(this);
	}

	::System::Boolean EMOMPKLLCDH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LCJABMDONNH_EMOMPKLLCDH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean HPLOFABHFOJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LCJABMDONNH_HPLOFABHFOJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean DHNOLPMMNCN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LCJABMDONNH_DHNOLPMMNCN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 PPOFDDKLLAO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJABMDONNH_PPOFDDKLLAO_OFFSET))(this);
	}

	::System::Int32 PIKDNAEOHAA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJABMDONNH_PIKDNAEOHAA_OFFSET))(this);
	}

	::System::Int32 LPFHBOMNFPE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJABMDONNH_LPFHBOMNFPE_OFFSET))(this);
	}

	::System::Boolean HIOHEOEFHGJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LCJABMDONNH_HIOHEOEFHGJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 HAKOCLOIMJJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJABMDONNH_HAKOCLOIMJJ_OFFSET))(this);
	}

	::System::String* COJMIANDHOI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJABMDONNH_COJMIANDHOI_OFFSET))(this);
	}

	::System::Int32 CHGNDIPLEKH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJABMDONNH_CHGNDIPLEKH_OFFSET))(this);
	}
};
