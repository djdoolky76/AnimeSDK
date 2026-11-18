#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define AJNOKMNMDFD_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AJNOKMNMDFD_AIOFEKIFCKA_OFFSET UNITYSDK_OFFSET(0x756B90)
#define AJNOKMNMDFD_BEMOCOMGDCD_OFFSET UNITYSDK_OFFSET(0x754970)
#define AJNOKMNMDFD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AJNOKMNMDFD_CHLNHBCCIIH_OFFSET UNITYSDK_OFFSET(0x757190)
#define AJNOKMNMDFD_DGFAJDNHCIJ_OFFSET UNITYSDK_OFFSET(0x755D20)
#define AJNOKMNMDFD_EKDCJDFJGGN_OFFSET UNITYSDK_OFFSET(0x754920)
#define AJNOKMNMDFD_FAGOLCGNHJN_OFFSET UNITYSDK_OFFSET(0x758780)
#define AJNOKMNMDFD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AJNOKMNMDFD_HOHAHBFKIBJ_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define AJNOKMNMDFD_KBBEAKPAIOA_OFFSET UNITYSDK_OFFSET(0x755C70)
#define AJNOKMNMDFD_MHJCDHFIJLI_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define AJNOKMNMDFD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AJNOKMNMDFD_TypeDefinitionIndex = 14281;

struct alignas(4) AJNOKMNMDFD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNOKMNMDFD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AJNOKMNMDFD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* CHLNHBCCIIH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNOKMNMDFD_CHLNHBCCIIH_OFFSET))(this);
	}

	/*
	::AJNOKMNMDFD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AJNOKMNMDFD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AJNOKMNMDFD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FAGOLCGNHJN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNOKMNMDFD_FAGOLCGNHJN_OFFSET))(this);
	}

	::System::Int32 MHJCDHFIJLI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNOKMNMDFD_MHJCDHFIJLI_OFFSET))(this);
	}

	::System::Int32 AIOFEKIFCKA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNOKMNMDFD_AIOFEKIFCKA_OFFSET))(this);
	}

	::System::Int32 HOHAHBFKIBJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNOKMNMDFD_HOHAHBFKIBJ_OFFSET))(this);
	}

	::System::Int32 KBBEAKPAIOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNOKMNMDFD_KBBEAKPAIOA_OFFSET))(this);
	}

	::System::Int32 EKDCJDFJGGN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNOKMNMDFD_EKDCJDFJGGN_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNOKMNMDFD_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 BEMOCOMGDCD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNOKMNMDFD_BEMOCOMGDCD_OFFSET))(this);
	}

	::System::Int32 DGFAJDNHCIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNOKMNMDFD_DGFAJDNHCIJ_OFFSET))(this);
	}
};
