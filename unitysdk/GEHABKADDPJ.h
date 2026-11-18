#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GEHABKADDPJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GEHABKADDPJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GEHABKADDPJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GEHABKADDPJ_HDAGGDKMDAI_OFFSET UNITYSDK_OFFSET(0x754B50)
#define GEHABKADDPJ_LKCBMOKGOAB_OFFSET UNITYSDK_OFFSET(0x755A00)
#define GEHABKADDPJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B110570)
#define GEHABKADDPJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GEHABKADDPJ_TypeDefinitionIndex = 12122;

struct alignas(4) GEHABKADDPJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHABKADDPJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GEHABKADDPJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::GEHABKADDPJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GEHABKADDPJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GEHABKADDPJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* LKCBMOKGOAB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHABKADDPJ_LKCBMOKGOAB_OFFSET))(this);
	}

	::System::Int32 HDAGGDKMDAI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHABKADDPJ_HDAGGDKMDAI_OFFSET))(this);
	}

	/*
	static ::GEHABKADDPJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GEHABKADDPJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GEHABKADDPJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHABKADDPJ_ACOEONABOJL_OFFSET))(this);
	}
};
