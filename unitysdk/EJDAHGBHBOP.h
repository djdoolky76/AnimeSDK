#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EJDAHGBHBOP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EJDAHGBHBOP_ADIIMBHKLCK_OFFSET UNITYSDK_OFFSET(0x757D20)
#define EJDAHGBHBOP_AGAOHONAOME_OFFSET UNITYSDK_OFFSET(0x7666F0)
#define EJDAHGBHBOP_BCDGJFHKDJI_OFFSET UNITYSDK_OFFSET(0x766650)
#define EJDAHGBHBOP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EJDAHGBHBOP_BILALLKNLLA_OFFSET UNITYSDK_OFFSET(0x766790)
#define EJDAHGBHBOP_CBFABJJBIOD_OFFSET UNITYSDK_OFFSET(0x755890)
#define EJDAHGBHBOP_EGDOAMLDCPB_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define EJDAHGBHBOP_GACHNDBGMBC_OFFSET UNITYSDK_OFFSET(0x7667E0)
#define EJDAHGBHBOP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EJDAHGBHBOP_IGMBBOHABMI_OFFSET UNITYSDK_OFFSET(0x764220)
#define EJDAHGBHBOP_IKLNPPBGHIL_OFFSET UNITYSDK_OFFSET(0x757690)
#define EJDAHGBHBOP_JJAIEMLGBAA_OFFSET UNITYSDK_OFFSET(0x757E20)
#define EJDAHGBHBOP_LNHLCEJBOIN_OFFSET UNITYSDK_OFFSET(0x7666A0)
#define EJDAHGBHBOP_MMHJEMNNEFL_OFFSET UNITYSDK_OFFSET(0x761710)
#define EJDAHGBHBOP_MOGCCMIDMBL_OFFSET UNITYSDK_OFFSET(0x755190)
#define EJDAHGBHBOP_PGPBNGAHPFA_OFFSET UNITYSDK_OFFSET(0x766740)
#define EJDAHGBHBOP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EJDAHGBHBOP_TypeDefinitionIndex = 11751;

struct alignas(4) EJDAHGBHBOP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDAHGBHBOP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EJDAHGBHBOP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::EJDAHGBHBOP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EJDAHGBHBOP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EJDAHGBHBOP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* EGDOAMLDCPB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDAHGBHBOP_EGDOAMLDCPB_OFFSET))(this);
	}

	::System::Single IGMBBOHABMI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDAHGBHBOP_IGMBBOHABMI_OFFSET))(this);
	}

	::System::Int32 MOGCCMIDMBL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDAHGBHBOP_MOGCCMIDMBL_OFFSET))(this);
	}

	::System::String* ADIIMBHKLCK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDAHGBHBOP_ADIIMBHKLCK_OFFSET))(this);
	}

	::System::String* IKLNPPBGHIL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDAHGBHBOP_IKLNPPBGHIL_OFFSET))(this);
	}

	::System::Int32 CBFABJJBIOD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDAHGBHBOP_CBFABJJBIOD_OFFSET))(this);
	}

	::System::UInt64 BCDGJFHKDJI()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDAHGBHBOP_BCDGJFHKDJI_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDAHGBHBOP_ACOEONABOJL_OFFSET))(this);
	}

	::System::Single LNHLCEJBOIN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDAHGBHBOP_LNHLCEJBOIN_OFFSET))(this);
	}

	::System::String* MMHJEMNNEFL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDAHGBHBOP_MMHJEMNNEFL_OFFSET))(this);
	}

	::System::Single AGAOHONAOME()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDAHGBHBOP_AGAOHONAOME_OFFSET))(this);
	}

	::System::Single PGPBNGAHPFA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDAHGBHBOP_PGPBNGAHPFA_OFFSET))(this);
	}

	::System::String* JJAIEMLGBAA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDAHGBHBOP_JJAIEMLGBAA_OFFSET))(this);
	}

	::System::Single BILALLKNLLA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDAHGBHBOP_BILALLKNLLA_OFFSET))(this);
	}

	::System::Single GACHNDBGMBC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDAHGBHBOP_GACHNDBGMBC_OFFSET))(this);
	}
};
