#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FJGBHMONIJC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FJGBHMONIJC_DAGFMAMDMMG_OFFSET UNITYSDK_OFFSET(0x758780)
#define FJGBHMONIJC_EGHJCJFPBJG_OFFSET UNITYSDK_OFFSET(0x755E40)
#define FJGBHMONIJC_FCGOANNACPB_OFFSET UNITYSDK_OFFSET(0x762B30)
#define FJGBHMONIJC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FJGBHMONIJC_IGOMFALFBED_OFFSET UNITYSDK_OFFSET(0x755C70)
#define FJGBHMONIJC_IOAGBNMODPF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FJGBHMONIJC_MLKEENHGKJG_OFFSET UNITYSDK_OFFSET(0x756B90)
#define FJGBHMONIJC_NMHIONBLKAP_OFFSET UNITYSDK_OFFSET(0x766400)
#define FJGBHMONIJC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B4C4100)
#define FJGBHMONIJC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FJGBHMONIJC_TypeDefinitionIndex = 16350;

struct alignas(4) FJGBHMONIJC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGBHMONIJC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJGBHMONIJC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FJGBHMONIJC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FJGBHMONIJC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FJGBHMONIJC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean NMHIONBLKAP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGBHMONIJC_NMHIONBLKAP_OFFSET))(this);
	}

	::System::Int32 MLKEENHGKJG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGBHMONIJC_MLKEENHGKJG_OFFSET))(this);
	}

	::System::Int32 IGOMFALFBED()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGBHMONIJC_IGOMFALFBED_OFFSET))(this);
	}

	::System::Boolean FCGOANNACPB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGBHMONIJC_FCGOANNACPB_OFFSET))(this);
	}

	::System::Int32 EGHJCJFPBJG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGBHMONIJC_EGHJCJFPBJG_OFFSET))(this);
	}

	::System::Int32 IOAGBNMODPF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGBHMONIJC_IOAGBNMODPF_OFFSET))(this);
	}

	/*
	::FJGBHMONIJC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FJGBHMONIJC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJGBHMONIJC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DAGFMAMDMMG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGBHMONIJC_DAGFMAMDMMG_OFFSET))(this);
	}
};
