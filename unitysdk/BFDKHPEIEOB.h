#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BFDKHPEIEOB_AKDBJMOKPKK_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define BFDKHPEIEOB_AMKCLJBIKLO_OFFSET UNITYSDK_OFFSET(0x756B90)
#define BFDKHPEIEOB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BFDKHPEIEOB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BFDKHPEIEOB_GIAFAJFFCKO_OFFSET UNITYSDK_OFFSET(0x754970)
#define BFDKHPEIEOB_HPNLJEACDIE_OFFSET UNITYSDK_OFFSET(0x758320)
#define BFDKHPEIEOB_KHCLBPHIPEP_OFFSET UNITYSDK_OFFSET(0x755D20)
#define BFDKHPEIEOB_KIGMDIAGNNE_OFFSET UNITYSDK_OFFSET(0x754B50)
#define BFDKHPEIEOB_LEIGPNAFJFM_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define BFDKHPEIEOB_LNGBABOLHGK_OFFSET UNITYSDK_OFFSET(0x754920)
#define BFDKHPEIEOB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19F19B60)
#define BFDKHPEIEOB_OPLLNKOAGII_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BFDKHPEIEOB_PBHGMANDAGJ_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define BFDKHPEIEOB_PCHMHIPALHD_OFFSET UNITYSDK_OFFSET(0x757290)
#define BFDKHPEIEOB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BFDKHPEIEOB_TypeDefinitionIndex = 13350;

struct alignas(4) BFDKHPEIEOB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDKHPEIEOB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFDKHPEIEOB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 OPLLNKOAGII()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDKHPEIEOB_OPLLNKOAGII_OFFSET))(this);
	}

	::System::Int32 KIGMDIAGNNE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDKHPEIEOB_KIGMDIAGNNE_OFFSET))(this);
	}

	::System::String* AKDBJMOKPKK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDKHPEIEOB_AKDBJMOKPKK_OFFSET))(this);
	}

	::System::String* HPNLJEACDIE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDKHPEIEOB_HPNLJEACDIE_OFFSET))(this);
	}

	/*
	::BFDKHPEIEOB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BFDKHPEIEOB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFDKHPEIEOB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 KHCLBPHIPEP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDKHPEIEOB_KHCLBPHIPEP_OFFSET))(this);
	}

	/*
	static ::BFDKHPEIEOB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BFDKHPEIEOB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BFDKHPEIEOB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* PCHMHIPALHD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDKHPEIEOB_PCHMHIPALHD_OFFSET))(this);
	}

	::System::String* PBHGMANDAGJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDKHPEIEOB_PBHGMANDAGJ_OFFSET))(this);
	}

	::System::String* LEIGPNAFJFM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDKHPEIEOB_LEIGPNAFJFM_OFFSET))(this);
	}

	::System::Int32 AMKCLJBIKLO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDKHPEIEOB_AMKCLJBIKLO_OFFSET))(this);
	}

	::System::Int32 LNGBABOLHGK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDKHPEIEOB_LNGBABOLHGK_OFFSET))(this);
	}

	::System::Int32 GIAFAJFFCKO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDKHPEIEOB_GIAFAJFFCKO_OFFSET))(this);
	}
};
