#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IFMDDIOEJGI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FJHDNOANCNE_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FJHDNOANCNE_BCBKMELCNJM_OFFSET UNITYSDK_OFFSET(0x8084B0)
#define FJHDNOANCNE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FJHDNOANCNE_EDALLPPEDIO_OFFSET UNITYSDK_OFFSET(0x757450)
#define FJHDNOANCNE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FJHDNOANCNE_GGOBDCILAHM_OFFSET UNITYSDK_OFFSET(0x760910)
#define FJHDNOANCNE_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FJHDNOANCNE_IONGPDGDBKL_OFFSET UNITYSDK_OFFSET(0x754970)
#define FJHDNOANCNE_JEBMBHFOLCL_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define FJHDNOANCNE_JHKGLJCDBJE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define FJHDNOANCNE_LABBPAOONKA_OFFSET UNITYSDK_OFFSET(0x7C3D50)
#define FJHDNOANCNE_LMPMGEBECIK_OFFSET UNITYSDK_OFFSET(0x7627E0)
#define FJHDNOANCNE_LNMNLMNCLEG_OFFSET UNITYSDK_OFFSET(0x756B90)
#define FJHDNOANCNE_MKOILCDKELM_OFFSET UNITYSDK_OFFSET(0x761980)
#define FJHDNOANCNE_NLNODLILGMM_OFFSET UNITYSDK_OFFSET(0x755670)
#define FJHDNOANCNE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1ADE52B0)
#define FJHDNOANCNE_OECIOIKGBEG_OFFSET UNITYSDK_OFFSET(0x7628B0)
#define FJHDNOANCNE_PAJGAKMCLCP_OFFSET UNITYSDK_OFFSET(0x757690)
#define FJHDNOANCNE_PJEGMBFJOKJ_OFFSET UNITYSDK_OFFSET(0x762910)
#define FJHDNOANCNE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FJHDNOANCNE_TypeDefinitionIndex = 12764;

struct alignas(4) FJHDNOANCNE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJHDNOANCNE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJHDNOANCNE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 JHKGLJCDBJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJHDNOANCNE_JHKGLJCDBJE_OFFSET))(this);
	}

	::System::Int32 LNMNLMNCLEG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJHDNOANCNE_LNMNLMNCLEG_OFFSET))(this);
	}

	::System::String* JEBMBHFOLCL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJHDNOANCNE_JEBMBHFOLCL_OFFSET))(this);
	}

	::System::Boolean LMPMGEBECIK(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FJHDNOANCNE_LMPMGEBECIK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 IONGPDGDBKL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJHDNOANCNE_IONGPDGDBKL_OFFSET))(this);
	}

	::System::Boolean LABBPAOONKA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJHDNOANCNE_LABBPAOONKA_OFFSET))(this);
	}

	/*
	::FJHDNOANCNE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FJHDNOANCNE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJHDNOANCNE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* PAJGAKMCLCP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJHDNOANCNE_PAJGAKMCLCP_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJHDNOANCNE_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 PJEGMBFJOKJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJHDNOANCNE_PJEGMBFJOKJ_OFFSET))(this);
	}

	::System::Int32 EDALLPPEDIO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJHDNOANCNE_EDALLPPEDIO_OFFSET))(this);
	}

	::System::Int32 GGOBDCILAHM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJHDNOANCNE_GGOBDCILAHM_OFFSET))(this);
	}

	::System::Int32 OECIOIKGBEG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJHDNOANCNE_OECIOIKGBEG_OFFSET))(this);
	}

	::System::Int32 MKOILCDKELM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJHDNOANCNE_MKOILCDKELM_OFFSET))(this);
	}

	::System::Boolean BCBKMELCNJM(::System::Int32 HPMEONKHFGG, ::IFMDDIOEJGI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IFMDDIOEJGI&))((::PBYTE)hIl2Cpp + FJHDNOANCNE_BCBKMELCNJM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJHDNOANCNE_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::FJHDNOANCNE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FJHDNOANCNE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FJHDNOANCNE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 NLNODLILGMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJHDNOANCNE_NLNODLILGMM_OFFSET))(this);
	}
};
