#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ODEPPCKBBLO_AIBHNAAJJJO_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define ODEPPCKBBLO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ODEPPCKBBLO_CGGLFNAKCKG_OFFSET UNITYSDK_OFFSET(0x755C70)
#define ODEPPCKBBLO_FELKFGDEMJC_OFFSET UNITYSDK_OFFSET(0x7666F0)
#define ODEPPCKBBLO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ODEPPCKBBLO_GNHIFGNJMLN_OFFSET UNITYSDK_OFFSET(0x758590)
#define ODEPPCKBBLO_GPIEOMGPDLK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ODEPPCKBBLO_KLDKAHLNLJE_OFFSET UNITYSDK_OFFSET(0x756B10)
#define ODEPPCKBBLO_MEFJNBFCDJP_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define ODEPPCKBBLO_NIFFKHJEINH_OFFSET UNITYSDK_OFFSET(0x754970)
#define ODEPPCKBBLO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1CFF6BD0)
#define ODEPPCKBBLO_OCIPDCDMCEK_OFFSET UNITYSDK_OFFSET(0x758780)
#define ODEPPCKBBLO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ODEPPCKBBLO_TypeDefinitionIndex = 11992;

struct alignas(4) ODEPPCKBBLO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODEPPCKBBLO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODEPPCKBBLO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* AIBHNAAJJJO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODEPPCKBBLO_AIBHNAAJJJO_OFFSET))(this);
	}

	::System::Int32 GPIEOMGPDLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODEPPCKBBLO_GPIEOMGPDLK_OFFSET))(this);
	}

	::System::Single FELKFGDEMJC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ODEPPCKBBLO_FELKFGDEMJC_OFFSET))(this);
	}

	::System::String* KLDKAHLNLJE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODEPPCKBBLO_KLDKAHLNLJE_OFFSET))(this);
	}

	::System::Int32 OCIPDCDMCEK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODEPPCKBBLO_OCIPDCDMCEK_OFFSET))(this);
	}

	::System::Int32 NIFFKHJEINH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODEPPCKBBLO_NIFFKHJEINH_OFFSET))(this);
	}

	::System::Int32 MEFJNBFCDJP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODEPPCKBBLO_MEFJNBFCDJP_OFFSET))(this);
	}

	::System::Boolean GNHIFGNJMLN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODEPPCKBBLO_GNHIFGNJMLN_OFFSET))(this);
	}

	/*
	static ::ODEPPCKBBLO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ODEPPCKBBLO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ODEPPCKBBLO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 CGGLFNAKCKG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODEPPCKBBLO_CGGLFNAKCKG_OFFSET))(this);
	}

	/*
	::ODEPPCKBBLO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ODEPPCKBBLO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODEPPCKBBLO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
