#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GMHCFCHNEPD_AOGFLCFFINH_OFFSET UNITYSDK_OFFSET(0x758780)
#define GMHCFCHNEPD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GMHCFCHNEPD_BLFKNELJFFB_OFFSET UNITYSDK_OFFSET(0x755C70)
#define GMHCFCHNEPD_CJBMHNCHNHO_OFFSET UNITYSDK_OFFSET(0x754F10)
#define GMHCFCHNEPD_COAJIAJKBOI_OFFSET UNITYSDK_OFFSET(0x756B10)
#define GMHCFCHNEPD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GMHCFCHNEPD_JDGKPIFJIGI_OFFSET UNITYSDK_OFFSET(0x755E40)
#define GMHCFCHNEPD_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GMHCFCHNEPD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19AFEB90)
#define GMHCFCHNEPD_OEBELJGDNCE_OFFSET UNITYSDK_OFFSET(0x755A00)
#define GMHCFCHNEPD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GMHCFCHNEPD_TypeDefinitionIndex = 15959;

struct alignas(4) GMHCFCHNEPD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMHCFCHNEPD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GMHCFCHNEPD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 AOGFLCFFINH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMHCFCHNEPD_AOGFLCFFINH_OFFSET))(this);
	}

	/*
	static ::GMHCFCHNEPD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GMHCFCHNEPD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GMHCFCHNEPD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* OEBELJGDNCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMHCFCHNEPD_OEBELJGDNCE_OFFSET))(this);
	}

	::System::String* CJBMHNCHNHO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMHCFCHNEPD_CJBMHNCHNHO_OFFSET))(this);
	}

	::System::String* COAJIAJKBOI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMHCFCHNEPD_COAJIAJKBOI_OFFSET))(this);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMHCFCHNEPD_NKCNGLADFNA_OFFSET))(this);
	}

	::System::Int32 JDGKPIFJIGI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMHCFCHNEPD_JDGKPIFJIGI_OFFSET))(this);
	}

	::System::Int32 BLFKNELJFFB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMHCFCHNEPD_BLFKNELJFFB_OFFSET))(this);
	}

	/*
	::GMHCFCHNEPD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GMHCFCHNEPD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GMHCFCHNEPD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
