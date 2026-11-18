#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PMDKGCCDGMN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PAHCMBNMFHN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PAHCMBNMFHN_CDOLOINIAMG_OFFSET UNITYSDK_OFFSET(0x755190)
#define PAHCMBNMFHN_DLHEKBNPBNI_OFFSET UNITYSDK_OFFSET(0x755710)
#define PAHCMBNMFHN_DOENFPFKOCC_OFFSET UNITYSDK_OFFSET(0x7DE0E0)
#define PAHCMBNMFHN_FPAIICCOCJF_OFFSET UNITYSDK_OFFSET(0x754970)
#define PAHCMBNMFHN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PAHCMBNMFHN_GIPOMPLOMGI_OFFSET UNITYSDK_OFFSET(0x761710)
#define PAHCMBNMFHN_HNMLDCIHAGB_OFFSET UNITYSDK_OFFSET(0x755C70)
#define PAHCMBNMFHN_IBIJKGOEPLA_OFFSET UNITYSDK_OFFSET(0x755890)
#define PAHCMBNMFHN_IJIGCNNKMNH_OFFSET UNITYSDK_OFFSET(0x755D20)
#define PAHCMBNMFHN_JIJNEFBLGJD_OFFSET UNITYSDK_OFFSET(0x755E40)
#define PAHCMBNMFHN_KJGOLMAJPCO_OFFSET UNITYSDK_OFFSET(0x757E20)
#define PAHCMBNMFHN_MHMKHOMMCDH_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define PAHCMBNMFHN_MKJGMNEIMOG_OFFSET UNITYSDK_OFFSET(0x756B10)
#define PAHCMBNMFHN_MMHJOIBPAAJ_OFFSET UNITYSDK_OFFSET(0x757690)
#define PAHCMBNMFHN_MPFLGBCOAHI_OFFSET UNITYSDK_OFFSET(0x755A00)
#define PAHCMBNMFHN_NKCGLMBMAOC_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define PAHCMBNMFHN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1EDBB690)
#define PAHCMBNMFHN_OFFCLGALMMJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define PAHCMBNMFHN_ONJFIGPFLIJ_OFFSET UNITYSDK_OFFSET(0x7563E0)
#define PAHCMBNMFHN_PKOMGKJLKGM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PAHCMBNMFHN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PAHCMBNMFHN_TypeDefinitionIndex = 12727;

struct alignas(4) PAHCMBNMFHN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHCMBNMFHN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PAHCMBNMFHN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ONJFIGPFLIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHCMBNMFHN_ONJFIGPFLIJ_OFFSET))(this);
	}

	::System::Int32 IBIJKGOEPLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHCMBNMFHN_IBIJKGOEPLA_OFFSET))(this);
	}

	::System::Int32 NKCGLMBMAOC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHCMBNMFHN_NKCGLMBMAOC_OFFSET))(this);
	}

	/*
	static ::PAHCMBNMFHN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 PJMKDPOEEAD, ::System::Int32 CHAJLNMAHOE, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PAHCMBNMFHN(*)(::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PAHCMBNMFHN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, PJMKDPOEEAD, CHAJLNMAHOE, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 FPAIICCOCJF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHCMBNMFHN_FPAIICCOCJF_OFFSET))(this);
	}

	::System::Int32 JIJNEFBLGJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHCMBNMFHN_JIJNEFBLGJD_OFFSET))(this);
	}

	::System::String* MKJGMNEIMOG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHCMBNMFHN_MKJGMNEIMOG_OFFSET))(this);
	}

	::System::Boolean DOENFPFKOCC(::System::Int32 HPMEONKHFGG, ::PMDKGCCDGMN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PMDKGCCDGMN&))((::PBYTE)hIl2Cpp + PAHCMBNMFHN_DOENFPFKOCC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* MPFLGBCOAHI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHCMBNMFHN_MPFLGBCOAHI_OFFSET))(this);
	}

	::System::Int32 IJIGCNNKMNH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHCMBNMFHN_IJIGCNNKMNH_OFFSET))(this);
	}

	/*
	::PAHCMBNMFHN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PAHCMBNMFHN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PAHCMBNMFHN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* MMHJOIBPAAJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHCMBNMFHN_MMHJOIBPAAJ_OFFSET))(this);
	}

	::System::String* GIPOMPLOMGI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHCMBNMFHN_GIPOMPLOMGI_OFFSET))(this);
	}

	::System::String* MHMKHOMMCDH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHCMBNMFHN_MHMKHOMMCDH_OFFSET))(this);
	}

	::System::String* DLHEKBNPBNI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHCMBNMFHN_DLHEKBNPBNI_OFFSET))(this);
	}

	::System::Int32 HNMLDCIHAGB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHCMBNMFHN_HNMLDCIHAGB_OFFSET))(this);
	}

	::System::Int32 OFFCLGALMMJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHCMBNMFHN_OFFCLGALMMJ_OFFSET))(this);
	}

	::System::Int32 PKOMGKJLKGM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHCMBNMFHN_PKOMGKJLKGM_OFFSET))(this);
	}

	::System::String* KJGOLMAJPCO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHCMBNMFHN_KJGOLMAJPCO_OFFSET))(this);
	}

	::System::Int32 CDOLOINIAMG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHCMBNMFHN_CDOLOINIAMG_OFFSET))(this);
	}
};
