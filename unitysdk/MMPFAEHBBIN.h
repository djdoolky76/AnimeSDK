#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MMPFAEHBBIN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MMPFAEHBBIN_EGEHKPMHEAG_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MMPFAEHBBIN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MMPFAEHBBIN_NPNLBIAMHMA_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define MMPFAEHBBIN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BA9D6A0)
#define MMPFAEHBBIN_PAFKPENJJLC_OFFSET UNITYSDK_OFFSET(0x754F10)
#define MMPFAEHBBIN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MMPFAEHBBIN_TypeDefinitionIndex = 17249;

struct alignas(4) MMPFAEHBBIN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPFAEHBBIN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMPFAEHBBIN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MMPFAEHBBIN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MMPFAEHBBIN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MMPFAEHBBIN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* NPNLBIAMHMA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPFAEHBBIN_NPNLBIAMHMA_OFFSET))(this);
	}

	::System::Int32 EGEHKPMHEAG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPFAEHBBIN_EGEHKPMHEAG_OFFSET))(this);
	}

	/*
	::MMPFAEHBBIN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MMPFAEHBBIN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMPFAEHBBIN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* PAFKPENJJLC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPFAEHBBIN_PAFKPENJJLC_OFFSET))(this);
	}
};
