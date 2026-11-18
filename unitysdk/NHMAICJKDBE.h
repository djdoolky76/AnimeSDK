#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NHMAICJKDBE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NHMAICJKDBE_FMPKAILJCAN_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define NHMAICJKDBE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NHMAICJKDBE_HFGFJDDJLOC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NHMAICJKDBE_HKOEAKBKKLH_OFFSET UNITYSDK_OFFSET(0x755D70)
#define NHMAICJKDBE_HLCPLIMFDKD_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define NHMAICJKDBE_IJLOMOIPNEA_OFFSET UNITYSDK_OFFSET(0x757290)
#define NHMAICJKDBE_JEIAAIDOGGE_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define NHMAICJKDBE_JFGMGJMHKLL_OFFSET UNITYSDK_OFFSET(0x757190)
#define NHMAICJKDBE_KIIFIGHGCPI_OFFSET UNITYSDK_OFFSET(0x756B90)
#define NHMAICJKDBE_MDLKLNLEIFC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define NHMAICJKDBE_NIOLACCPKHH_OFFSET UNITYSDK_OFFSET(0x756D50)
#define NHMAICJKDBE_NPMKAGMELGG_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define NHMAICJKDBE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17FD55B0)
#define NHMAICJKDBE_OECINIPHPJJ_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define NHMAICJKDBE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NHMAICJKDBE_TypeDefinitionIndex = 10390;

struct alignas(4) NHMAICJKDBE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHMAICJKDBE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NHMAICJKDBE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* IJLOMOIPNEA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHMAICJKDBE_IJLOMOIPNEA_OFFSET))(this);
	}

	::System::String* FMPKAILJCAN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHMAICJKDBE_FMPKAILJCAN_OFFSET))(this);
	}

	::System::String* NIOLACCPKHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHMAICJKDBE_NIOLACCPKHH_OFFSET))(this);
	}

	::System::Int32 JEIAAIDOGGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHMAICJKDBE_JEIAAIDOGGE_OFFSET))(this);
	}

	::System::Int32 NPMKAGMELGG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHMAICJKDBE_NPMKAGMELGG_OFFSET))(this);
	}

	/*
	::NHMAICJKDBE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NHMAICJKDBE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NHMAICJKDBE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* OECINIPHPJJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHMAICJKDBE_OECINIPHPJJ_OFFSET))(this);
	}

	::System::Boolean HKOEAKBKKLH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NHMAICJKDBE_HKOEAKBKKLH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* HLCPLIMFDKD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHMAICJKDBE_HLCPLIMFDKD_OFFSET))(this);
	}

	::System::Int32 KIIFIGHGCPI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHMAICJKDBE_KIIFIGHGCPI_OFFSET))(this);
	}

	::System::String* JFGMGJMHKLL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHMAICJKDBE_JFGMGJMHKLL_OFFSET))(this);
	}

	::System::Int32 MDLKLNLEIFC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHMAICJKDBE_MDLKLNLEIFC_OFFSET))(this);
	}

	::System::Int32 HFGFJDDJLOC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHMAICJKDBE_HFGFJDDJLOC_OFFSET))(this);
	}

	/*
	static ::NHMAICJKDBE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NHMAICJKDBE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NHMAICJKDBE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
