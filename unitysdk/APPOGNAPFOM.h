#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define APPOGNAPFOM_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x755E40)
#define APPOGNAPFOM_BBKPHIOGHFB_OFFSET UNITYSDK_OFFSET(0x762FE0)
#define APPOGNAPFOM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define APPOGNAPFOM_BKFMNKOBENN_OFFSET UNITYSDK_OFFSET(0x757290)
#define APPOGNAPFOM_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define APPOGNAPFOM_DFJKAFPFLOF_OFFSET UNITYSDK_OFFSET(0x7587D0)
#define APPOGNAPFOM_FBFKOJDEMMD_OFFSET UNITYSDK_OFFSET(0x755A00)
#define APPOGNAPFOM_GBNFNKCMNBF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define APPOGNAPFOM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define APPOGNAPFOM_GKMCPJACKJA_OFFSET UNITYSDK_OFFSET(0x756D50)
#define APPOGNAPFOM_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define APPOGNAPFOM_IHFAPJHFKKK_OFFSET UNITYSDK_OFFSET(0x755670)
#define APPOGNAPFOM_KACAHMCOLMB_OFFSET UNITYSDK_OFFSET(0x755320)
#define APPOGNAPFOM_KLMBGMPDPOE_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define APPOGNAPFOM_KNBHJHNMLDF_OFFSET UNITYSDK_OFFSET(0x756440)
#define APPOGNAPFOM_KNKGEEBHHMC_OFFSET UNITYSDK_OFFSET(0x755710)
#define APPOGNAPFOM_KOAOKOGMGME_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define APPOGNAPFOM_LFBBCBBHIFI_OFFSET UNITYSDK_OFFSET(0x758320)
#define APPOGNAPFOM_LMLADFHNPHM_OFFSET UNITYSDK_OFFSET(0x754920)
#define APPOGNAPFOM_MLBIBAHLKGP_OFFSET UNITYSDK_OFFSET(0x755C70)
#define APPOGNAPFOM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A576750)
#define APPOGNAPFOM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int APPOGNAPFOM_TypeDefinitionIndex = 9530;

struct alignas(4) APPOGNAPFOM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + APPOGNAPFOM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + APPOGNAPFOM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APPOGNAPFOM_DECMGICKDLH_OFFSET))(this);
	}

	/*
	static ::APPOGNAPFOM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::APPOGNAPFOM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + APPOGNAPFOM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 KACAHMCOLMB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APPOGNAPFOM_KACAHMCOLMB_OFFSET))(this);
	}

	::System::String* KNKGEEBHHMC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APPOGNAPFOM_KNKGEEBHHMC_OFFSET))(this);
	}

	::System::Int32 KLMBGMPDPOE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APPOGNAPFOM_KLMBGMPDPOE_OFFSET))(this);
	}

	::System::Int32 GBNFNKCMNBF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APPOGNAPFOM_GBNFNKCMNBF_OFFSET))(this);
	}

	::System::String* KOAOKOGMGME()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APPOGNAPFOM_KOAOKOGMGME_OFFSET))(this);
	}

	::System::Int32 BBKPHIOGHFB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APPOGNAPFOM_BBKPHIOGHFB_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APPOGNAPFOM_APCKPKCNFJE_OFFSET))(this);
	}

	::System::String* BKFMNKOBENN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APPOGNAPFOM_BKFMNKOBENN_OFFSET))(this);
	}

	/*
	::APPOGNAPFOM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::APPOGNAPFOM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + APPOGNAPFOM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DFJKAFPFLOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APPOGNAPFOM_DFJKAFPFLOF_OFFSET))(this);
	}

	::System::Int32 KNBHJHNMLDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APPOGNAPFOM_KNBHJHNMLDF_OFFSET))(this);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APPOGNAPFOM_IFDIOIOCGDP_OFFSET))(this);
	}

	::System::String* LFBBCBBHIFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APPOGNAPFOM_LFBBCBBHIFI_OFFSET))(this);
	}

	::System::Int32 MLBIBAHLKGP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APPOGNAPFOM_MLBIBAHLKGP_OFFSET))(this);
	}

	::System::Int32 LMLADFHNPHM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APPOGNAPFOM_LMLADFHNPHM_OFFSET))(this);
	}

	::System::String* FBFKOJDEMMD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APPOGNAPFOM_FBFKOJDEMMD_OFFSET))(this);
	}

	::System::Int32 IHFAPJHFKKK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APPOGNAPFOM_IHFAPJHFKKK_OFFSET))(this);
	}

	::System::String* GKMCPJACKJA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APPOGNAPFOM_GKMCPJACKJA_OFFSET))(this);
	}
};
