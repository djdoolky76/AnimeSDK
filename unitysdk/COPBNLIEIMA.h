#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define COPBNLIEIMA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define COPBNLIEIMA_CBHPKMHAJDF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define COPBNLIEIMA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define COPBNLIEIMA_KBBELPFNABP_OFFSET UNITYSDK_OFFSET(0x754B50)
#define COPBNLIEIMA_MLKBGICANHA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define COPBNLIEIMA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17F164E0)
#define COPBNLIEIMA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int COPBNLIEIMA_TypeDefinitionIndex = 13900;

struct alignas(4) COPBNLIEIMA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + COPBNLIEIMA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + COPBNLIEIMA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 CBHPKMHAJDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COPBNLIEIMA_CBHPKMHAJDF_OFFSET))(this);
	}

	/*
	::COPBNLIEIMA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::COPBNLIEIMA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + COPBNLIEIMA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::COPBNLIEIMA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::COPBNLIEIMA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + COPBNLIEIMA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 MLKBGICANHA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COPBNLIEIMA_MLKBGICANHA_OFFSET))(this);
	}

	::System::Int32 KBBELPFNABP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COPBNLIEIMA_KBBELPFNABP_OFFSET))(this);
	}
};
