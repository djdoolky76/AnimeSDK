#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KHMAAKJOMFL_AGBKCMPAAHA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KHMAAKJOMFL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KHMAAKJOMFL_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define KHMAAKJOMFL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KHMAAKJOMFL_HGLEJBBNIFG_OFFSET UNITYSDK_OFFSET(0x756D50)
#define KHMAAKJOMFL_JNALCPHLGGK_OFFSET UNITYSDK_OFFSET(0x78A030)
#define KHMAAKJOMFL_KDGMMKMMLAE_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define KHMAAKJOMFL_KLHGMJGMGJJ_OFFSET UNITYSDK_OFFSET(0x754F10)
#define KHMAAKJOMFL_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x755E40)
#define KHMAAKJOMFL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B6413C0)
#define KHMAAKJOMFL_PGNBJHKENKD_OFFSET UNITYSDK_OFFSET(0x7A7050)
#define KHMAAKJOMFL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KHMAAKJOMFL_TypeDefinitionIndex = 15528;

struct alignas(4) KHMAAKJOMFL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMAAKJOMFL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KHMAAKJOMFL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Single PGNBJHKENKD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMAAKJOMFL_PGNBJHKENKD_OFFSET))(this);
	}

	::System::String* KDGMMKMMLAE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMAAKJOMFL_KDGMMKMMLAE_OFFSET))(this);
	}

	::System::Int32 AGBKCMPAAHA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMAAKJOMFL_AGBKCMPAAHA_OFFSET))(this);
	}

	/*
	static ::KHMAAKJOMFL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KHMAAKJOMFL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KHMAAKJOMFL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::KHMAAKJOMFL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KHMAAKJOMFL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KHMAAKJOMFL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* HGLEJBBNIFG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMAAKJOMFL_HGLEJBBNIFG_OFFSET))(this);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMAAKJOMFL_DNKLBHKEDEM_OFFSET))(this);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMAAKJOMFL_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::Single JNALCPHLGGK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMAAKJOMFL_JNALCPHLGGK_OFFSET))(this);
	}

	::System::String* KLHGMJGMGJJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMAAKJOMFL_KLHGMJGMGJJ_OFFSET))(this);
	}
};
