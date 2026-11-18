#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LMHBLKJIOCA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LMHBLKJIOCA_CBAEBNEMCDE_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define LMHBLKJIOCA_EIGHPGCHKBC_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define LMHBLKJIOCA_ELNKGEACDBO_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define LMHBLKJIOCA_GAGAKPFGBHA_OFFSET UNITYSDK_OFFSET(0x757190)
#define LMHBLKJIOCA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LMHBLKJIOCA_KIKKJGLNILI_OFFSET UNITYSDK_OFFSET(0x755A00)
#define LMHBLKJIOCA_LGKKKMKAIJF_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define LMHBLKJIOCA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B654C80)
#define LMHBLKJIOCA_OKLAOKBFANM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LMHBLKJIOCA_OLPKMBHNIIA_OFFSET UNITYSDK_OFFSET(0x757290)
#define LMHBLKJIOCA_ONKJBLCFALK_OFFSET UNITYSDK_OFFSET(0x756B10)
#define LMHBLKJIOCA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LMHBLKJIOCA_TypeDefinitionIndex = 13667;

struct alignas(4) LMHBLKJIOCA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMHBLKJIOCA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LMHBLKJIOCA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* LGKKKMKAIJF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMHBLKJIOCA_LGKKKMKAIJF_OFFSET))(this);
	}

	::System::String* KIKKJGLNILI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMHBLKJIOCA_KIKKJGLNILI_OFFSET))(this);
	}

	::System::String* EIGHPGCHKBC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMHBLKJIOCA_EIGHPGCHKBC_OFFSET))(this);
	}

	/*
	::LMHBLKJIOCA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LMHBLKJIOCA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LMHBLKJIOCA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* ONKJBLCFALK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMHBLKJIOCA_ONKJBLCFALK_OFFSET))(this);
	}

	::System::String* OLPKMBHNIIA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMHBLKJIOCA_OLPKMBHNIIA_OFFSET))(this);
	}

	::System::String* GAGAKPFGBHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMHBLKJIOCA_GAGAKPFGBHA_OFFSET))(this);
	}

	/*
	static ::LMHBLKJIOCA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LMHBLKJIOCA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LMHBLKJIOCA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 OKLAOKBFANM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMHBLKJIOCA_OKLAOKBFANM_OFFSET))(this);
	}

	::System::String* ELNKGEACDBO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMHBLKJIOCA_ELNKGEACDBO_OFFSET))(this);
	}

	::System::String* CBAEBNEMCDE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMHBLKJIOCA_CBAEBNEMCDE_OFFSET))(this);
	}
};
