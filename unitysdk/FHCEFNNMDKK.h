#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HNFADNMADCK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FHCEFNNMDKK_ANBOMKBMINF_OFFSET UNITYSDK_OFFSET(0x779C80)
#define FHCEFNNMDKK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FHCEFNNMDKK_DPMHOLKLOIE_OFFSET UNITYSDK_OFFSET(0x756220)
#define FHCEFNNMDKK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FHCEFNNMDKK_GHNFBDDPNOB_OFFSET UNITYSDK_OFFSET(0x755D20)
#define FHCEFNNMDKK_HBOKMKNOPNK_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define FHCEFNNMDKK_HLFBPHDCCCJ_OFFSET UNITYSDK_OFFSET(0x756B90)
#define FHCEFNNMDKK_IEJLBNBCJMO_OFFSET UNITYSDK_OFFSET(0x757190)
#define FHCEFNNMDKK_JMCOBIDKEKB_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define FHCEFNNMDKK_KDGJJEMFEGK_OFFSET UNITYSDK_OFFSET(0x757290)
#define FHCEFNNMDKK_KPKLEFLNDMJ_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define FHCEFNNMDKK_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FHCEFNNMDKK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B4C2420)
#define FHCEFNNMDKK_PEHGDBFNIMI_OFFSET UNITYSDK_OFFSET(0x756570)
#define FHCEFNNMDKK_PJHPKMMFNFK_OFFSET UNITYSDK_OFFSET(0x756D50)
#define FHCEFNNMDKK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FHCEFNNMDKK_TypeDefinitionIndex = 17331;

struct alignas(4) FHCEFNNMDKK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCEFNNMDKK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHCEFNNMDKK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::FHCEFNNMDKK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FHCEFNNMDKK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHCEFNNMDKK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FHCEFNNMDKK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 AJDICOALDFO, ::System::Int32 PACGBHEJLKI, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FHCEFNNMDKK(*)(::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FHCEFNNMDKK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, AJDICOALDFO, PACGBHEJLKI, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 DPMHOLKLOIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCEFNNMDKK_DPMHOLKLOIE_OFFSET))(this);
	}

	::System::String* KDGJJEMFEGK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCEFNNMDKK_KDGJJEMFEGK_OFFSET))(this);
	}

	::System::String* PJHPKMMFNFK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCEFNNMDKK_PJHPKMMFNFK_OFFSET))(this);
	}

	::System::Boolean ANBOMKBMINF(::System::Int32 HPMEONKHFGG, ::HNFADNMADCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNFADNMADCK&))((::PBYTE)hIl2Cpp + FHCEFNNMDKK_ANBOMKBMINF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean PEHGDBFNIMI(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FHCEFNNMDKK_PEHGDBFNIMI_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* JMCOBIDKEKB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCEFNNMDKK_JMCOBIDKEKB_OFFSET))(this);
	}

	::System::String* IEJLBNBCJMO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCEFNNMDKK_IEJLBNBCJMO_OFFSET))(this);
	}

	::System::Int32 HLFBPHDCCCJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCEFNNMDKK_HLFBPHDCCCJ_OFFSET))(this);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCEFNNMDKK_NFKFHJBEPGD_OFFSET))(this);
	}

	::System::Int32 KPKLEFLNDMJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCEFNNMDKK_KPKLEFLNDMJ_OFFSET))(this);
	}

	::System::String* HBOKMKNOPNK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCEFNNMDKK_HBOKMKNOPNK_OFFSET))(this);
	}

	::System::Int32 GHNFBDDPNOB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCEFNNMDKK_GHNFBDDPNOB_OFFSET))(this);
	}
};
