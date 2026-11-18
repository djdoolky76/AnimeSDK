#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EPMGCCEHJHL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EPMGCCEHJHL_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x756B90)
#define EPMGCCEHJHL_BKPPGNIFOAD_OFFSET UNITYSDK_OFFSET(0x756D50)
#define EPMGCCEHJHL_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x754F10)
#define EPMGCCEHJHL_EPBDFBNKOCD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EPMGCCEHJHL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EPMGCCEHJHL_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define EPMGCCEHJHL_NHHBPLAMKGG_OFFSET UNITYSDK_OFFSET(0x756B10)
#define EPMGCCEHJHL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EPMGCCEHJHL_TypeDefinitionIndex = 10388;

struct alignas(4) EPMGCCEHJHL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMGCCEHJHL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EPMGCCEHJHL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::EPMGCCEHJHL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EPMGCCEHJHL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EPMGCCEHJHL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 EPBDFBNKOCD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMGCCEHJHL_EPBDFBNKOCD_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMGCCEHJHL_ENJENAJGHFI_OFFSET))(this);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMGCCEHJHL_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::String* NHHBPLAMKGG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMGCCEHJHL_NHHBPLAMKGG_OFFSET))(this);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMGCCEHJHL_IFDIOIOCGDP_OFFSET))(this);
	}

	::System::String* BKPPGNIFOAD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMGCCEHJHL_BKPPGNIFOAD_OFFSET))(this);
	}
};
