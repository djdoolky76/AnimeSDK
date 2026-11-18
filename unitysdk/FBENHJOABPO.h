#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FBENHJOABPO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FBENHJOABPO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FBENHJOABPO_BHMMKDGCLGB_OFFSET UNITYSDK_OFFSET(0x754970)
#define FBENHJOABPO_FEMLPHIGLAP_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FBENHJOABPO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FBENHJOABPO_LFPFCAFBOEK_OFFSET UNITYSDK_OFFSET(0x755C70)
#define FBENHJOABPO_NEBLIFEABCP_OFFSET UNITYSDK_OFFSET(0x758780)
#define FBENHJOABPO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x174560D0)
#define FBENHJOABPO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FBENHJOABPO_TypeDefinitionIndex = 12199;

struct alignas(4) FBENHJOABPO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBENHJOABPO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FBENHJOABPO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 FEMLPHIGLAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBENHJOABPO_FEMLPHIGLAP_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBENHJOABPO_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 NEBLIFEABCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBENHJOABPO_NEBLIFEABCP_OFFSET))(this);
	}

	/*
	static ::FBENHJOABPO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FBENHJOABPO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FBENHJOABPO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::FBENHJOABPO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FBENHJOABPO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FBENHJOABPO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LFPFCAFBOEK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBENHJOABPO_LFPFCAFBOEK_OFFSET))(this);
	}

	::System::Int32 BHMMKDGCLGB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBENHJOABPO_BHMMKDGCLGB_OFFSET))(this);
	}
};
