#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define LNLPLIFCPPM_BEFEHMPJGIF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LNLPLIFCPPM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LNLPLIFCPPM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LNLPLIFCPPM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19102300)
#define LNLPLIFCPPM_PBBEAEJCHCN_OFFSET UNITYSDK_OFFSET(0x754B50)
#define LNLPLIFCPPM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LNLPLIFCPPM_TypeDefinitionIndex = 11053;

struct alignas(4) LNLPLIFCPPM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLPLIFCPPM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LNLPLIFCPPM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 BEFEHMPJGIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLPLIFCPPM_BEFEHMPJGIF_OFFSET))(this);
	}

	/*
	static ::LNLPLIFCPPM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LNLPLIFCPPM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LNLPLIFCPPM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 PBBEAEJCHCN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLPLIFCPPM_PBBEAEJCHCN_OFFSET))(this);
	}

	/*
	::LNLPLIFCPPM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LNLPLIFCPPM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LNLPLIFCPPM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
