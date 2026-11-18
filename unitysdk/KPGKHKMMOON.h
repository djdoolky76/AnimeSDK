#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KPGKHKMMOON_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KPGKHKMMOON_FNBOALOOFEL_OFFSET UNITYSDK_OFFSET(0x756360)
#define KPGKHKMMOON_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KPGKHKMMOON_HOGLPNHPPOJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KPGKHKMMOON_JBOIMNAPIKG_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KPGKHKMMOON_LMDMNKPMOBO_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define KPGKHKMMOON_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19587F20)
#define KPGKHKMMOON_PDPABEEMJNK_OFFSET UNITYSDK_OFFSET(0x754F10)
#define KPGKHKMMOON___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KPGKHKMMOON_TypeDefinitionIndex = 13762;

struct alignas(4) KPGKHKMMOON
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGKHKMMOON_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KPGKHKMMOON___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LMDMNKPMOBO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGKHKMMOON_LMDMNKPMOBO_OFFSET))(this);
	}

	/*
	static ::KPGKHKMMOON OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KPGKHKMMOON(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KPGKHKMMOON_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* PDPABEEMJNK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGKHKMMOON_PDPABEEMJNK_OFFSET))(this);
	}

	/*
	::KPGKHKMMOON BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KPGKHKMMOON(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KPGKHKMMOON_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 JBOIMNAPIKG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGKHKMMOON_JBOIMNAPIKG_OFFSET))(this);
	}

	::System::Int32 HOGLPNHPPOJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGKHKMMOON_HOGLPNHPPOJ_OFFSET))(this);
	}

	::System::Boolean FNBOALOOFEL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KPGKHKMMOON_FNBOALOOFEL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
