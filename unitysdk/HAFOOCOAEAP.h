#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HAFOOCOAEAP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HAFOOCOAEAP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HAFOOCOAEAP_DOHANFCIALC_OFFSET UNITYSDK_OFFSET(0x757190)
#define HAFOOCOAEAP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HAFOOCOAEAP_GOJEENJOJCD_OFFSET UNITYSDK_OFFSET(0x7B51B0)
#define HAFOOCOAEAP_ICHBBMPAEDL_OFFSET UNITYSDK_OFFSET(0x7560E0)
#define HAFOOCOAEAP_IEJDGBAPIGN_OFFSET UNITYSDK_OFFSET(0x7588B0)
#define HAFOOCOAEAP_IIBMPMCNNKE_OFFSET UNITYSDK_OFFSET(0x757760)
#define HAFOOCOAEAP_ILIGOIEMHHA_OFFSET UNITYSDK_OFFSET(0x77B0B0)
#define HAFOOCOAEAP_JCHEJEGFLAC_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define HAFOOCOAEAP_LOKAJNKCBBE_OFFSET UNITYSDK_OFFSET(0x757690)
#define HAFOOCOAEAP_MOFANJDOGDH_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define HAFOOCOAEAP_MPLGKCPPOPA_OFFSET UNITYSDK_OFFSET(0x755320)
#define HAFOOCOAEAP_NENDAECBCEM_OFFSET UNITYSDK_OFFSET(0x756440)
#define HAFOOCOAEAP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17BF4600)
#define HAFOOCOAEAP_PAHFNCBLOAN_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define HAFOOCOAEAP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HAFOOCOAEAP_TypeDefinitionIndex = 11931;

struct alignas(4) HAFOOCOAEAP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFOOCOAEAP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HAFOOCOAEAP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean IEJDGBAPIGN(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + HAFOOCOAEAP_IEJDGBAPIGN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFOOCOAEAP_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 JCHEJEGFLAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFOOCOAEAP_JCHEJEGFLAC_OFFSET))(this);
	}

	::System::Int32 NENDAECBCEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFOOCOAEAP_NENDAECBCEM_OFFSET))(this);
	}

	/*
	::HAFOOCOAEAP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HAFOOCOAEAP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HAFOOCOAEAP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HAFOOCOAEAP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HAFOOCOAEAP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HAFOOCOAEAP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ICHBBMPAEDL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFOOCOAEAP_ICHBBMPAEDL_OFFSET))(this);
	}

	::System::Boolean ILIGOIEMHHA(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + HAFOOCOAEAP_ILIGOIEMHHA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Single GOJEENJOJCD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFOOCOAEAP_GOJEENJOJCD_OFFSET))(this);
	}

	::System::String* DOHANFCIALC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFOOCOAEAP_DOHANFCIALC_OFFSET))(this);
	}

	::System::Int32 MOFANJDOGDH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFOOCOAEAP_MOFANJDOGDH_OFFSET))(this);
	}

	::System::String* IIBMPMCNNKE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFOOCOAEAP_IIBMPMCNNKE_OFFSET))(this);
	}

	::System::Int32 MPLGKCPPOPA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFOOCOAEAP_MPLGKCPPOPA_OFFSET))(this);
	}

	::System::String* LOKAJNKCBBE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFOOCOAEAP_LOKAJNKCBBE_OFFSET))(this);
	}

	::System::String* PAHFNCBLOAN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFOOCOAEAP_PAHFNCBLOAN_OFFSET))(this);
	}
};
