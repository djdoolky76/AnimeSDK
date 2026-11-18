#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define DGCKIBBBHLH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DGCKIBBBHLH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DGCKIBBBHLH_LCOLNEOIGDF_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DGCKIBBBHLH_LPKDNCDDDAI_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DGCKIBBBHLH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19F39920)
#define DGCKIBBBHLH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DGCKIBBBHLH_TypeDefinitionIndex = 11896;

struct alignas(4) DGCKIBBBHLH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCKIBBBHLH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DGCKIBBBHLH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::DGCKIBBBHLH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DGCKIBBBHLH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DGCKIBBBHLH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DGCKIBBBHLH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DGCKIBBBHLH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DGCKIBBBHLH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 LPKDNCDDDAI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCKIBBBHLH_LPKDNCDDDAI_OFFSET))(this);
	}

	::System::Int32 LCOLNEOIGDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCKIBBBHLH_LCOLNEOIGDF_OFFSET))(this);
	}
};
