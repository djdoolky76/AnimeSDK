#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DKNMNJKHIIE_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DKNMNJKHIIE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DKNMNJKHIIE_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define DKNMNJKHIIE_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x755A00)
#define DKNMNJKHIIE_FCICGEALCFA_OFFSET UNITYSDK_OFFSET(0x754920)
#define DKNMNJKHIIE_FELDILHMMIK_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define DKNMNJKHIIE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DKNMNJKHIIE_JKIBGFNPLBK_OFFSET UNITYSDK_OFFSET(0x758840)
#define DKNMNJKHIIE_JMNININIFAD_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define DKNMNJKHIIE_LDIENHMALPL_OFFSET UNITYSDK_OFFSET(0x754970)
#define DKNMNJKHIIE_MBKDAHKIDLE_OFFSET UNITYSDK_OFFSET(0x758200)
#define DKNMNJKHIIE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x15753800)
#define DKNMNJKHIIE_PAINFLDDDDD_OFFSET UNITYSDK_OFFSET(0x762B30)
#define DKNMNJKHIIE_PHMJNDHGAMO_OFFSET UNITYSDK_OFFSET(0x761930)
#define DKNMNJKHIIE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DKNMNJKHIIE_TypeDefinitionIndex = 17337;

struct alignas(4) DKNMNJKHIIE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNMNJKHIIE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DKNMNJKHIIE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNMNJKHIIE_ENJENAJGHFI_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNMNJKHIIE_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean PHMJNDHGAMO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNMNJKHIIE_PHMJNDHGAMO_OFFSET))(this);
	}

	/*
	static ::DKNMNJKHIIE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DKNMNJKHIIE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DKNMNJKHIIE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean JKIBGFNPLBK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNMNJKHIIE_JKIBGFNPLBK_OFFSET))(this);
	}

	::System::Int32 LDIENHMALPL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNMNJKHIIE_LDIENHMALPL_OFFSET))(this);
	}

	::System::Boolean PAINFLDDDDD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNMNJKHIIE_PAINFLDDDDD_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNMNJKHIIE_DECMGICKDLH_OFFSET))(this);
	}

	::System::String* FELDILHMMIK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNMNJKHIIE_FELDILHMMIK_OFFSET))(this);
	}

	/*
	::DKNMNJKHIIE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DKNMNJKHIIE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DKNMNJKHIIE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FCICGEALCFA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNMNJKHIIE_FCICGEALCFA_OFFSET))(this);
	}

	::System::Int32 JMNININIFAD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNMNJKHIIE_JMNININIFAD_OFFSET))(this);
	}

	::System::Boolean MBKDAHKIDLE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + DKNMNJKHIIE_MBKDAHKIDLE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
