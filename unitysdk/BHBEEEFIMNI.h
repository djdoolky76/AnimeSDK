#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BHBEEEFIMNI_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BHBEEEFIMNI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BHBEEEFIMNI_CBHNFLBEJCB_OFFSET UNITYSDK_OFFSET(0x755A00)
#define BHBEEEFIMNI_CJDGPJDLCHC_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define BHBEEEFIMNI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BHBEEEFIMNI_HPGHDLONMFH_OFFSET UNITYSDK_OFFSET(0x756B10)
#define BHBEEEFIMNI_ILMKLGIDBJI_OFFSET UNITYSDK_OFFSET(0x754F10)
#define BHBEEEFIMNI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17A7B880)
#define BHBEEEFIMNI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BHBEEEFIMNI_TypeDefinitionIndex = 14980;

struct alignas(4) BHBEEEFIMNI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBEEEFIMNI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BHBEEEFIMNI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BHBEEEFIMNI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BHBEEEFIMNI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BHBEEEFIMNI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* CBHNFLBEJCB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBEEEFIMNI_CBHNFLBEJCB_OFFSET))(this);
	}

	::System::String* HPGHDLONMFH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBEEEFIMNI_HPGHDLONMFH_OFFSET))(this);
	}

	::System::String* ILMKLGIDBJI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBEEEFIMNI_ILMKLGIDBJI_OFFSET))(this);
	}

	/*
	::BHBEEEFIMNI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BHBEEEFIMNI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BHBEEEFIMNI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* CJDGPJDLCHC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBEEEFIMNI_CJDGPJDLCHC_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBEEEFIMNI_ACOEONABOJL_OFFSET))(this);
	}
};
