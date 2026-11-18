#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IOINLCMJJMN_AFIKPGHMNCI_OFFSET UNITYSDK_OFFSET(0x755C70)
#define IOINLCMJJMN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IOINLCMJJMN_ELOAKJLAGOH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IOINLCMJJMN_FLDDGALGJIP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define IOINLCMJJMN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IOINLCMJJMN_JJOLGCNENHA_OFFSET UNITYSDK_OFFSET(0x756B10)
#define IOINLCMJJMN_LAOFMJKLLKF_OFFSET UNITYSDK_OFFSET(0x755A00)
#define IOINLCMJJMN_NLCOAMBLCIA_OFFSET UNITYSDK_OFFSET(0x756D50)
#define IOINLCMJJMN_PIPBPLEIPFK_OFFSET UNITYSDK_OFFSET(0x754B50)
#define IOINLCMJJMN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IOINLCMJJMN_TypeDefinitionIndex = 11921;

struct alignas(4) IOINLCMJJMN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOINLCMJJMN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOINLCMJJMN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* FLDDGALGJIP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOINLCMJJMN_FLDDGALGJIP_OFFSET))(this);
	}

	::System::Int32 AFIKPGHMNCI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOINLCMJJMN_AFIKPGHMNCI_OFFSET))(this);
	}

	/*
	::IOINLCMJJMN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IOINLCMJJMN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOINLCMJJMN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* NLCOAMBLCIA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOINLCMJJMN_NLCOAMBLCIA_OFFSET))(this);
	}

	::System::Int32 PIPBPLEIPFK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOINLCMJJMN_PIPBPLEIPFK_OFFSET))(this);
	}

	::System::Int32 ELOAKJLAGOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOINLCMJJMN_ELOAKJLAGOH_OFFSET))(this);
	}

	::System::String* LAOFMJKLLKF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOINLCMJJMN_LAOFMJKLLKF_OFFSET))(this);
	}

	::System::String* JJOLGCNENHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOINLCMJJMN_JJOLGCNENHA_OFFSET))(this);
	}
};
