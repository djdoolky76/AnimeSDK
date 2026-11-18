#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KFHMEGGOMAJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KFHMEGGOMAJ_EECNDNIAFBM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KFHMEGGOMAJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KFHMEGGOMAJ_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KFHMEGGOMAJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1957CCF0)
#define KFHMEGGOMAJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KFHMEGGOMAJ_TypeDefinitionIndex = 11368;

struct alignas(4) KFHMEGGOMAJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHMEGGOMAJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KFHMEGGOMAJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::KFHMEGGOMAJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KFHMEGGOMAJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KFHMEGGOMAJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHMEGGOMAJ_NFKFHJBEPGD_OFFSET))(this);
	}

	/*
	static ::KFHMEGGOMAJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KFHMEGGOMAJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KFHMEGGOMAJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 EECNDNIAFBM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHMEGGOMAJ_EECNDNIAFBM_OFFSET))(this);
	}
};
