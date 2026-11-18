#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HMCAFIMFIOO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HMCAFIMFIOO_ECANOFAHABE_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define HMCAFIMFIOO_EMHCPPKBJDI_OFFSET UNITYSDK_OFFSET(0x758590)
#define HMCAFIMFIOO_FLAKGMHFGPE_OFFSET UNITYSDK_OFFSET(0x756B10)
#define HMCAFIMFIOO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HMCAFIMFIOO_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HMCAFIMFIOO_MIAHAKLNEOF_OFFSET UNITYSDK_OFFSET(0x755D20)
#define HMCAFIMFIOO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x15A90E60)
#define HMCAFIMFIOO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HMCAFIMFIOO_TypeDefinitionIndex = 9180;

struct alignas(4) HMCAFIMFIOO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMCAFIMFIOO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HMCAFIMFIOO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean EMHCPPKBJDI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMCAFIMFIOO_EMHCPPKBJDI_OFFSET))(this);
	}

	::System::String* ECANOFAHABE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMCAFIMFIOO_ECANOFAHABE_OFFSET))(this);
	}

	::System::String* FLAKGMHFGPE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMCAFIMFIOO_FLAKGMHFGPE_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMCAFIMFIOO_GKBAJJACIEA_OFFSET))(this);
	}

	::System::Int32 MIAHAKLNEOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMCAFIMFIOO_MIAHAKLNEOF_OFFSET))(this);
	}

	/*
	static ::HMCAFIMFIOO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HMCAFIMFIOO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HMCAFIMFIOO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::HMCAFIMFIOO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HMCAFIMFIOO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HMCAFIMFIOO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
