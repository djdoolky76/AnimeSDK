#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EEHPMPHGMIJ_ABDOKPONNNC_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define EEHPMPHGMIJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EEHPMPHGMIJ_BIDLKCFGOGJ_OFFSET UNITYSDK_OFFSET(0x756B90)
#define EEHPMPHGMIJ_DCMFMAGKHDK_OFFSET UNITYSDK_OFFSET(0x758780)
#define EEHPMPHGMIJ_DIDMBFLIJFM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EEHPMPHGMIJ_EDGLJDPBOLN_OFFSET UNITYSDK_OFFSET(0x754920)
#define EEHPMPHGMIJ_EOGOOIPJLNA_OFFSET UNITYSDK_OFFSET(0x758200)
#define EEHPMPHGMIJ_EONGFLBBKDP_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define EEHPMPHGMIJ_EPKHFGDILDG_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define EEHPMPHGMIJ_FCNAPKCGKMF_OFFSET UNITYSDK_OFFSET(0x7553C0)
#define EEHPMPHGMIJ_FJNABIDMLHM_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define EEHPMPHGMIJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EEHPMPHGMIJ_HDFBKMNKKHM_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define EEHPMPHGMIJ_JALLIFCMONP_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define EEHPMPHGMIJ_KIMEHKJOAMG_OFFSET UNITYSDK_OFFSET(0x754970)
#define EEHPMPHGMIJ_LFJGIAOHHMD_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define EEHPMPHGMIJ_LONIODEFHJM_OFFSET UNITYSDK_OFFSET(0x756440)
#define EEHPMPHGMIJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A197960)
#define EEHPMPHGMIJ_OFACIMGNHHO_OFFSET UNITYSDK_OFFSET(0x7F5D10)
#define EEHPMPHGMIJ_OIMAMCKKKKB_OFFSET UNITYSDK_OFFSET(0x7575F0)
#define EEHPMPHGMIJ_PAEKEAFEHKI_OFFSET UNITYSDK_OFFSET(0x755320)
#define EEHPMPHGMIJ_PKGGGDLFMPE_OFFSET UNITYSDK_OFFSET(0x755440)
#define EEHPMPHGMIJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EEHPMPHGMIJ_TypeDefinitionIndex = 10792;

struct alignas(4) EEHPMPHGMIJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHPMPHGMIJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EEHPMPHGMIJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean FCNAPKCGKMF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EEHPMPHGMIJ_FCNAPKCGKMF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 KIMEHKJOAMG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHPMPHGMIJ_KIMEHKJOAMG_OFFSET))(this);
	}

	::System::Int32 BIDLKCFGOGJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHPMPHGMIJ_BIDLKCFGOGJ_OFFSET))(this);
	}

	::System::Boolean OIMAMCKKKKB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHPMPHGMIJ_OIMAMCKKKKB_OFFSET))(this);
	}

	::System::Int32 FJNABIDMLHM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHPMPHGMIJ_FJNABIDMLHM_OFFSET))(this);
	}

	::System::Int32 DIDMBFLIJFM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHPMPHGMIJ_DIDMBFLIJFM_OFFSET))(this);
	}

	::System::String* HDFBKMNKKHM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHPMPHGMIJ_HDFBKMNKKHM_OFFSET))(this);
	}

	::System::Int32 PAEKEAFEHKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHPMPHGMIJ_PAEKEAFEHKI_OFFSET))(this);
	}

	::System::String* JALLIFCMONP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHPMPHGMIJ_JALLIFCMONP_OFFSET))(this);
	}

	/*
	static ::EEHPMPHGMIJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EEHPMPHGMIJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EEHPMPHGMIJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::EEHPMPHGMIJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EEHPMPHGMIJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EEHPMPHGMIJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DCMFMAGKHDK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHPMPHGMIJ_DCMFMAGKHDK_OFFSET))(this);
	}

	::System::Boolean EOGOOIPJLNA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EEHPMPHGMIJ_EOGOOIPJLNA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* ABDOKPONNNC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHPMPHGMIJ_ABDOKPONNNC_OFFSET))(this);
	}

	::System::String* EPKHFGDILDG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHPMPHGMIJ_EPKHFGDILDG_OFFSET))(this);
	}

	::System::Int32 LONIODEFHJM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHPMPHGMIJ_LONIODEFHJM_OFFSET))(this);
	}

	::System::Int32 PKGGGDLFMPE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHPMPHGMIJ_PKGGGDLFMPE_OFFSET))(this);
	}

	::System::Int32 EDGLJDPBOLN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHPMPHGMIJ_EDGLJDPBOLN_OFFSET))(this);
	}

	::System::Boolean OFACIMGNHHO(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + EEHPMPHGMIJ_OFACIMGNHHO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* LFJGIAOHHMD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHPMPHGMIJ_LFJGIAOHHMD_OFFSET))(this);
	}

	::System::Int32 EONGFLBBKDP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHPMPHGMIJ_EONGFLBBKDP_OFFSET))(this);
	}
};
