#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LPOCFHBPIOJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LPOCFHBPIOJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LPOCFHBPIOJ_HGODFCFGNDA_OFFSET UNITYSDK_OFFSET(0x754F10)
#define LPOCFHBPIOJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1AB03040)
#define LPOCFHBPIOJ_POJLLCBKDDA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LPOCFHBPIOJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LPOCFHBPIOJ_TypeDefinitionIndex = 15801;

struct alignas(4) LPOCFHBPIOJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPOCFHBPIOJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LPOCFHBPIOJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 POJLLCBKDDA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPOCFHBPIOJ_POJLLCBKDDA_OFFSET))(this);
	}

	/*
	static ::LPOCFHBPIOJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LPOCFHBPIOJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LPOCFHBPIOJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::LPOCFHBPIOJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LPOCFHBPIOJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LPOCFHBPIOJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* HGODFCFGNDA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPOCFHBPIOJ_HGODFCFGNDA_OFFSET))(this);
	}
};
