#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KGMNKIBBHPD_BGJOEHIOGJB_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define KGMNKIBBHPD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KGMNKIBBHPD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KGMNKIBBHPD_GHHLPDNHMBH_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KGMNKIBBHPD_HGOLIMMPGDO_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define KGMNKIBBHPD_MKFBGEDIAGO_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define KGMNKIBBHPD_NGKOPBCHFOP_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define KGMNKIBBHPD_NHOJCGCDGBF_OFFSET UNITYSDK_OFFSET(0x757290)
#define KGMNKIBBHPD_NJKDANCMLGN_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KGMNKIBBHPD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A50BB60)
#define KGMNKIBBHPD_OBLDIJOBNDI_OFFSET UNITYSDK_OFFSET(0x757190)
#define KGMNKIBBHPD_OCELCDLLGBD_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define KGMNKIBBHPD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KGMNKIBBHPD_TypeDefinitionIndex = 10241;

struct alignas(4) KGMNKIBBHPD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMNKIBBHPD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KGMNKIBBHPD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* OCELCDLLGBD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMNKIBBHPD_OCELCDLLGBD_OFFSET))(this);
	}

	::System::Int32 NGKOPBCHFOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMNKIBBHPD_NGKOPBCHFOP_OFFSET))(this);
	}

	::System::String* HGOLIMMPGDO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMNKIBBHPD_HGOLIMMPGDO_OFFSET))(this);
	}

	::System::Int32 GHHLPDNHMBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMNKIBBHPD_GHHLPDNHMBH_OFFSET))(this);
	}

	::System::String* NHOJCGCDGBF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMNKIBBHPD_NHOJCGCDGBF_OFFSET))(this);
	}

	::System::Int32 BGJOEHIOGJB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMNKIBBHPD_BGJOEHIOGJB_OFFSET))(this);
	}

	::System::String* MKFBGEDIAGO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMNKIBBHPD_MKFBGEDIAGO_OFFSET))(this);
	}

	::System::String* OBLDIJOBNDI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMNKIBBHPD_OBLDIJOBNDI_OFFSET))(this);
	}

	/*
	static ::KGMNKIBBHPD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KGMNKIBBHPD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KGMNKIBBHPD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::KGMNKIBBHPD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KGMNKIBBHPD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KGMNKIBBHPD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NJKDANCMLGN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMNKIBBHPD_NJKDANCMLGN_OFFSET))(this);
	}
};
