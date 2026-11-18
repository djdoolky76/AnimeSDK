#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LJPKOOMNIDD_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LJPKOOMNIDD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LJPKOOMNIDD_CCDBAOOFMFA_OFFSET UNITYSDK_OFFSET(0x756D50)
#define LJPKOOMNIDD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LJPKOOMNIDD_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x755C70)
#define LJPKOOMNIDD_OAEOELMJIIE_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define LJPKOOMNIDD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17337A40)
#define LJPKOOMNIDD_OGNMEDNMNHE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define LJPKOOMNIDD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LJPKOOMNIDD_TypeDefinitionIndex = 10767;

struct alignas(4) LJPKOOMNIDD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPKOOMNIDD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJPKOOMNIDD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 OGNMEDNMNHE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPKOOMNIDD_OGNMEDNMNHE_OFFSET))(this);
	}

	::System::String* OAEOELMJIIE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPKOOMNIDD_OAEOELMJIIE_OFFSET))(this);
	}

	/*
	::LJPKOOMNIDD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LJPKOOMNIDD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJPKOOMNIDD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPKOOMNIDD_HKELPCLHLEC_OFFSET))(this);
	}

	/*
	static ::LJPKOOMNIDD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LJPKOOMNIDD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LJPKOOMNIDD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPKOOMNIDD_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* CCDBAOOFMFA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPKOOMNIDD_CCDBAOOFMFA_OFFSET))(this);
	}
};
