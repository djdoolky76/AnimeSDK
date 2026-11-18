#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MEDHJPEPDNC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MEDHJPEPDNC_FJHJBEBLGPN_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define MEDHJPEPDNC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MEDHJPEPDNC_JBOIMNAPIKG_OFFSET UNITYSDK_OFFSET(0x755D20)
#define MEDHJPEPDNC_MLKFNKGDBPN_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MEDHJPEPDNC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MEDHJPEPDNC_TypeDefinitionIndex = 14657;

struct alignas(4) MEDHJPEPDNC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDHJPEPDNC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEDHJPEPDNC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 JBOIMNAPIKG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDHJPEPDNC_JBOIMNAPIKG_OFFSET))(this);
	}

	::System::Int32 MLKFNKGDBPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDHJPEPDNC_MLKFNKGDBPN_OFFSET))(this);
	}

	::System::String* FJHJBEBLGPN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDHJPEPDNC_FJHJBEBLGPN_OFFSET))(this);
	}

	/*
	::MEDHJPEPDNC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MEDHJPEPDNC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEDHJPEPDNC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
