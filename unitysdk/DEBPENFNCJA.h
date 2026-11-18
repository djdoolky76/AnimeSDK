#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DEBPENFNCJA_ALPNDKEKDAC_OFFSET UNITYSDK_OFFSET(0x7606B0)
#define DEBPENFNCJA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DEBPENFNCJA_EKMLCGKLCKI_OFFSET UNITYSDK_OFFSET(0x761980)
#define DEBPENFNCJA_FMJMLIDPMEP_OFFSET UNITYSDK_OFFSET(0x754970)
#define DEBPENFNCJA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DEBPENFNCJA_JHIPKMGCAFC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DEBPENFNCJA_JOENLMINFCF_OFFSET UNITYSDK_OFFSET(0x755190)
#define DEBPENFNCJA_KJILABMMMGI_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define DEBPENFNCJA_LKBCLDBKILJ_OFFSET UNITYSDK_OFFSET(0x758320)
#define DEBPENFNCJA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17A96960)
#define DEBPENFNCJA_OHGBPCKADIA_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define DEBPENFNCJA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DEBPENFNCJA_TypeDefinitionIndex = 12564;

struct alignas(4) DEBPENFNCJA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBPENFNCJA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEBPENFNCJA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DEBPENFNCJA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DEBPENFNCJA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DEBPENFNCJA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 JOENLMINFCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBPENFNCJA_JOENLMINFCF_OFFSET))(this);
	}

	/*
	::DEBPENFNCJA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DEBPENFNCJA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEBPENFNCJA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FMJMLIDPMEP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBPENFNCJA_FMJMLIDPMEP_OFFSET))(this);
	}

	::System::String* LKBCLDBKILJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBPENFNCJA_LKBCLDBKILJ_OFFSET))(this);
	}

	::System::String* ALPNDKEKDAC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBPENFNCJA_ALPNDKEKDAC_OFFSET))(this);
	}

	::System::Int32 JHIPKMGCAFC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBPENFNCJA_JHIPKMGCAFC_OFFSET))(this);
	}

	::System::Int32 KJILABMMMGI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBPENFNCJA_KJILABMMMGI_OFFSET))(this);
	}

	::System::Int32 EKMLCGKLCKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBPENFNCJA_EKMLCGKLCKI_OFFSET))(this);
	}

	::System::String* OHGBPCKADIA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBPENFNCJA_OHGBPCKADIA_OFFSET))(this);
	}
};
