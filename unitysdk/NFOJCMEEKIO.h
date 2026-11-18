#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NFOJCMEEKIO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NFOJCMEEKIO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NFOJCMEEKIO_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define NFOJCMEEKIO_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define NFOJCMEEKIO_FCICGEALCFA_OFFSET UNITYSDK_OFFSET(0x755C70)
#define NFOJCMEEKIO_FELDILHMMIK_OFFSET UNITYSDK_OFFSET(0x756B10)
#define NFOJCMEEKIO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NFOJCMEEKIO_KEAMAOBLJEJ_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define NFOJCMEEKIO_KODAKADMMDI_OFFSET UNITYSDK_OFFSET(0x758780)
#define NFOJCMEEKIO_LDIENHMALPL_OFFSET UNITYSDK_OFFSET(0x754970)
#define NFOJCMEEKIO_MACHMPBMBPK_OFFSET UNITYSDK_OFFSET(0x755D20)
#define NFOJCMEEKIO_PCOLPNHDKNC_OFFSET UNITYSDK_OFFSET(0x755E40)
#define NFOJCMEEKIO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NFOJCMEEKIO_TypeDefinitionIndex = 15079;

struct alignas(4) NFOJCMEEKIO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFOJCMEEKIO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NFOJCMEEKIO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::NFOJCMEEKIO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NFOJCMEEKIO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NFOJCMEEKIO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFOJCMEEKIO_ENJENAJGHFI_OFFSET))(this);
	}

	::System::Int32 KODAKADMMDI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFOJCMEEKIO_KODAKADMMDI_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFOJCMEEKIO_DECMGICKDLH_OFFSET))(this);
	}

	::System::Int32 PCOLPNHDKNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFOJCMEEKIO_PCOLPNHDKNC_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFOJCMEEKIO_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 LDIENHMALPL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFOJCMEEKIO_LDIENHMALPL_OFFSET))(this);
	}

	::System::Int32 MACHMPBMBPK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFOJCMEEKIO_MACHMPBMBPK_OFFSET))(this);
	}

	::System::Int32 KEAMAOBLJEJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFOJCMEEKIO_KEAMAOBLJEJ_OFFSET))(this);
	}

	::System::String* FELDILHMMIK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFOJCMEEKIO_FELDILHMMIK_OFFSET))(this);
	}

	::System::Int32 FCICGEALCFA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFOJCMEEKIO_FCICGEALCFA_OFFSET))(this);
	}
};
