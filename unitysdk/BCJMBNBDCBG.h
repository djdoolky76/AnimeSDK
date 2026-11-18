#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BCJMBNBDCBG_AICLMBLOGLA_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define BCJMBNBDCBG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BCJMBNBDCBG_CKFLJLKDPOP_OFFSET UNITYSDK_OFFSET(0x757290)
#define BCJMBNBDCBG_DHPNLFNDKJE_OFFSET UNITYSDK_OFFSET(0x756B90)
#define BCJMBNBDCBG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BCJMBNBDCBG_GHKNFHOABCO_OFFSET UNITYSDK_OFFSET(0x754F10)
#define BCJMBNBDCBG_LFANCAKHPKL_OFFSET UNITYSDK_OFFSET(0x754970)
#define BCJMBNBDCBG_LOPDGLFFNGB_OFFSET UNITYSDK_OFFSET(0x756B10)
#define BCJMBNBDCBG_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BCJMBNBDCBG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19F17330)
#define BCJMBNBDCBG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BCJMBNBDCBG_TypeDefinitionIndex = 14957;

struct alignas(4) BCJMBNBDCBG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJMBNBDCBG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BCJMBNBDCBG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BCJMBNBDCBG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BCJMBNBDCBG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BCJMBNBDCBG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJMBNBDCBG_NKCNGLADFNA_OFFSET))(this);
	}

	::System::String* AICLMBLOGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJMBNBDCBG_AICLMBLOGLA_OFFSET))(this);
	}

	::System::String* CKFLJLKDPOP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJMBNBDCBG_CKFLJLKDPOP_OFFSET))(this);
	}

	/*
	::BCJMBNBDCBG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BCJMBNBDCBG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BCJMBNBDCBG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* LOPDGLFFNGB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJMBNBDCBG_LOPDGLFFNGB_OFFSET))(this);
	}

	::System::String* GHKNFHOABCO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJMBNBDCBG_GHKNFHOABCO_OFFSET))(this);
	}

	::System::Int32 DHPNLFNDKJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJMBNBDCBG_DHPNLFNDKJE_OFFSET))(this);
	}

	::System::Int32 LFANCAKHPKL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJMBNBDCBG_LFANCAKHPKL_OFFSET))(this);
	}
};
