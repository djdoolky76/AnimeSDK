#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define GCFBBDPCJDH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GCFBBDPCJDH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GCFBBDPCJDH_HFBGIGBAEJM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define GCFBBDPCJDH_JCFNONLLBFI_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GCFBBDPCJDH_OEGGAJHHMKN_OFFSET UNITYSDK_OFFSET(0x754B50)
#define GCFBBDPCJDH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GCFBBDPCJDH_TypeDefinitionIndex = 14896;

struct alignas(4) GCFBBDPCJDH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFBBDPCJDH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GCFBBDPCJDH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 JCFNONLLBFI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFBBDPCJDH_JCFNONLLBFI_OFFSET))(this);
	}

	::System::Int32 HFBGIGBAEJM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFBBDPCJDH_HFBGIGBAEJM_OFFSET))(this);
	}

	::System::Int32 OEGGAJHHMKN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFBBDPCJDH_OEGGAJHHMKN_OFFSET))(this);
	}

	/*
	::GCFBBDPCJDH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GCFBBDPCJDH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GCFBBDPCJDH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
