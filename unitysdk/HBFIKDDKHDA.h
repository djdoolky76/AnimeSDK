#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HBFIKDDKHDA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HBFIKDDKHDA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HBFIKDDKHDA_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x756B10)
#define HBFIKDDKHDA_DHNOLPMMNCN_OFFSET UNITYSDK_OFFSET(0x756640)
#define HBFIKDDKHDA_FBALHECIHDI_OFFSET UNITYSDK_OFFSET(0x761000)
#define HBFIKDDKHDA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HBFIKDDKHDA_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x755A00)
#define HBFIKDDKHDA_LEHJFMAMFJO_OFFSET UNITYSDK_OFFSET(0x757760)
#define HBFIKDDKHDA_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x755840)
#define HBFIKDDKHDA_LPFHBOMNFPE_OFFSET UNITYSDK_OFFSET(0x756280)
#define HBFIKDDKHDA_OAJFBBGNJLA_OFFSET UNITYSDK_OFFSET(0x757690)
#define HBFIKDDKHDA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B7C0D60)
#define HBFIKDDKHDA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HBFIKDDKHDA_TypeDefinitionIndex = 11681;

struct alignas(4) HBFIKDDKHDA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIKDDKHDA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HBFIKDDKHDA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* OAJFBBGNJLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIKDDKHDA_OAJFBBGNJLA_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIKDDKHDA_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIKDDKHDA_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::String* LEHJFMAMFJO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIKDDKHDA_LEHJFMAMFJO_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIKDDKHDA_DECMGICKDLH_OFFSET))(this);
	}

	::System::Boolean DHNOLPMMNCN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HBFIKDDKHDA_DHNOLPMMNCN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::HBFIKDDKHDA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HBFIKDDKHDA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HBFIKDDKHDA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LPFHBOMNFPE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIKDDKHDA_LPFHBOMNFPE_OFFSET))(this);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIKDDKHDA_IFDIOIOCGDP_OFFSET))(this);
	}

	/*
	static ::HBFIKDDKHDA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HBFIKDDKHDA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HBFIKDDKHDA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* FBALHECIHDI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIKDDKHDA_FBALHECIHDI_OFFSET))(this);
	}
};
