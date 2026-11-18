#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ONGDBLHDJFI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ONGDBLHDJFI_DFDIFHLPHKB_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define ONGDBLHDJFI_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ONGDBLHDJFI_DPPJFGDKCJH_OFFSET UNITYSDK_OFFSET(0x754970)
#define ONGDBLHDJFI_EKKCFHGFAGG_OFFSET UNITYSDK_OFFSET(0x754F10)
#define ONGDBLHDJFI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ONGDBLHDJFI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C0A9D80)
#define ONGDBLHDJFI_OEAHIFBMDNI_OFFSET UNITYSDK_OFFSET(0x756B10)
#define ONGDBLHDJFI_PJDELAGEDDM_OFFSET UNITYSDK_OFFSET(0x756B90)
#define ONGDBLHDJFI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ONGDBLHDJFI_TypeDefinitionIndex = 9750;

struct alignas(4) ONGDBLHDJFI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGDBLHDJFI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONGDBLHDJFI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::ONGDBLHDJFI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ONGDBLHDJFI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ONGDBLHDJFI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGDBLHDJFI_DNKLBHKEDEM_OFFSET))(this);
	}

	::System::Int32 PJDELAGEDDM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGDBLHDJFI_PJDELAGEDDM_OFFSET))(this);
	}

	::System::String* OEAHIFBMDNI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGDBLHDJFI_OEAHIFBMDNI_OFFSET))(this);
	}

	::System::Int32 DPPJFGDKCJH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGDBLHDJFI_DPPJFGDKCJH_OFFSET))(this);
	}

	::System::String* EKKCFHGFAGG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGDBLHDJFI_EKKCFHGFAGG_OFFSET))(this);
	}

	::System::String* DFDIFHLPHKB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGDBLHDJFI_DFDIFHLPHKB_OFFSET))(this);
	}

	/*
	::ONGDBLHDJFI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ONGDBLHDJFI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONGDBLHDJFI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
