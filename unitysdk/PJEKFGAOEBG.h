#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PJEKFGAOEBG_ABNJABLFOGN_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PJEKFGAOEBG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PJEKFGAOEBG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PJEKFGAOEBG_MLMPIEEGOGH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define PJEKFGAOEBG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1EE04710)
#define PJEKFGAOEBG_PILPAGGGFDC_OFFSET UNITYSDK_OFFSET(0x754970)
#define PJEKFGAOEBG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PJEKFGAOEBG_TypeDefinitionIndex = 11243;

struct alignas(4) PJEKFGAOEBG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJEKFGAOEBG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PJEKFGAOEBG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PJEKFGAOEBG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PJEKFGAOEBG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PJEKFGAOEBG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 PILPAGGGFDC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJEKFGAOEBG_PILPAGGGFDC_OFFSET))(this);
	}

	::System::String* MLMPIEEGOGH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJEKFGAOEBG_MLMPIEEGOGH_OFFSET))(this);
	}

	::System::Int32 ABNJABLFOGN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJEKFGAOEBG_ABNJABLFOGN_OFFSET))(this);
	}

	/*
	::PJEKFGAOEBG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PJEKFGAOEBG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PJEKFGAOEBG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
