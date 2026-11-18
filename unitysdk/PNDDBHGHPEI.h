#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PNDDBHGHPEI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PNDDBHGHPEI_COIFMONFOBI_OFFSET UNITYSDK_OFFSET(0x754970)
#define PNDDBHGHPEI_FGIKGPCCGJD_OFFSET UNITYSDK_OFFSET(0x756B90)
#define PNDDBHGHPEI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PNDDBHGHPEI_GHHLPDNHMBH_OFFSET UNITYSDK_OFFSET(0x755E40)
#define PNDDBHGHPEI_GIGFEBGBGFI_OFFSET UNITYSDK_OFFSET(0x754F10)
#define PNDDBHGHPEI_JEHIPPAOADO_OFFSET UNITYSDK_OFFSET(0x758780)
#define PNDDBHGHPEI_MFGKBAFKCCA_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define PNDDBHGHPEI_NENDAECBCEM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define PNDDBHGHPEI_NFDDMGBFGNI_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define PNDDBHGHPEI_NJKDANCMLGN_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PNDDBHGHPEI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PNDDBHGHPEI_TypeDefinitionIndex = 16610;

struct alignas(4) PNDDBHGHPEI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDDBHGHPEI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNDDBHGHPEI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 COIFMONFOBI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDDBHGHPEI_COIFMONFOBI_OFFSET))(this);
	}

	/*
	::PNDDBHGHPEI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PNDDBHGHPEI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNDDBHGHPEI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHHLPDNHMBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDDBHGHPEI_GHHLPDNHMBH_OFFSET))(this);
	}

	::System::Int32 FGIKGPCCGJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDDBHGHPEI_FGIKGPCCGJD_OFFSET))(this);
	}

	::System::Int32 NFDDMGBFGNI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDDBHGHPEI_NFDDMGBFGNI_OFFSET))(this);
	}

	::System::Int32 NJKDANCMLGN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDDBHGHPEI_NJKDANCMLGN_OFFSET))(this);
	}

	::System::Int32 JEHIPPAOADO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDDBHGHPEI_JEHIPPAOADO_OFFSET))(this);
	}

	::System::String* MFGKBAFKCCA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDDBHGHPEI_MFGKBAFKCCA_OFFSET))(this);
	}

	::System::Int32 NENDAECBCEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDDBHGHPEI_NENDAECBCEM_OFFSET))(this);
	}

	::System::String* GIGFEBGBGFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDDBHGHPEI_GIGFEBGBGFI_OFFSET))(this);
	}
};
