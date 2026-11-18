#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define OFOJOOPBGKM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OFOJOOPBGKM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OFOJOOPBGKM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OFOJOOPBGKM_HDOLIPONCMC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define OFOJOOPBGKM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BF7AC40)
#define OFOJOOPBGKM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OFOJOOPBGKM_TypeDefinitionIndex = 15859;

struct alignas(4) OFOJOOPBGKM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFOJOOPBGKM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OFOJOOPBGKM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFOJOOPBGKM_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 HDOLIPONCMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFOJOOPBGKM_HDOLIPONCMC_OFFSET))(this);
	}

	/*
	static ::OFOJOOPBGKM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OFOJOOPBGKM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OFOJOOPBGKM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::OFOJOOPBGKM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OFOJOOPBGKM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OFOJOOPBGKM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
