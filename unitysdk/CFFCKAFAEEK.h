#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define CFFCKAFAEEK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CFFCKAFAEEK_AEAHNFMIDAG_OFFSET UNITYSDK_OFFSET(0x78A030)
#define CFFCKAFAEEK_AHNJKKPPLBJ_OFFSET UNITYSDK_OFFSET(0x760650)
#define CFFCKAFAEEK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CFFCKAFAEEK_CBFABJJBIOD_OFFSET UNITYSDK_OFFSET(0x758780)
#define CFFCKAFAEEK_CEINNDGEIHD_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define CFFCKAFAEEK_EPNAMNKAHNM_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define CFFCKAFAEEK_FIBJKNELCOG_OFFSET UNITYSDK_OFFSET(0x7A5C20)
#define CFFCKAFAEEK_FKCAEMLJGIO_OFFSET UNITYSDK_OFFSET(0x762D20)
#define CFFCKAFAEEK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CFFCKAFAEEK_HNPIFGEHMKL_OFFSET UNITYSDK_OFFSET(0x756490)
#define CFFCKAFAEEK_HPLBAABPHKB_OFFSET UNITYSDK_OFFSET(0x754B50)
#define CFFCKAFAEEK_IDAGPDDHOCK_OFFSET UNITYSDK_OFFSET(0x76FDA0)
#define CFFCKAFAEEK_IICIBABMACP_OFFSET UNITYSDK_OFFSET(0x7560E0)
#define CFFCKAFAEEK_INKEGFLADAA_OFFSET UNITYSDK_OFFSET(0x755C70)
#define CFFCKAFAEEK_MDDFMBGAHFG_OFFSET UNITYSDK_OFFSET(0x76FE20)
#define CFFCKAFAEEK_MDGAEAFCOAD_OFFSET UNITYSDK_OFFSET(0x756440)
#define CFFCKAFAEEK_PEHHFJIDFBI_OFFSET UNITYSDK_OFFSET(0x7666F0)
#define CFFCKAFAEEK_PJJEONAHALN_OFFSET UNITYSDK_OFFSET(0x755D20)
#define CFFCKAFAEEK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CFFCKAFAEEK_TypeDefinitionIndex = 13862;

struct alignas(4) CFFCKAFAEEK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFCKAFAEEK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CFFCKAFAEEK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFCKAFAEEK_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 CBFABJJBIOD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFCKAFAEEK_CBFABJJBIOD_OFFSET))(this);
	}

	::System::Int32 MDGAEAFCOAD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFCKAFAEEK_MDGAEAFCOAD_OFFSET))(this);
	}

	::System::Boolean MDDFMBGAHFG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CFFCKAFAEEK_MDDFMBGAHFG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Single FIBJKNELCOG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFCKAFAEEK_FIBJKNELCOG_OFFSET))(this);
	}

	::System::Int32 AHNJKKPPLBJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFCKAFAEEK_AHNJKKPPLBJ_OFFSET))(this);
	}

	::System::Boolean HNPIFGEHMKL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CFFCKAFAEEK_HNPIFGEHMKL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 HPLBAABPHKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFCKAFAEEK_HPLBAABPHKB_OFFSET))(this);
	}

	::System::Single AEAHNFMIDAG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFCKAFAEEK_AEAHNFMIDAG_OFFSET))(this);
	}

	::System::Boolean IDAGPDDHOCK(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CFFCKAFAEEK_IDAGPDDHOCK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::CFFCKAFAEEK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CFFCKAFAEEK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CFFCKAFAEEK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 CEINNDGEIHD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFCKAFAEEK_CEINNDGEIHD_OFFSET))(this);
	}

	::System::Int32 FKCAEMLJGIO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFCKAFAEEK_FKCAEMLJGIO_OFFSET))(this);
	}

	::System::Int32 PJJEONAHALN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFCKAFAEEK_PJJEONAHALN_OFFSET))(this);
	}

	::System::Single PEHHFJIDFBI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFCKAFAEEK_PEHHFJIDFBI_OFFSET))(this);
	}

	::System::Int32 INKEGFLADAA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFCKAFAEEK_INKEGFLADAA_OFFSET))(this);
	}

	::System::Int32 IICIBABMACP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFCKAFAEEK_IICIBABMACP_OFFSET))(this);
	}

	::System::Int32 EPNAMNKAHNM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFCKAFAEEK_EPNAMNKAHNM_OFFSET))(this);
	}
};
