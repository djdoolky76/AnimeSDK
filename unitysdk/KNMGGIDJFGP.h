#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KNMGGIDJFGP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KNMGGIDJFGP_BOEPEJDKBGF_OFFSET UNITYSDK_OFFSET(0x756B10)
#define KNMGGIDJFGP_DKJLLNMNMGC_OFFSET UNITYSDK_OFFSET(0x755A00)
#define KNMGGIDJFGP_EACIDPPMFKL_OFFSET UNITYSDK_OFFSET(0x754F10)
#define KNMGGIDJFGP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KNMGGIDJFGP_LNPDPLOPKNP_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define KNMGGIDJFGP_NABKEIIAGGE_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KNMGGIDJFGP_NAMHJNCMDHG_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define KNMGGIDJFGP_NIELGJGJCFO_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KNMGGIDJFGP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19D9C390)
#define KNMGGIDJFGP_OJGGCANNBAF_OFFSET UNITYSDK_OFFSET(0x758320)
#define KNMGGIDJFGP_PECBEJHFKAG_OFFSET UNITYSDK_OFFSET(0x756D50)
#define KNMGGIDJFGP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KNMGGIDJFGP_TypeDefinitionIndex = 10221;

struct alignas(4) KNMGGIDJFGP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMGGIDJFGP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KNMGGIDJFGP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* PECBEJHFKAG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMGGIDJFGP_PECBEJHFKAG_OFFSET))(this);
	}

	::System::Int32 NABKEIIAGGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMGGIDJFGP_NABKEIIAGGE_OFFSET))(this);
	}

	::System::String* OJGGCANNBAF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMGGIDJFGP_OJGGCANNBAF_OFFSET))(this);
	}

	::System::String* DKJLLNMNMGC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMGGIDJFGP_DKJLLNMNMGC_OFFSET))(this);
	}

	/*
	::KNMGGIDJFGP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KNMGGIDJFGP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KNMGGIDJFGP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* NAMHJNCMDHG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMGGIDJFGP_NAMHJNCMDHG_OFFSET))(this);
	}

	::System::Int32 NIELGJGJCFO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMGGIDJFGP_NIELGJGJCFO_OFFSET))(this);
	}

	::System::String* LNPDPLOPKNP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMGGIDJFGP_LNPDPLOPKNP_OFFSET))(this);
	}

	::System::String* BOEPEJDKBGF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMGGIDJFGP_BOEPEJDKBGF_OFFSET))(this);
	}

	::System::String* EACIDPPMFKL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMGGIDJFGP_EACIDPPMFKL_OFFSET))(this);
	}

	/*
	static ::KNMGGIDJFGP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KNMGGIDJFGP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KNMGGIDJFGP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
