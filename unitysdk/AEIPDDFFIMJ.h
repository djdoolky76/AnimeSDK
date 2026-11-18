#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define AEIPDDFFIMJ_ACCDJOIMBAE_OFFSET UNITYSDK_OFFSET(0x755E40)
#define AEIPDDFFIMJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AEIPDDFFIMJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AEIPDDFFIMJ_KKNNPLPEOFO_OFFSET UNITYSDK_OFFSET(0x754B50)
#define AEIPDDFFIMJ_MHKKOFEKPHI_OFFSET UNITYSDK_OFFSET(0x755D20)
#define AEIPDDFFIMJ_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AEIPDDFFIMJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A515050)
#define AEIPDDFFIMJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AEIPDDFFIMJ_TypeDefinitionIndex = 14920;

struct alignas(4) AEIPDDFFIMJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEIPDDFFIMJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AEIPDDFFIMJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AEIPDDFFIMJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::AEIPDDFFIMJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + AEIPDDFFIMJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::AEIPDDFFIMJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AEIPDDFFIMJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AEIPDDFFIMJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 KKNNPLPEOFO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEIPDDFFIMJ_KKNNPLPEOFO_OFFSET))(this);
	}

	::System::Int32 ACCDJOIMBAE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEIPDDFFIMJ_ACCDJOIMBAE_OFFSET))(this);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEIPDDFFIMJ_NKCNGLADFNA_OFFSET))(this);
	}

	::System::Int32 MHKKOFEKPHI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEIPDDFFIMJ_MHKKOFEKPHI_OFFSET))(this);
	}
};
