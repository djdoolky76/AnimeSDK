#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GPCIFDNAGNB_ABCLIDNADEG_OFFSET UNITYSDK_OFFSET(0x755C70)
#define GPCIFDNAGNB_AEEMLAABOBO_OFFSET UNITYSDK_OFFSET(0x755790)
#define GPCIFDNAGNB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GPCIFDNAGNB_BOKMFELIMPE_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define GPCIFDNAGNB_DNFHGBNILLL_OFFSET UNITYSDK_OFFSET(0x7563E0)
#define GPCIFDNAGNB_EFAPCMGDKAN_OFFSET UNITYSDK_OFFSET(0x758200)
#define GPCIFDNAGNB_EJJCIFHNLJE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define GPCIFDNAGNB_FDNGOAIHGJG_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define GPCIFDNAGNB_FGJMBNGAPLO_OFFSET UNITYSDK_OFFSET(0x756780)
#define GPCIFDNAGNB_FHJKANNMPMK_OFFSET UNITYSDK_OFFSET(0x754D50)
#define GPCIFDNAGNB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GPCIFDNAGNB_GLLBJIAMKOF_OFFSET UNITYSDK_OFFSET(0x757290)
#define GPCIFDNAGNB_HCFBGOIPBMP_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define GPCIFDNAGNB_HOCKHAAPODL_OFFSET UNITYSDK_OFFSET(0x754B50)
#define GPCIFDNAGNB_KIFKLBKPBJL_OFFSET UNITYSDK_OFFSET(0x754970)
#define GPCIFDNAGNB_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GPCIFDNAGNB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18BA5650)
#define GPCIFDNAGNB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GPCIFDNAGNB_TypeDefinitionIndex = 17258;

struct alignas(4) GPCIFDNAGNB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCIFDNAGNB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GPCIFDNAGNB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 EJJCIFHNLJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCIFDNAGNB_EJJCIFHNLJE_OFFSET))(this);
	}

	::System::Int32 ABCLIDNADEG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCIFDNAGNB_ABCLIDNADEG_OFFSET))(this);
	}

	::System::Boolean BOKMFELIMPE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GPCIFDNAGNB_BOKMFELIMPE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::GPCIFDNAGNB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GPCIFDNAGNB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GPCIFDNAGNB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCIFDNAGNB_NKCNGLADFNA_OFFSET))(this);
	}

	::System::Int32 DNFHGBNILLL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCIFDNAGNB_DNFHGBNILLL_OFFSET))(this);
	}

	/*
	static ::GPCIFDNAGNB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GPCIFDNAGNB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GPCIFDNAGNB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 FHJKANNMPMK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCIFDNAGNB_FHJKANNMPMK_OFFSET))(this);
	}

	::System::Boolean EFAPCMGDKAN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GPCIFDNAGNB_EFAPCMGDKAN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 AEEMLAABOBO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCIFDNAGNB_AEEMLAABOBO_OFFSET))(this);
	}

	::System::String* GLLBJIAMKOF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCIFDNAGNB_GLLBJIAMKOF_OFFSET))(this);
	}

	::System::Boolean FGJMBNGAPLO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GPCIFDNAGNB_FGJMBNGAPLO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 HOCKHAAPODL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCIFDNAGNB_HOCKHAAPODL_OFFSET))(this);
	}

	::System::Int32 FDNGOAIHGJG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCIFDNAGNB_FDNGOAIHGJG_OFFSET))(this);
	}

	::System::Int32 KIFKLBKPBJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCIFDNAGNB_KIFKLBKPBJL_OFFSET))(this);
	}

	::System::Boolean HCFBGOIPBMP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GPCIFDNAGNB_HCFBGOIPBMP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
