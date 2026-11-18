#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KNBLIANFOFA_AEDFLJEHIJK_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KNBLIANFOFA_APPONMIEDNI_OFFSET UNITYSDK_OFFSET(0x757290)
#define KNBLIANFOFA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KNBLIANFOFA_BLLOPKJDOBE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KNBLIANFOFA_FELDILHMMIK_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define KNBLIANFOFA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KNBLIANFOFA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B644810)
#define KNBLIANFOFA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KNBLIANFOFA_TypeDefinitionIndex = 14025;

struct alignas(4) KNBLIANFOFA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBLIANFOFA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KNBLIANFOFA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* APPONMIEDNI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBLIANFOFA_APPONMIEDNI_OFFSET))(this);
	}

	/*
	::KNBLIANFOFA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KNBLIANFOFA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KNBLIANFOFA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 AEDFLJEHIJK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBLIANFOFA_AEDFLJEHIJK_OFFSET))(this);
	}

	::System::String* FELDILHMMIK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBLIANFOFA_FELDILHMMIK_OFFSET))(this);
	}

	/*
	static ::KNBLIANFOFA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KNBLIANFOFA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KNBLIANFOFA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 BLLOPKJDOBE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBLIANFOFA_BLLOPKJDOBE_OFFSET))(this);
	}
};
