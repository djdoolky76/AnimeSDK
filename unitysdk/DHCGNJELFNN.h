#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DHCGNJELFNN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DHCGNJELFNN_ADDEEPDKECP_OFFSET UNITYSDK_OFFSET(0x779440)
#define DHCGNJELFNN_AHLIHCGDLGE_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define DHCGNJELFNN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DHCGNJELFNN_CMJJJHGHJLA_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define DHCGNJELFNN_DGBEFJLGCEK_OFFSET UNITYSDK_OFFSET(0x756B10)
#define DHCGNJELFNN_GBGIIHLFFJO_OFFSET UNITYSDK_OFFSET(0x755A00)
#define DHCGNJELFNN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DHCGNJELFNN_GHMJKJMCEHA_OFFSET UNITYSDK_OFFSET(0x757290)
#define DHCGNJELFNN_GHNAEAEBDEO_OFFSET UNITYSDK_OFFSET(0x758320)
#define DHCGNJELFNN_ICOJBOCANBN_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define DHCGNJELFNN_INGHNFJLNPL_OFFSET UNITYSDK_OFFSET(0x754F10)
#define DHCGNJELFNN_JAFEKKFFHBG_OFFSET UNITYSDK_OFFSET(0x756D50)
#define DHCGNJELFNN_NCHKNGFKAMB_OFFSET UNITYSDK_OFFSET(0x755710)
#define DHCGNJELFNN_NDJHPLELLOG_OFFSET UNITYSDK_OFFSET(0x7624E0)
#define DHCGNJELFNN_NFCAKBCIMGG_OFFSET UNITYSDK_OFFSET(0x761710)
#define DHCGNJELFNN_NKCABPIFMMI_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define DHCGNJELFNN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A591290)
#define DHCGNJELFNN_OIIEDOPFJJN_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define DHCGNJELFNN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DHCGNJELFNN_TypeDefinitionIndex = 14076;

struct alignas(4) DHCGNJELFNN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCGNJELFNN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DHCGNJELFNN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean ADDEEPDKECP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCGNJELFNN_ADDEEPDKECP_OFFSET))(this);
	}

	::System::String* JAFEKKFFHBG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCGNJELFNN_JAFEKKFFHBG_OFFSET))(this);
	}

	::System::String* NKCABPIFMMI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCGNJELFNN_NKCABPIFMMI_OFFSET))(this);
	}

	/*
	::DHCGNJELFNN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DHCGNJELFNN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DHCGNJELFNN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* DGBEFJLGCEK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCGNJELFNN_DGBEFJLGCEK_OFFSET))(this);
	}

	::System::String* CMJJJHGHJLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCGNJELFNN_CMJJJHGHJLA_OFFSET))(this);
	}

	::System::String* NFCAKBCIMGG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCGNJELFNN_NFCAKBCIMGG_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCGNJELFNN_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::DHCGNJELFNN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DHCGNJELFNN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DHCGNJELFNN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* GHMJKJMCEHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCGNJELFNN_GHMJKJMCEHA_OFFSET))(this);
	}

	::System::String* GHNAEAEBDEO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCGNJELFNN_GHNAEAEBDEO_OFFSET))(this);
	}

	::System::String* OIIEDOPFJJN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCGNJELFNN_OIIEDOPFJJN_OFFSET))(this);
	}

	::System::String* AHLIHCGDLGE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCGNJELFNN_AHLIHCGDLGE_OFFSET))(this);
	}

	::System::String* NCHKNGFKAMB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCGNJELFNN_NCHKNGFKAMB_OFFSET))(this);
	}

	::System::Boolean NDJHPLELLOG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCGNJELFNN_NDJHPLELLOG_OFFSET))(this);
	}

	::System::String* INGHNFJLNPL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCGNJELFNN_INGHNFJLNPL_OFFSET))(this);
	}

	::System::String* GBGIIHLFFJO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCGNJELFNN_GBGIIHLFFJO_OFFSET))(this);
	}

	::System::String* ICOJBOCANBN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCGNJELFNN_ICOJBOCANBN_OFFSET))(this);
	}
};
