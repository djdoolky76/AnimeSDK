#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CEBBCJDECCK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CEBBCJDECCK_FCLAADJJNEL_OFFSET UNITYSDK_OFFSET(0x756B90)
#define CEBBCJDECCK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CEBBCJDECCK_JOLFFMEHDPN_OFFSET UNITYSDK_OFFSET(0x754920)
#define CEBBCJDECCK_KNPIAPNDNKJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CEBBCJDECCK_NGAKJLHABDF_OFFSET UNITYSDK_OFFSET(0x754F10)
#define CEBBCJDECCK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A583A70)
#define CEBBCJDECCK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CEBBCJDECCK_TypeDefinitionIndex = 14053;

struct alignas(4) CEBBCJDECCK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBBCJDECCK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CEBBCJDECCK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::CEBBCJDECCK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CEBBCJDECCK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CEBBCJDECCK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FCLAADJJNEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBBCJDECCK_FCLAADJJNEL_OFFSET))(this);
	}

	::System::Int32 KNPIAPNDNKJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBBCJDECCK_KNPIAPNDNKJ_OFFSET))(this);
	}

	::System::String* NGAKJLHABDF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBBCJDECCK_NGAKJLHABDF_OFFSET))(this);
	}

	/*
	static ::CEBBCJDECCK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CEBBCJDECCK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CEBBCJDECCK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 JOLFFMEHDPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBBCJDECCK_JOLFFMEHDPN_OFFSET))(this);
	}
};
