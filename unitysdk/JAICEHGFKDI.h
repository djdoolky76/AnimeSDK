#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define JAICEHGFKDI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JAICEHGFKDI_DIKKPOKJDDK_1_OFFSET UNITYSDK_OFFSET(0x16112510)
#define JAICEHGFKDI_DIKKPOKJDDK_OFFSET UNITYSDK_OFFSET(0x161124D0)
#define JAICEHGFKDI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JAICEHGFKDI_NAFCPNDBHOG_OFFSET UNITYSDK_OFFSET(0x754B50)
#define JAICEHGFKDI_PDFCLEJAIME_OFFSET UNITYSDK_OFFSET(0x766C00)
#define JAICEHGFKDI_PEKEPMKKLCA_OFFSET UNITYSDK_OFFSET(0x754790)
#define JAICEHGFKDI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JAICEHGFKDI_TypeDefinitionIndex = 15070;

struct alignas(4) JAICEHGFKDI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAICEHGFKDI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JAICEHGFKDI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JAICEHGFKDI DIKKPOKJDDK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JAICEHGFKDI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JAICEHGFKDI_DIKKPOKJDDK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 PEKEPMKKLCA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAICEHGFKDI_PEKEPMKKLCA_OFFSET))(this);
	}

	::System::Int32 NAFCPNDBHOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAICEHGFKDI_NAFCPNDBHOG_OFFSET))(this);
	}

	::System::Boolean PDFCLEJAIME(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JAICEHGFKDI_PDFCLEJAIME_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::JAICEHGFKDI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JAICEHGFKDI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JAICEHGFKDI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JAICEHGFKDI DIKKPOKJDDK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JAICEHGFKDI EIFONLCJOPG)
	{
		return ((::JAICEHGFKDI(*)(::FlatBuffers::ByteBuffer*, ::JAICEHGFKDI))((::PBYTE)hIl2Cpp + JAICEHGFKDI_DIKKPOKJDDK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
