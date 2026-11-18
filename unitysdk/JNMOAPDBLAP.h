#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JNMOAPDBLAP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JNMOAPDBLAP_FDBCDLHJAKL_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define JNMOAPDBLAP_FGLBBOGKCPG_OFFSET UNITYSDK_OFFSET(0x758320)
#define JNMOAPDBLAP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JNMOAPDBLAP_LAGGHDGDCCN_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define JNMOAPDBLAP_MMLIHCLFNAK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JNMOAPDBLAP_NDCPGHGEPAA_OFFSET UNITYSDK_OFFSET(0x758780)
#define JNMOAPDBLAP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1954F070)
#define JNMOAPDBLAP_OGHLKPAPHKA_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define JNMOAPDBLAP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JNMOAPDBLAP_TypeDefinitionIndex = 17163;

struct alignas(4) JNMOAPDBLAP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMOAPDBLAP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JNMOAPDBLAP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* LAGGHDGDCCN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMOAPDBLAP_LAGGHDGDCCN_OFFSET))(this);
	}

	::System::String* OGHLKPAPHKA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMOAPDBLAP_OGHLKPAPHKA_OFFSET))(this);
	}

	/*
	::JNMOAPDBLAP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JNMOAPDBLAP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JNMOAPDBLAP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NDCPGHGEPAA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMOAPDBLAP_NDCPGHGEPAA_OFFSET))(this);
	}

	/*
	static ::JNMOAPDBLAP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JNMOAPDBLAP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JNMOAPDBLAP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 MMLIHCLFNAK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMOAPDBLAP_MMLIHCLFNAK_OFFSET))(this);
	}

	::System::String* FGLBBOGKCPG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMOAPDBLAP_FGLBBOGKCPG_OFFSET))(this);
	}

	::System::String* FDBCDLHJAKL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMOAPDBLAP_FDBCDLHJAKL_OFFSET))(this);
	}
};
