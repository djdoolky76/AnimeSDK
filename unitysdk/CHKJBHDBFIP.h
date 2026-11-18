#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CHKJBHDBFIP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CHKJBHDBFIP_EIGPMHAJPBB_OFFSET UNITYSDK_OFFSET(0x756B10)
#define CHKJBHDBFIP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CHKJBHDBFIP_JHGCKDJFNJA_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define CHKJBHDBFIP_LNLNHEMFAEC_OFFSET UNITYSDK_OFFSET(0x755A00)
#define CHKJBHDBFIP_MEAKGMCFGAL_OFFSET UNITYSDK_OFFSET(0x754F10)
#define CHKJBHDBFIP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x195026B0)
#define CHKJBHDBFIP_OLFNJPAJHGG_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CHKJBHDBFIP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CHKJBHDBFIP_TypeDefinitionIndex = 14119;

struct alignas(4) CHKJBHDBFIP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKJBHDBFIP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CHKJBHDBFIP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::CHKJBHDBFIP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CHKJBHDBFIP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CHKJBHDBFIP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::CHKJBHDBFIP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CHKJBHDBFIP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CHKJBHDBFIP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* MEAKGMCFGAL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKJBHDBFIP_MEAKGMCFGAL_OFFSET))(this);
	}

	::System::String* EIGPMHAJPBB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKJBHDBFIP_EIGPMHAJPBB_OFFSET))(this);
	}

	::System::String* JHGCKDJFNJA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKJBHDBFIP_JHGCKDJFNJA_OFFSET))(this);
	}

	::System::String* LNLNHEMFAEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKJBHDBFIP_LNLNHEMFAEC_OFFSET))(this);
	}

	::System::Int32 OLFNJPAJHGG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKJBHDBFIP_OLFNJPAJHGG_OFFSET))(this);
	}
};
