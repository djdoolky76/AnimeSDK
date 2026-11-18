#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FMABALPLECJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FMABALPLECJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FMABALPLECJ_BPHODGOMLKC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FMABALPLECJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FMABALPLECJ_NLAIFNFGGMA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define FMABALPLECJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x174627F0)
#define FMABALPLECJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FMABALPLECJ_TypeDefinitionIndex = 9738;

struct alignas(4) FMABALPLECJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMABALPLECJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMABALPLECJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMABALPLECJ_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::FMABALPLECJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FMABALPLECJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMABALPLECJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FMABALPLECJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FMABALPLECJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FMABALPLECJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 BPHODGOMLKC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMABALPLECJ_BPHODGOMLKC_OFFSET))(this);
	}

	::System::Int32 NLAIFNFGGMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMABALPLECJ_NLAIFNFGGMA_OFFSET))(this);
	}
};
