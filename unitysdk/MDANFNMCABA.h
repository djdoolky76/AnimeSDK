#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/GPJMHAAEIKO.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MDANFNMCABA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MDANFNMCABA_DOJILHIHJND_OFFSET UNITYSDK_OFFSET(0x7D7A50)
#define MDANFNMCABA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MDANFNMCABA_HPAEJMJJEOF_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define MDANFNMCABA_KALKCNJKKDF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MDANFNMCABA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MDANFNMCABA_TypeDefinitionIndex = 14793;

struct alignas(4) MDANFNMCABA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDANFNMCABA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDANFNMCABA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* HPAEJMJJEOF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDANFNMCABA_HPAEJMJJEOF_OFFSET))(this);
	}

	/*
	::MDANFNMCABA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MDANFNMCABA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDANFNMCABA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::GPJMHAAEIKO DOJILHIHJND()
	{
		return ((::GPJMHAAEIKO(*)(::PVOID))((::PBYTE)hIl2Cpp + MDANFNMCABA_DOJILHIHJND_OFFSET))(this);
	}

	::System::Int32 KALKCNJKKDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDANFNMCABA_KALKCNJKKDF_OFFSET))(this);
	}
};
