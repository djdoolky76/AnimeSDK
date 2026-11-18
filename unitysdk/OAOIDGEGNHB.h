#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OAOIDGEGNHB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OAOIDGEGNHB_BKCAFCHOAMG_OFFSET UNITYSDK_OFFSET(0x755C70)
#define OAOIDGEGNHB_DABNDEHKBHN_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define OAOIDGEGNHB_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OAOIDGEGNHB_EFJCHJLFNAE_OFFSET UNITYSDK_OFFSET(0x754920)
#define OAOIDGEGNHB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OAOIDGEGNHB_IBGOPJKKFJA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define OAOIDGEGNHB_KIBDGAPIGJC_OFFSET UNITYSDK_OFFSET(0x757190)
#define OAOIDGEGNHB_LNDNIGPNFOP_OFFSET UNITYSDK_OFFSET(0x756B90)
#define OAOIDGEGNHB_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define OAOIDGEGNHB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BF603A0)
#define OAOIDGEGNHB_OIFMBMJBPBN_OFFSET UNITYSDK_OFFSET(0x754970)
#define OAOIDGEGNHB_PPCLFENBJCG_OFFSET UNITYSDK_OFFSET(0x758780)
#define OAOIDGEGNHB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OAOIDGEGNHB_TypeDefinitionIndex = 16532;

struct alignas(4) OAOIDGEGNHB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOIDGEGNHB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OAOIDGEGNHB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 OIFMBMJBPBN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOIDGEGNHB_OIFMBMJBPBN_OFFSET))(this);
	}

	::System::Int32 BKCAFCHOAMG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOIDGEGNHB_BKCAFCHOAMG_OFFSET))(this);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOIDGEGNHB_NFKFHJBEPGD_OFFSET))(this);
	}

	::System::Int32 LNDNIGPNFOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOIDGEGNHB_LNDNIGPNFOP_OFFSET))(this);
	}

	::System::String* DABNDEHKBHN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOIDGEGNHB_DABNDEHKBHN_OFFSET))(this);
	}

	/*
	::OAOIDGEGNHB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OAOIDGEGNHB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OAOIDGEGNHB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 PPCLFENBJCG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOIDGEGNHB_PPCLFENBJCG_OFFSET))(this);
	}

	::System::String* KIBDGAPIGJC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOIDGEGNHB_KIBDGAPIGJC_OFFSET))(this);
	}

	::System::Int32 EFJCHJLFNAE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOIDGEGNHB_EFJCHJLFNAE_OFFSET))(this);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOIDGEGNHB_DNKLBHKEDEM_OFFSET))(this);
	}

	::System::Int32 IBGOPJKKFJA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOIDGEGNHB_IBGOPJKKFJA_OFFSET))(this);
	}

	/*
	static ::OAOIDGEGNHB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OAOIDGEGNHB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OAOIDGEGNHB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
