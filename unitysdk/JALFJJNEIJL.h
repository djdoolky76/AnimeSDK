#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JALFJJNEIJL_AJEKKIOEMOB_OFFSET UNITYSDK_OFFSET(0x7563E0)
#define JALFJJNEIJL_AOJJKKNHCDB_OFFSET UNITYSDK_OFFSET(0x756780)
#define JALFJJNEIJL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JALFJJNEIJL_DDBDHGJHNLH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define JALFJJNEIJL_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x756D50)
#define JALFJJNEIJL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JALFJJNEIJL_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define JALFJJNEIJL_JKCIFMFJKMB_OFFSET UNITYSDK_OFFSET(0x761240)
#define JALFJJNEIJL_KGADGGICBLG_OFFSET UNITYSDK_OFFSET(0x788CF0)
#define JALFJJNEIJL_LLHMECJCBBB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JALFJJNEIJL_MCBLFECEBNB_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define JALFJJNEIJL_NCDLBDKNLPF_OFFSET UNITYSDK_OFFSET(0x7624E0)
#define JALFJJNEIJL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A500260)
#define JALFJJNEIJL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JALFJJNEIJL_TypeDefinitionIndex = 17020;

struct alignas(4) JALFJJNEIJL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JALFJJNEIJL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JALFJJNEIJL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 JKCIFMFJKMB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JALFJJNEIJL_JKCIFMFJKMB_OFFSET))(this);
	}

	::System::UInt64 KGADGGICBLG()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + JALFJJNEIJL_KGADGGICBLG_OFFSET))(this);
	}

	::System::Boolean NCDLBDKNLPF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JALFJJNEIJL_NCDLBDKNLPF_OFFSET))(this);
	}

	::System::Int32 LLHMECJCBBB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JALFJJNEIJL_LLHMECJCBBB_OFFSET))(this);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JALFJJNEIJL_IFDIOIOCGDP_OFFSET))(this);
	}

	/*
	static ::JALFJJNEIJL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JALFJJNEIJL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JALFJJNEIJL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean MCBLFECEBNB(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JALFJJNEIJL_MCBLFECEBNB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* DDBDHGJHNLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JALFJJNEIJL_DDBDHGJHNLH_OFFSET))(this);
	}

	::System::Int32 AJEKKIOEMOB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JALFJJNEIJL_AJEKKIOEMOB_OFFSET))(this);
	}

	/*
	::JALFJJNEIJL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JALFJJNEIJL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JALFJJNEIJL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JALFJJNEIJL_DECMGICKDLH_OFFSET))(this);
	}

	::System::Boolean AOJJKKNHCDB(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JALFJJNEIJL_AOJJKKNHCDB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
