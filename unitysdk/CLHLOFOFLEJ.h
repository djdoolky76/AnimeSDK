#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CLHLOFOFLEJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CLHLOFOFLEJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CLHLOFOFLEJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CLHLOFOFLEJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x157917A0)
#define CLHLOFOFLEJ_PKKHFLMGNHG_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define CLHLOFOFLEJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CLHLOFOFLEJ_TypeDefinitionIndex = 11200;

struct alignas(4) CLHLOFOFLEJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHLOFOFLEJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLHLOFOFLEJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::CLHLOFOFLEJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CLHLOFOFLEJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLHLOFOFLEJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHLOFOFLEJ_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* PKKHFLMGNHG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHLOFOFLEJ_PKKHFLMGNHG_OFFSET))(this);
	}

	/*
	static ::CLHLOFOFLEJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CLHLOFOFLEJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLHLOFOFLEJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
