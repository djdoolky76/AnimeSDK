#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PMFFHPKLEEN_ANFCNFIEFCN_OFFSET UNITYSDK_OFFSET(0x755C70)
#define PMFFHPKLEEN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PMFFHPKLEEN_CMDLGFOIANJ_OFFSET UNITYSDK_OFFSET(0x754F10)
#define PMFFHPKLEEN_CPPMMKLJJOP_OFFSET UNITYSDK_OFFSET(0x754920)
#define PMFFHPKLEEN_EABGLLHCCHD_OFFSET UNITYSDK_OFFSET(0x755A00)
#define PMFFHPKLEEN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PMFFHPKLEEN_HEEIDGJBAAK_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define PMFFHPKLEEN_NGIBMGBGHEL_OFFSET UNITYSDK_OFFSET(0x754970)
#define PMFFHPKLEEN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1EC87940)
#define PMFFHPKLEEN_ONOLHJGKLGI_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PMFFHPKLEEN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PMFFHPKLEEN_TypeDefinitionIndex = 9967;

struct alignas(4) PMFFHPKLEEN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFFHPKLEEN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMFFHPKLEEN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ONOLHJGKLGI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFFHPKLEEN_ONOLHJGKLGI_OFFSET))(this);
	}

	::System::String* EABGLLHCCHD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFFHPKLEEN_EABGLLHCCHD_OFFSET))(this);
	}

	/*
	::PMFFHPKLEEN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PMFFHPKLEEN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMFFHPKLEEN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 CPPMMKLJJOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFFHPKLEEN_CPPMMKLJJOP_OFFSET))(this);
	}

	::System::Int32 ANFCNFIEFCN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFFHPKLEEN_ANFCNFIEFCN_OFFSET))(this);
	}

	::System::Int32 NGIBMGBGHEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFFHPKLEEN_NGIBMGBGHEL_OFFSET))(this);
	}

	::System::String* HEEIDGJBAAK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFFHPKLEEN_HEEIDGJBAAK_OFFSET))(this);
	}

	::System::String* CMDLGFOIANJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFFHPKLEEN_CMDLGFOIANJ_OFFSET))(this);
	}

	/*
	static ::PMFFHPKLEEN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PMFFHPKLEEN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PMFFHPKLEEN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
