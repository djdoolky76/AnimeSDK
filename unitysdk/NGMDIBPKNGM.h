#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NGMDIBPKNGM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NGMDIBPKNGM_AKJEBFJMGCJ_OFFSET UNITYSDK_OFFSET(0x754920)
#define NGMDIBPKNGM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NGMDIBPKNGM_EOKEPOPNEGB_OFFSET UNITYSDK_OFFSET(0x755A00)
#define NGMDIBPKNGM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NGMDIBPKNGM_NENDAECBCEM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define NGMDIBPKNGM_NFDDMGBFGNI_OFFSET UNITYSDK_OFFSET(0x754970)
#define NGMDIBPKNGM_NJDBMPNFAAA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define NGMDIBPKNGM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NGMDIBPKNGM_TypeDefinitionIndex = 15175;

struct alignas(4) NGMDIBPKNGM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGMDIBPKNGM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NGMDIBPKNGM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NFDDMGBFGNI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGMDIBPKNGM_NFDDMGBFGNI_OFFSET))(this);
	}

	::System::Int32 AKJEBFJMGCJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGMDIBPKNGM_AKJEBFJMGCJ_OFFSET))(this);
	}

	::System::Int32 NJDBMPNFAAA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGMDIBPKNGM_NJDBMPNFAAA_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGMDIBPKNGM_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::NGMDIBPKNGM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NGMDIBPKNGM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NGMDIBPKNGM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NENDAECBCEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGMDIBPKNGM_NENDAECBCEM_OFFSET))(this);
	}

	::System::String* EOKEPOPNEGB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGMDIBPKNGM_EOKEPOPNEGB_OFFSET))(this);
	}
};
