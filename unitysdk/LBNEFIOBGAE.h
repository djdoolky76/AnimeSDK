#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define LBNEFIOBGAE_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LBNEFIOBGAE_BEACIHBKFLA_OFFSET UNITYSDK_OFFSET(0x754920)
#define LBNEFIOBGAE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LBNEFIOBGAE_DCFAIIAJOPK_OFFSET UNITYSDK_OFFSET(0x7641D0)
#define LBNEFIOBGAE_FCDOFDOAIMC_OFFSET UNITYSDK_OFFSET(0x78A030)
#define LBNEFIOBGAE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LBNEFIOBGAE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18BDF970)
#define LBNEFIOBGAE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LBNEFIOBGAE_TypeDefinitionIndex = 11351;

struct alignas(4) LBNEFIOBGAE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNEFIOBGAE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LBNEFIOBGAE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LBNEFIOBGAE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LBNEFIOBGAE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LBNEFIOBGAE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::LBNEFIOBGAE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LBNEFIOBGAE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LBNEFIOBGAE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Single FCDOFDOAIMC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNEFIOBGAE_FCDOFDOAIMC_OFFSET))(this);
	}

	::System::Int32 BEACIHBKFLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNEFIOBGAE_BEACIHBKFLA_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNEFIOBGAE_ACOEONABOJL_OFFSET))(this);
	}

	::System::Single DCFAIIAJOPK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNEFIOBGAE_DCFAIIAJOPK_OFFSET))(this);
	}
};
