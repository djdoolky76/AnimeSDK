#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KDOEAKOKMKI_AKJAILHOIEC_OFFSET UNITYSDK_OFFSET(0x755C70)
#define KDOEAKOKMKI_BALPJLKHEGL_OFFSET UNITYSDK_OFFSET(0x762FE0)
#define KDOEAKOKMKI_BFAPFBHFBNB_OFFSET UNITYSDK_OFFSET(0x756B10)
#define KDOEAKOKMKI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KDOEAKOKMKI_EHEDNGGDAKF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KDOEAKOKMKI_FDNECNAMOOI_OFFSET UNITYSDK_OFFSET(0x7A5C70)
#define KDOEAKOKMKI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KDOEAKOKMKI_GIAICCEPIDO_OFFSET UNITYSDK_OFFSET(0x7577E0)
#define KDOEAKOKMKI_GMCAFFENLHG_OFFSET UNITYSDK_OFFSET(0x761930)
#define KDOEAKOKMKI_GPDHMFHDKJD_OFFSET UNITYSDK_OFFSET(0x754F10)
#define KDOEAKOKMKI_HCMOENCDADK_OFFSET UNITYSDK_OFFSET(0x756800)
#define KDOEAKOKMKI_IOOOBMMOKAJ_OFFSET UNITYSDK_OFFSET(0x757290)
#define KDOEAKOKMKI_KKJOMMGBKJB_OFFSET UNITYSDK_OFFSET(0x757190)
#define KDOEAKOKMKI_KLDMCBDHBHE_OFFSET UNITYSDK_OFFSET(0x755FE0)
#define KDOEAKOKMKI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1957AD20)
#define KDOEAKOKMKI_OEGHCPIJCGD_OFFSET UNITYSDK_OFFSET(0x755A00)
#define KDOEAKOKMKI_PMBFLMBLBIK_OFFSET UNITYSDK_OFFSET(0x7B51B0)
#define KDOEAKOKMKI_PMJOEGHAGLE_OFFSET UNITYSDK_OFFSET(0x7E4710)
#define KDOEAKOKMKI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KDOEAKOKMKI_TypeDefinitionIndex = 10542;

struct alignas(4) KDOEAKOKMKI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOEAKOKMKI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDOEAKOKMKI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* BFAPFBHFBNB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOEAKOKMKI_BFAPFBHFBNB_OFFSET))(this);
	}

	::System::String* KKJOMMGBKJB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOEAKOKMKI_KKJOMMGBKJB_OFFSET))(this);
	}

	::System::Single PMBFLMBLBIK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOEAKOKMKI_PMBFLMBLBIK_OFFSET))(this);
	}

	::System::Int32 EHEDNGGDAKF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOEAKOKMKI_EHEDNGGDAKF_OFFSET))(this);
	}

	/*
	::KDOEAKOKMKI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KDOEAKOKMKI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDOEAKOKMKI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean GMCAFFENLHG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOEAKOKMKI_GMCAFFENLHG_OFFSET))(this);
	}

	::System::String* GPDHMFHDKJD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOEAKOKMKI_GPDHMFHDKJD_OFFSET))(this);
	}

	::System::Boolean KLDMCBDHBHE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KDOEAKOKMKI_KLDMCBDHBHE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* IOOOBMMOKAJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOEAKOKMKI_IOOOBMMOKAJ_OFFSET))(this);
	}

	::System::Single PMJOEGHAGLE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOEAKOKMKI_PMJOEGHAGLE_OFFSET))(this);
	}

	::System::Int32 HCMOENCDADK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOEAKOKMKI_HCMOENCDADK_OFFSET))(this);
	}

	::System::Single GIAICCEPIDO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOEAKOKMKI_GIAICCEPIDO_OFFSET))(this);
	}

	::System::Single FDNECNAMOOI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOEAKOKMKI_FDNECNAMOOI_OFFSET))(this);
	}

	::System::Int32 AKJAILHOIEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOEAKOKMKI_AKJAILHOIEC_OFFSET))(this);
	}

	::System::Int32 BALPJLKHEGL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOEAKOKMKI_BALPJLKHEGL_OFFSET))(this);
	}

	::System::String* OEGHCPIJCGD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOEAKOKMKI_OEGHCPIJCGD_OFFSET))(this);
	}

	/*
	static ::KDOEAKOKMKI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KDOEAKOKMKI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KDOEAKOKMKI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
