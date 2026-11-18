#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define NGJFPALIBJF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NGJFPALIBJF_CMHLJGNLOPP_OFFSET UNITYSDK_OFFSET(0x754B50)
#define NGJFPALIBJF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NGJFPALIBJF_LFJJJKJAJKN_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NGJFPALIBJF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1CCEBA70)
#define NGJFPALIBJF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NGJFPALIBJF_TypeDefinitionIndex = 9543;

struct alignas(4) NGJFPALIBJF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJFPALIBJF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NGJFPALIBJF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LFJJJKJAJKN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJFPALIBJF_LFJJJKJAJKN_OFFSET))(this);
	}

	/*
	::NGJFPALIBJF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NGJFPALIBJF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NGJFPALIBJF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 CMHLJGNLOPP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJFPALIBJF_CMHLJGNLOPP_OFFSET))(this);
	}

	/*
	static ::NGJFPALIBJF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NGJFPALIBJF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NGJFPALIBJF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
