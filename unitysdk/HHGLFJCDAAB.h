#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HHGLFJCDAAB_BDLKMAPEBJA_OFFSET UNITYSDK_OFFSET(0x756D50)
#define HHGLFJCDAAB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HHGLFJCDAAB_BJIDNANEHFK_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define HHGLFJCDAAB_BKFEIAPPBCP_OFFSET UNITYSDK_OFFSET(0x761240)
#define HHGLFJCDAAB_ELOJFLGMAAI_OFFSET UNITYSDK_OFFSET(0x755D20)
#define HHGLFJCDAAB_GELAKEBEFMC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HHGLFJCDAAB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HHGLFJCDAAB_HGHMLMIDJND_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define HHGLFJCDAAB_IICCNPNCMBN_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define HHGLFJCDAAB_JNNONJAOIGI_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define HHGLFJCDAAB_KIOJMPEJHKO_OFFSET UNITYSDK_OFFSET(0x757190)
#define HHGLFJCDAAB_LGKGKIKAKLA_OFFSET UNITYSDK_OFFSET(0x757290)
#define HHGLFJCDAAB_OCIHJBBFPCK_OFFSET UNITYSDK_OFFSET(0x756B90)
#define HHGLFJCDAAB_PLNBBDEBIII_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define HHGLFJCDAAB_PMFGLCEENGK_OFFSET UNITYSDK_OFFSET(0x754920)
#define HHGLFJCDAAB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HHGLFJCDAAB_TypeDefinitionIndex = 14798;

struct alignas(4) HHGLFJCDAAB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGLFJCDAAB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHGLFJCDAAB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GELAKEBEFMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGLFJCDAAB_GELAKEBEFMC_OFFSET))(this);
	}

	::System::String* PLNBBDEBIII()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGLFJCDAAB_PLNBBDEBIII_OFFSET))(this);
	}

	::System::String* IICCNPNCMBN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGLFJCDAAB_IICCNPNCMBN_OFFSET))(this);
	}

	::System::Boolean HGHMLMIDJND(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HHGLFJCDAAB_HGHMLMIDJND_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 PMFGLCEENGK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGLFJCDAAB_PMFGLCEENGK_OFFSET))(this);
	}

	::System::String* LGKGKIKAKLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGLFJCDAAB_LGKGKIKAKLA_OFFSET))(this);
	}

	::System::String* KIOJMPEJHKO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGLFJCDAAB_KIOJMPEJHKO_OFFSET))(this);
	}

	::System::String* BDLKMAPEBJA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGLFJCDAAB_BDLKMAPEBJA_OFFSET))(this);
	}

	::System::Int32 ELOJFLGMAAI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGLFJCDAAB_ELOJFLGMAAI_OFFSET))(this);
	}

	/*
	::HHGLFJCDAAB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HHGLFJCDAAB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHGLFJCDAAB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BKFEIAPPBCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGLFJCDAAB_BKFEIAPPBCP_OFFSET))(this);
	}

	::System::Int32 OCIHJBBFPCK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGLFJCDAAB_OCIHJBBFPCK_OFFSET))(this);
	}

	::System::String* JNNONJAOIGI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGLFJCDAAB_JNNONJAOIGI_OFFSET))(this);
	}

	::System::String* BJIDNANEHFK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGLFJCDAAB_BJIDNANEHFK_OFFSET))(this);
	}
};
