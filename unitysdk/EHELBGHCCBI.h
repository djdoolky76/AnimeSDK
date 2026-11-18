#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EHELBGHCCBI_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EHELBGHCCBI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EHELBGHCCBI_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x754F10)
#define EHELBGHCCBI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EHELBGHCCBI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B0FB960)
#define EHELBGHCCBI_OCCMAIGKFBL_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EHELBGHCCBI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EHELBGHCCBI_TypeDefinitionIndex = 11096;

struct alignas(4) EHELBGHCCBI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHELBGHCCBI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHELBGHCCBI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHELBGHCCBI_ENJENAJGHFI_OFFSET))(this);
	}

	/*
	::EHELBGHCCBI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EHELBGHCCBI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHELBGHCCBI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 OCCMAIGKFBL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHELBGHCCBI_OCCMAIGKFBL_OFFSET))(this);
	}

	/*
	static ::EHELBGHCCBI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EHELBGHCCBI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EHELBGHCCBI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHELBGHCCBI_ACOEONABOJL_OFFSET))(this);
	}
};
