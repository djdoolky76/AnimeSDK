#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JNJPJNLGHNO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JNJPJNLGHNO_BPIOFDMDJOB_OFFSET UNITYSDK_OFFSET(0x754F10)
#define JNJPJNLGHNO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JNJPJNLGHNO_NNIMOJPNNCM_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define JNJPJNLGHNO_PKJCIGJCCMB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JNJPJNLGHNO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JNJPJNLGHNO_TypeDefinitionIndex = 12547;

struct alignas(4) JNJPJNLGHNO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJPJNLGHNO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JNJPJNLGHNO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::JNJPJNLGHNO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JNJPJNLGHNO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JNJPJNLGHNO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* NNIMOJPNNCM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJPJNLGHNO_NNIMOJPNNCM_OFFSET))(this);
	}

	::System::Int32 PKJCIGJCCMB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJPJNLGHNO_PKJCIGJCCMB_OFFSET))(this);
	}

	::System::String* BPIOFDMDJOB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJPJNLGHNO_BPIOFDMDJOB_OFFSET))(this);
	}
};
