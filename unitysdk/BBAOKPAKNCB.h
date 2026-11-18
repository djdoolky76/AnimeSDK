#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BBAOKPAKNCB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BBAOKPAKNCB_BFGJBICDJLL_OFFSET UNITYSDK_OFFSET(0x761710)
#define BBAOKPAKNCB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BBAOKPAKNCB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BBAOKPAKNCB_HLECPIEABFP_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define BBAOKPAKNCB_NPPFHOMGPIF_OFFSET UNITYSDK_OFFSET(0x757190)
#define BBAOKPAKNCB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19BDF930)
#define BBAOKPAKNCB_OOIOMGPHDGC_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define BBAOKPAKNCB_PBCEONNCLAK_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define BBAOKPAKNCB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BBAOKPAKNCB_TypeDefinitionIndex = 11185;

struct alignas(4) BBAOKPAKNCB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBAOKPAKNCB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BBAOKPAKNCB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBAOKPAKNCB_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 OOIOMGPHDGC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBAOKPAKNCB_OOIOMGPHDGC_OFFSET))(this);
	}

	::System::String* BFGJBICDJLL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBAOKPAKNCB_BFGJBICDJLL_OFFSET))(this);
	}

	/*
	static ::BBAOKPAKNCB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BBAOKPAKNCB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BBAOKPAKNCB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* HLECPIEABFP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBAOKPAKNCB_HLECPIEABFP_OFFSET))(this);
	}

	::System::String* NPPFHOMGPIF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBAOKPAKNCB_NPPFHOMGPIF_OFFSET))(this);
	}

	::System::String* PBCEONNCLAK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBAOKPAKNCB_PBCEONNCLAK_OFFSET))(this);
	}

	/*
	::BBAOKPAKNCB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BBAOKPAKNCB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BBAOKPAKNCB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
