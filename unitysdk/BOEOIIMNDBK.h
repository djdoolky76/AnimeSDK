#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BOEOIIMNDBK_AICBGAIBCCF_OFFSET UNITYSDK_OFFSET(0x7560E0)
#define BOEOIIMNDBK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BOEOIIMNDBK_BKPLGMAAAHH_OFFSET UNITYSDK_OFFSET(0x756440)
#define BOEOIIMNDBK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BOEOIIMNDBK_GPNPFJNJGIG_OFFSET UNITYSDK_OFFSET(0x755890)
#define BOEOIIMNDBK_HMHICFGIPLD_OFFSET UNITYSDK_OFFSET(0x76FE20)
#define BOEOIIMNDBK_JBPPOCDKJFC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define BOEOIIMNDBK_KAIIPNPNOHI_OFFSET UNITYSDK_OFFSET(0x756490)
#define BOEOIIMNDBK_MEKEHBEEBPO_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BOEOIIMNDBK_MKDPFGFPJBB_OFFSET UNITYSDK_OFFSET(0x760650)
#define BOEOIIMNDBK_NOLKHBLDIEF_OFFSET UNITYSDK_OFFSET(0x755190)
#define BOEOIIMNDBK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19F23FC0)
#define BOEOIIMNDBK_OFDPIPIOLAA_OFFSET UNITYSDK_OFFSET(0x756B10)
#define BOEOIIMNDBK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BOEOIIMNDBK_TypeDefinitionIndex = 10803;

struct alignas(4) BOEOIIMNDBK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOEOIIMNDBK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOEOIIMNDBK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NOLKHBLDIEF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOEOIIMNDBK_NOLKHBLDIEF_OFFSET))(this);
	}

	::System::String* OFDPIPIOLAA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOEOIIMNDBK_OFDPIPIOLAA_OFFSET))(this);
	}

	::System::Int32 MEKEHBEEBPO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOEOIIMNDBK_MEKEHBEEBPO_OFFSET))(this);
	}

	::System::Boolean KAIIPNPNOHI(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BOEOIIMNDBK_KAIIPNPNOHI_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 MKDPFGFPJBB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOEOIIMNDBK_MKDPFGFPJBB_OFFSET))(this);
	}

	::System::Int32 GPNPFJNJGIG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOEOIIMNDBK_GPNPFJNJGIG_OFFSET))(this);
	}

	::System::Int32 BKPLGMAAAHH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOEOIIMNDBK_BKPLGMAAAHH_OFFSET))(this);
	}

	::System::Boolean HMHICFGIPLD(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BOEOIIMNDBK_HMHICFGIPLD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 AICBGAIBCCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOEOIIMNDBK_AICBGAIBCCF_OFFSET))(this);
	}

	/*
	static ::BOEOIIMNDBK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BOEOIIMNDBK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BOEOIIMNDBK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 JBPPOCDKJFC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOEOIIMNDBK_JBPPOCDKJFC_OFFSET))(this);
	}

	/*
	::BOEOIIMNDBK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BOEOIIMNDBK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOEOIIMNDBK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
