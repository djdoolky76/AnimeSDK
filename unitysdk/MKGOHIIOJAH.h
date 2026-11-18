#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MKGOHIIOJAH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MKGOHIIOJAH_AOGFLCFFINH_OFFSET UNITYSDK_OFFSET(0x754B50)
#define MKGOHIIOJAH_BAMNCDALCKP_OFFSET UNITYSDK_OFFSET(0x755C70)
#define MKGOHIIOJAH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MKGOHIIOJAH_CKICBGJKBJH_OFFSET UNITYSDK_OFFSET(0x757190)
#define MKGOHIIOJAH_DGFAJDNHCIJ_OFFSET UNITYSDK_OFFSET(0x756B90)
#define MKGOHIIOJAH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MKGOHIIOJAH_LJIBBAJHBBG_OFFSET UNITYSDK_OFFSET(0x757290)
#define MKGOHIIOJAH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1AD759E0)
#define MKGOHIIOJAH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MKGOHIIOJAH_TypeDefinitionIndex = 13850;

struct alignas(4) MKGOHIIOJAH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGOHIIOJAH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKGOHIIOJAH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 BAMNCDALCKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGOHIIOJAH_BAMNCDALCKP_OFFSET))(this);
	}

	::System::String* CKICBGJKBJH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGOHIIOJAH_CKICBGJKBJH_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGOHIIOJAH_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::MKGOHIIOJAH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MKGOHIIOJAH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKGOHIIOJAH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* LJIBBAJHBBG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGOHIIOJAH_LJIBBAJHBBG_OFFSET))(this);
	}

	::System::Int32 DGFAJDNHCIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGOHIIOJAH_DGFAJDNHCIJ_OFFSET))(this);
	}

	::System::Int32 AOGFLCFFINH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGOHIIOJAH_AOGFLCFFINH_OFFSET))(this);
	}

	/*
	static ::MKGOHIIOJAH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MKGOHIIOJAH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MKGOHIIOJAH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
