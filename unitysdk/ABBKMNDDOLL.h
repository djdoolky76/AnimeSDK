#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ABBKMNDDOLL_ACMDKCDEFOO_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define ABBKMNDDOLL_BCAIOKLJOPN_OFFSET UNITYSDK_OFFSET(0x754920)
#define ABBKMNDDOLL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ABBKMNDDOLL_FPJJIFEENHN_OFFSET UNITYSDK_OFFSET(0x7562E0)
#define ABBKMNDDOLL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ABBKMNDDOLL_HGDLMOMPCLP_OFFSET UNITYSDK_OFFSET(0x755A00)
#define ABBKMNDDOLL_LNBBPIDEKPD_OFFSET UNITYSDK_OFFSET(0x754970)
#define ABBKMNDDOLL_NALODBHKLIA_OFFSET UNITYSDK_OFFSET(0x756720)
#define ABBKMNDDOLL_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ABBKMNDDOLL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B97F8A0)
#define ABBKMNDDOLL_OIEACHNNPKH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define ABBKMNDDOLL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ABBKMNDDOLL_TypeDefinitionIndex = 12443;

struct alignas(4) ABBKMNDDOLL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBKMNDDOLL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ABBKMNDDOLL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::ABBKMNDDOLL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ABBKMNDDOLL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ABBKMNDDOLL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BCAIOKLJOPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBKMNDDOLL_BCAIOKLJOPN_OFFSET))(this);
	}

	::System::Int32 NALODBHKLIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBKMNDDOLL_NALODBHKLIA_OFFSET))(this);
	}

	::System::String* HGDLMOMPCLP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBKMNDDOLL_HGDLMOMPCLP_OFFSET))(this);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBKMNDDOLL_NFKFHJBEPGD_OFFSET))(this);
	}

	/*
	static ::ABBKMNDDOLL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ABBKMNDDOLL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ABBKMNDDOLL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean FPJJIFEENHN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + ABBKMNDDOLL_FPJJIFEENHN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* OIEACHNNPKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBKMNDDOLL_OIEACHNNPKH_OFFSET))(this);
	}

	::System::String* ACMDKCDEFOO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBKMNDDOLL_ACMDKCDEFOO_OFFSET))(this);
	}

	::System::Int32 LNBBPIDEKPD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBKMNDDOLL_LNBBPIDEKPD_OFFSET))(this);
	}
};
