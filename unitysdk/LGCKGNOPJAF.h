#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LGCKGNOPJAF_ANFCNFIEFCN_OFFSET UNITYSDK_OFFSET(0x754970)
#define LGCKGNOPJAF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LGCKGNOPJAF_CMDLGFOIANJ_OFFSET UNITYSDK_OFFSET(0x756B10)
#define LGCKGNOPJAF_EABGLLHCCHD_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define LGCKGNOPJAF_FICEONPGHPP_OFFSET UNITYSDK_OFFSET(0x755D20)
#define LGCKGNOPJAF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LGCKGNOPJAF_HEEIDGJBAAK_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define LGCKGNOPJAF_LACJJANHJGC_OFFSET UNITYSDK_OFFSET(0x758780)
#define LGCKGNOPJAF_NGIBMGBGHEL_OFFSET UNITYSDK_OFFSET(0x756B90)
#define LGCKGNOPJAF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1732DBA0)
#define LGCKGNOPJAF_ONOLHJGKLGI_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LGCKGNOPJAF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LGCKGNOPJAF_TypeDefinitionIndex = 14165;

struct alignas(4) LGCKGNOPJAF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCKGNOPJAF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGCKGNOPJAF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LGCKGNOPJAF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LGCKGNOPJAF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LGCKGNOPJAF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* EABGLLHCCHD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCKGNOPJAF_EABGLLHCCHD_OFFSET))(this);
	}

	::System::Int32 ONOLHJGKLGI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCKGNOPJAF_ONOLHJGKLGI_OFFSET))(this);
	}

	::System::String* CMDLGFOIANJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCKGNOPJAF_CMDLGFOIANJ_OFFSET))(this);
	}

	::System::Int32 FICEONPGHPP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCKGNOPJAF_FICEONPGHPP_OFFSET))(this);
	}

	::System::Int32 ANFCNFIEFCN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCKGNOPJAF_ANFCNFIEFCN_OFFSET))(this);
	}

	::System::Int32 NGIBMGBGHEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCKGNOPJAF_NGIBMGBGHEL_OFFSET))(this);
	}

	::System::Int32 LACJJANHJGC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCKGNOPJAF_LACJJANHJGC_OFFSET))(this);
	}

	::System::String* HEEIDGJBAAK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCKGNOPJAF_HEEIDGJBAAK_OFFSET))(this);
	}

	/*
	::LGCKGNOPJAF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LGCKGNOPJAF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGCKGNOPJAF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
