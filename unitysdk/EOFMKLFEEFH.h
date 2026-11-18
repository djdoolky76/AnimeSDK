#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EOFMKLFEEFH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EOFMKLFEEFH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EOFMKLFEEFH_CCIIJKDNIAD_OFFSET UNITYSDK_OFFSET(0x754970)
#define EOFMKLFEEFH_DNBHFHFGGEJ_OFFSET UNITYSDK_OFFSET(0x755D20)
#define EOFMKLFEEFH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EOFMKLFEEFH_ICCGHCLODHL_OFFSET UNITYSDK_OFFSET(0x755A00)
#define EOFMKLFEEFH_IPJONOOFHFO_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EOFMKLFEEFH_NFNJGNKIELJ_OFFSET UNITYSDK_OFFSET(0x756B10)
#define EOFMKLFEEFH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EOFMKLFEEFH_TypeDefinitionIndex = 17776;

struct alignas(4) EOFMKLFEEFH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOFMKLFEEFH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EOFMKLFEEFH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOFMKLFEEFH_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* ICCGHCLODHL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOFMKLFEEFH_ICCGHCLODHL_OFFSET))(this);
	}

	::System::Int32 IPJONOOFHFO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOFMKLFEEFH_IPJONOOFHFO_OFFSET))(this);
	}

	::System::Int32 DNBHFHFGGEJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOFMKLFEEFH_DNBHFHFGGEJ_OFFSET))(this);
	}

	/*
	::EOFMKLFEEFH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EOFMKLFEEFH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EOFMKLFEEFH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 CCIIJKDNIAD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOFMKLFEEFH_CCIIJKDNIAD_OFFSET))(this);
	}

	::System::String* NFNJGNKIELJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOFMKLFEEFH_NFNJGNKIELJ_OFFSET))(this);
	}
};
