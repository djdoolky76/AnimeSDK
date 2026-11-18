#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define ANIKDIFFHFK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ANIKDIFFHFK_ENFKDNMHLAE_OFFSET UNITYSDK_OFFSET(0x754970)
#define ANIKDIFFHFK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ANIKDIFFHFK_IAEJPHBJAAP_OFFSET UNITYSDK_OFFSET(0x755D20)
#define ANIKDIFFHFK_KFEGMMNHELM_OFFSET UNITYSDK_OFFSET(0x755C70)
#define ANIKDIFFHFK_LPKBHAAJGKG_OFFSET UNITYSDK_OFFSET(0x754B50)
#define ANIKDIFFHFK_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ANIKDIFFHFK_OEJPNBJMBOJ_OFFSET UNITYSDK_OFFSET(0x754920)
#define ANIKDIFFHFK_OHFBFJCFKMH_OFFSET UNITYSDK_OFFSET(0x756B90)
#define ANIKDIFFHFK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ANIKDIFFHFK_TypeDefinitionIndex = 12213;

struct alignas(4) ANIKDIFFHFK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIKDIFFHFK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ANIKDIFFHFK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 OEJPNBJMBOJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIKDIFFHFK_OEJPNBJMBOJ_OFFSET))(this);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIKDIFFHFK_NKCNGLADFNA_OFFSET))(this);
	}

	::System::Int32 LPKBHAAJGKG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIKDIFFHFK_LPKBHAAJGKG_OFFSET))(this);
	}

	/*
	::ANIKDIFFHFK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ANIKDIFFHFK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ANIKDIFFHFK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 IAEJPHBJAAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIKDIFFHFK_IAEJPHBJAAP_OFFSET))(this);
	}

	::System::Int32 ENFKDNMHLAE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIKDIFFHFK_ENFKDNMHLAE_OFFSET))(this);
	}

	::System::Int32 KFEGMMNHELM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIKDIFFHFK_KFEGMMNHELM_OFFSET))(this);
	}

	::System::Int32 OHFBFJCFKMH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIKDIFFHFK_OHFBFJCFKMH_OFFSET))(this);
	}
};
