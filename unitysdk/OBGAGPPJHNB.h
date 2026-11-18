#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OBGAGPPJHNB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OBGAGPPJHNB_AKJAILHOIEC_OFFSET UNITYSDK_OFFSET(0x755190)
#define OBGAGPPJHNB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OBGAGPPJHNB_BOLAJGCNCLB_OFFSET UNITYSDK_OFFSET(0x754970)
#define OBGAGPPJHNB_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define OBGAGPPJHNB_FJPGCNGHHCC_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define OBGAGPPJHNB_FKLGAFPBMBA_OFFSET UNITYSDK_OFFSET(0x757330)
#define OBGAGPPJHNB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OBGAGPPJHNB_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define OBGAGPPJHNB_JNFEILMIKNK_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define OBGAGPPJHNB_LJJCIGMGPAJ_OFFSET UNITYSDK_OFFSET(0x757B50)
#define OBGAGPPJHNB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BF763D0)
#define OBGAGPPJHNB_PLNBBDEBIII_OFFSET UNITYSDK_OFFSET(0x755710)
#define OBGAGPPJHNB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OBGAGPPJHNB_TypeDefinitionIndex = 10071;

struct alignas(4) OBGAGPPJHNB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGAGPPJHNB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBGAGPPJHNB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 AKJAILHOIEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGAGPPJHNB_AKJAILHOIEC_OFFSET))(this);
	}

	::System::Boolean LJJCIGMGPAJ(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + OBGAGPPJHNB_LJJCIGMGPAJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* PLNBBDEBIII()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGAGPPJHNB_PLNBBDEBIII_OFFSET))(this);
	}

	/*
	::OBGAGPPJHNB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OBGAGPPJHNB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBGAGPPJHNB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FJPGCNGHHCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGAGPPJHNB_FJPGCNGHHCC_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGAGPPJHNB_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 BOLAJGCNCLB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGAGPPJHNB_BOLAJGCNCLB_OFFSET))(this);
	}

	::System::Int32 FKLGAFPBMBA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGAGPPJHNB_FKLGAFPBMBA_OFFSET))(this);
	}

	::System::String* JNFEILMIKNK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGAGPPJHNB_JNFEILMIKNK_OFFSET))(this);
	}

	/*
	static ::OBGAGPPJHNB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OBGAGPPJHNB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OBGAGPPJHNB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGAGPPJHNB_HKELPCLHLEC_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGAGPPJHNB_DECMGICKDLH_OFFSET))(this);
	}
};
