#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EBAJAGPJKMJ_AAODMKOEFFC_OFFSET UNITYSDK_OFFSET(0x757290)
#define EBAJAGPJKMJ_BCMGOFCOENB_OFFSET UNITYSDK_OFFSET(0x7563E0)
#define EBAJAGPJKMJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EBAJAGPJKMJ_BLBCPOMOGEI_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define EBAJAGPJKMJ_CLJLIKPDLKF_OFFSET UNITYSDK_OFFSET(0x757A90)
#define EBAJAGPJKMJ_CLPLPNEMKKF_OFFSET UNITYSDK_OFFSET(0x754F10)
#define EBAJAGPJKMJ_FKFIKGEPDDC_OFFSET UNITYSDK_OFFSET(0x760960)
#define EBAJAGPJKMJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EBAJAGPJKMJ_GOCJLAMOGNK_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define EBAJAGPJKMJ_JECIGPDBPOJ_OFFSET UNITYSDK_OFFSET(0x7578F0)
#define EBAJAGPJKMJ_KIFDNKNLLBG_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define EBAJAGPJKMJ_NCGMDMHLBAL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EBAJAGPJKMJ_NEGIIDCNAGJ_OFFSET UNITYSDK_OFFSET(0x756220)
#define EBAJAGPJKMJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19F42DF0)
#define EBAJAGPJKMJ_PHIJFGHKEOA_OFFSET UNITYSDK_OFFSET(0x757C60)
#define EBAJAGPJKMJ_PKGEJNFEPIB_OFFSET UNITYSDK_OFFSET(0x755A00)
#define EBAJAGPJKMJ_PKJGEEKDKLM_OFFSET UNITYSDK_OFFSET(0x756B10)
#define EBAJAGPJKMJ_PLHPEDHDKGI_OFFSET UNITYSDK_OFFSET(0x754D50)
#define EBAJAGPJKMJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EBAJAGPJKMJ_TypeDefinitionIndex = 15007;

struct alignas(4) EBAJAGPJKMJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBAJAGPJKMJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBAJAGPJKMJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean JECIGPDBPOJ(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + EBAJAGPJKMJ_JECIGPDBPOJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::EBAJAGPJKMJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EBAJAGPJKMJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBAJAGPJKMJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BCMGOFCOENB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBAJAGPJKMJ_BCMGOFCOENB_OFFSET))(this);
	}

	::System::Boolean CLJLIKPDLKF(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + EBAJAGPJKMJ_CLJLIKPDLKF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean PHIJFGHKEOA(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + EBAJAGPJKMJ_PHIJFGHKEOA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NEGIIDCNAGJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBAJAGPJKMJ_NEGIIDCNAGJ_OFFSET))(this);
	}

	::System::Boolean FKFIKGEPDDC(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + EBAJAGPJKMJ_FKFIKGEPDDC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NCGMDMHLBAL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBAJAGPJKMJ_NCGMDMHLBAL_OFFSET))(this);
	}

	::System::String* GOCJLAMOGNK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBAJAGPJKMJ_GOCJLAMOGNK_OFFSET))(this);
	}

	::System::String* PKJGEEKDKLM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBAJAGPJKMJ_PKJGEEKDKLM_OFFSET))(this);
	}

	::System::Int32 PLHPEDHDKGI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBAJAGPJKMJ_PLHPEDHDKGI_OFFSET))(this);
	}

	::System::String* CLPLPNEMKKF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBAJAGPJKMJ_CLPLPNEMKKF_OFFSET))(this);
	}

	::System::String* KIFDNKNLLBG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBAJAGPJKMJ_KIFDNKNLLBG_OFFSET))(this);
	}

	/*
	static ::EBAJAGPJKMJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EBAJAGPJKMJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EBAJAGPJKMJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* AAODMKOEFFC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBAJAGPJKMJ_AAODMKOEFFC_OFFSET))(this);
	}

	::System::Int32 BLBCPOMOGEI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBAJAGPJKMJ_BLBCPOMOGEI_OFFSET))(this);
	}

	::System::String* PKGEJNFEPIB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBAJAGPJKMJ_PKGEJNFEPIB_OFFSET))(this);
	}
};
