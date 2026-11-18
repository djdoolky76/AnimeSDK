#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HHFDPCFPNPG_AAMGGPGDEIG_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define HHFDPCFPNPG_BCDLBIMPDKD_OFFSET UNITYSDK_OFFSET(0x758320)
#define HHFDPCFPNPG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HHFDPCFPNPG_FHNMDNOIKPC_OFFSET UNITYSDK_OFFSET(0x754920)
#define HHFDPCFPNPG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HHFDPCFPNPG_GMGMELFCECD_OFFSET UNITYSDK_OFFSET(0x758200)
#define HHFDPCFPNPG_GOALIHGGJKP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HHFDPCFPNPG_HBGOBGEMMNN_OFFSET UNITYSDK_OFFSET(0x756780)
#define HHFDPCFPNPG_HLDPGDLMIEN_OFFSET UNITYSDK_OFFSET(0x755C70)
#define HHFDPCFPNPG_IPGONONCDDC_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define HHFDPCFPNPG_JIGJLGCINPC_OFFSET UNITYSDK_OFFSET(0x756220)
#define HHFDPCFPNPG_KNJLAMDAMKK_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define HHFDPCFPNPG_LFICBIGDIFO_OFFSET UNITYSDK_OFFSET(0x7563E0)
#define HHFDPCFPNPG_LHNNIAOBOOD_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define HHFDPCFPNPG_NCBEFMCDJAA_OFFSET UNITYSDK_OFFSET(0x755A00)
#define HHFDPCFPNPG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5C7B90)
#define HHFDPCFPNPG_PJGCDKGGDGD_OFFSET UNITYSDK_OFFSET(0x756570)
#define HHFDPCFPNPG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HHFDPCFPNPG_TypeDefinitionIndex = 9515;

struct alignas(4) HHFDPCFPNPG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHFDPCFPNPG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHFDPCFPNPG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 IPGONONCDDC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHFDPCFPNPG_IPGONONCDDC_OFFSET))(this);
	}

	/*
	static ::HHFDPCFPNPG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HHFDPCFPNPG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HHFDPCFPNPG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 KNJLAMDAMKK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHFDPCFPNPG_KNJLAMDAMKK_OFFSET))(this);
	}

	::System::Int32 JIGJLGCINPC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHFDPCFPNPG_JIGJLGCINPC_OFFSET))(this);
	}

	::System::Int32 GOALIHGGJKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHFDPCFPNPG_GOALIHGGJKP_OFFSET))(this);
	}

	/*
	::HHFDPCFPNPG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HHFDPCFPNPG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHFDPCFPNPG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LFICBIGDIFO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHFDPCFPNPG_LFICBIGDIFO_OFFSET))(this);
	}

	::System::String* NCBEFMCDJAA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHFDPCFPNPG_NCBEFMCDJAA_OFFSET))(this);
	}

	::System::Int32 FHNMDNOIKPC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHFDPCFPNPG_FHNMDNOIKPC_OFFSET))(this);
	}

	::System::Int32 LHNNIAOBOOD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHFDPCFPNPG_LHNNIAOBOOD_OFFSET))(this);
	}

	::System::String* BCDLBIMPDKD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHFDPCFPNPG_BCDLBIMPDKD_OFFSET))(this);
	}

	::System::Boolean AAMGGPGDEIG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HHFDPCFPNPG_AAMGGPGDEIG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean GMGMELFCECD(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HHFDPCFPNPG_GMGMELFCECD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 HLDPGDLMIEN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHFDPCFPNPG_HLDPGDLMIEN_OFFSET))(this);
	}

	::System::Boolean HBGOBGEMMNN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HHFDPCFPNPG_HBGOBGEMMNN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean PJGCDKGGDGD(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HHFDPCFPNPG_PJGCDKGGDGD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
