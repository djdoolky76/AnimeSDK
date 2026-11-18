#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CGJLNCAPNKN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CGJLNCAPNKN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CGJLNCAPNKN_GHNGINBAOGK_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define CGJLNCAPNKN_LCPGGEMNMJE_OFFSET UNITYSDK_OFFSET(0x7562E0)
#define CGJLNCAPNKN_LMPMGEBECIK_OFFSET UNITYSDK_OFFSET(0x756360)
#define CGJLNCAPNKN_NJAGLJFPMCA_OFFSET UNITYSDK_OFFSET(0x756720)
#define CGJLNCAPNKN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5863B0)
#define CGJLNCAPNKN_OBGJBIOENLN_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define CGJLNCAPNKN_OECIOIKGBEG_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define CGJLNCAPNKN_OKGOMLEFBHM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CGJLNCAPNKN_PACIEAHDEAB_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define CGJLNCAPNKN_PNNHMMDAKLK_OFFSET UNITYSDK_OFFSET(0x755D20)
#define CGJLNCAPNKN_PPMCKINLLEK_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define CGJLNCAPNKN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CGJLNCAPNKN_TypeDefinitionIndex = 14582;

struct alignas(4) CGJLNCAPNKN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJLNCAPNKN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CGJLNCAPNKN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* PPMCKINLLEK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJLNCAPNKN_PPMCKINLLEK_OFFSET))(this);
	}

	::System::Boolean LMPMGEBECIK(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CGJLNCAPNKN_LMPMGEBECIK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 OECIOIKGBEG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJLNCAPNKN_OECIOIKGBEG_OFFSET))(this);
	}

	::System::String* PACIEAHDEAB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJLNCAPNKN_PACIEAHDEAB_OFFSET))(this);
	}

	::System::Int32 OKGOMLEFBHM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJLNCAPNKN_OKGOMLEFBHM_OFFSET))(this);
	}

	/*
	::CGJLNCAPNKN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CGJLNCAPNKN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CGJLNCAPNKN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NJAGLJFPMCA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJLNCAPNKN_NJAGLJFPMCA_OFFSET))(this);
	}

	::System::Int32 PNNHMMDAKLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJLNCAPNKN_PNNHMMDAKLK_OFFSET))(this);
	}

	::System::String* GHNGINBAOGK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJLNCAPNKN_GHNGINBAOGK_OFFSET))(this);
	}

	::System::Boolean LCPGGEMNMJE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CGJLNCAPNKN_LCPGGEMNMJE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::CGJLNCAPNKN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 BHGFGCAOHEC, ::System::Int32 ENEIPEBCLDH, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CGJLNCAPNKN(*)(::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CGJLNCAPNKN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, BHGFGCAOHEC, ENEIPEBCLDH, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* OBGJBIOENLN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJLNCAPNKN_OBGJBIOENLN_OFFSET))(this);
	}
};
