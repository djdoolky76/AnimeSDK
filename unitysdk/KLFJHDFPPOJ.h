#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KLFJHDFPPOJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KLFJHDFPPOJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KLFJHDFPPOJ_JBCOCAJJMHI_OFFSET UNITYSDK_OFFSET(0x755A00)
#define KLFJHDFPPOJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1749A4F0)
#define KLFJHDFPPOJ_OKHOIAAPMLD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KLFJHDFPPOJ_PGHKGNNICIN_OFFSET UNITYSDK_OFFSET(0x756B10)
#define KLFJHDFPPOJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KLFJHDFPPOJ_TypeDefinitionIndex = 16873;

struct alignas(4) KLFJHDFPPOJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFJHDFPPOJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLFJHDFPPOJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KLFJHDFPPOJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KLFJHDFPPOJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KLFJHDFPPOJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::KLFJHDFPPOJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KLFJHDFPPOJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLFJHDFPPOJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* JBCOCAJJMHI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFJHDFPPOJ_JBCOCAJJMHI_OFFSET))(this);
	}

	::System::Int32 OKHOIAAPMLD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFJHDFPPOJ_OKHOIAAPMLD_OFFSET))(this);
	}

	::System::String* PGHKGNNICIN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFJHDFPPOJ_PGHKGNNICIN_OFFSET))(this);
	}
};
