#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JJAGALKIFHA_AEAJPKILALJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JJAGALKIFHA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JJAGALKIFHA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JJAGALKIFHA_HEMAPHGPPGN_OFFSET UNITYSDK_OFFSET(0x755A00)
#define JJAGALKIFHA_JHACGCMLJDF_OFFSET UNITYSDK_OFFSET(0x754F10)
#define JJAGALKIFHA_OGECMPOCEAP_OFFSET UNITYSDK_OFFSET(0x754920)
#define JJAGALKIFHA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JJAGALKIFHA_TypeDefinitionIndex = 9288;

struct alignas(4) JJAGALKIFHA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAGALKIFHA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JJAGALKIFHA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 AEAJPKILALJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAGALKIFHA_AEAJPKILALJ_OFFSET))(this);
	}

	::System::String* HEMAPHGPPGN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAGALKIFHA_HEMAPHGPPGN_OFFSET))(this);
	}

	::System::Int32 OGECMPOCEAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAGALKIFHA_OGECMPOCEAP_OFFSET))(this);
	}

	/*
	::JJAGALKIFHA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JJAGALKIFHA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JJAGALKIFHA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* JHACGCMLJDF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAGALKIFHA_JHACGCMLJDF_OFFSET))(this);
	}
};
