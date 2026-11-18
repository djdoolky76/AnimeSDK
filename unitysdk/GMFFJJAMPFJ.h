#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HNFADNMADCK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GMFFJJAMPFJ_ADHEOAKBHMO_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define GMFFJJAMPFJ_AKHIINMPNED_OFFSET UNITYSDK_OFFSET(0x754F10)
#define GMFFJJAMPFJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GMFFJJAMPFJ_BIMBHGELFLL_OFFSET UNITYSDK_OFFSET(0x756B10)
#define GMFFJJAMPFJ_DHMCHFDAEBN_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define GMFFJJAMPFJ_FLCJMAKCNGD_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define GMFFJJAMPFJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GMFFJJAMPFJ_IGGELJHOMEC_OFFSET UNITYSDK_OFFSET(0x757290)
#define GMFFJJAMPFJ_JHKJMOMNBIM_OFFSET UNITYSDK_OFFSET(0x756D50)
#define GMFFJJAMPFJ_NMOEJGDIBBL_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define GMFFJJAMPFJ_NOOGGMJCPLM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GMFFJJAMPFJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1664F6C0)
#define GMFFJJAMPFJ_OIKEGNEKAIO_OFFSET UNITYSDK_OFFSET(0x757190)
#define GMFFJJAMPFJ_PJGICMHFMHN_OFFSET UNITYSDK_OFFSET(0x763AA0)
#define GMFFJJAMPFJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GMFFJJAMPFJ_TypeDefinitionIndex = 15190;

struct alignas(4) GMFFJJAMPFJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFFJJAMPFJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GMFFJJAMPFJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* DHMCHFDAEBN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFFJJAMPFJ_DHMCHFDAEBN_OFFSET))(this);
	}

	::System::String* OIKEGNEKAIO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFFJJAMPFJ_OIKEGNEKAIO_OFFSET))(this);
	}

	::System::Int32 FLCJMAKCNGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFFJJAMPFJ_FLCJMAKCNGD_OFFSET))(this);
	}

	::System::String* JHKJMOMNBIM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFFJJAMPFJ_JHKJMOMNBIM_OFFSET))(this);
	}

	::System::String* AKHIINMPNED()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFFJJAMPFJ_AKHIINMPNED_OFFSET))(this);
	}

	::System::Int32 NOOGGMJCPLM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFFJJAMPFJ_NOOGGMJCPLM_OFFSET))(this);
	}

	::System::Boolean PJGICMHFMHN(::System::Int32 HPMEONKHFGG, ::HNFADNMADCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNFADNMADCK&))((::PBYTE)hIl2Cpp + GMFFJJAMPFJ_PJGICMHFMHN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* BIMBHGELFLL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFFJJAMPFJ_BIMBHGELFLL_OFFSET))(this);
	}

	::System::String* ADHEOAKBHMO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFFJJAMPFJ_ADHEOAKBHMO_OFFSET))(this);
	}

	::System::String* IGGELJHOMEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFFJJAMPFJ_IGGELJHOMEC_OFFSET))(this);
	}

	/*
	::GMFFJJAMPFJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GMFFJJAMPFJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GMFFJJAMPFJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* NMOEJGDIBBL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFFJJAMPFJ_NMOEJGDIBBL_OFFSET))(this);
	}

	/*
	static ::GMFFJJAMPFJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GMFFJJAMPFJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GMFFJJAMPFJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
