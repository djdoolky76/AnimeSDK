#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CKDBGOKCIDD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CKDBGOKCIDD_GEADINPIDDE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CKDBGOKCIDD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CKDBGOKCIDD_HIOBHICMOCO_OFFSET UNITYSDK_OFFSET(0x754A70)
#define CKDBGOKCIDD_JLBDIIEBGBO_OFFSET UNITYSDK_OFFSET(0x757290)
#define CKDBGOKCIDD_LCOILJEGAGP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define CKDBGOKCIDD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19ACEEF0)
#define CKDBGOKCIDD_OLEAOEONCNH_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define CKDBGOKCIDD_PFOMFDNCAKO_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define CKDBGOKCIDD_PNBMHLADLOB_OFFSET UNITYSDK_OFFSET(0x755D20)
#define CKDBGOKCIDD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CKDBGOKCIDD_TypeDefinitionIndex = 14881;

struct alignas(4) CKDBGOKCIDD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKDBGOKCIDD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CKDBGOKCIDD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PFOMFDNCAKO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKDBGOKCIDD_PFOMFDNCAKO_OFFSET))(this);
	}

	::System::Boolean HIOBHICMOCO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CKDBGOKCIDD_HIOBHICMOCO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GEADINPIDDE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKDBGOKCIDD_GEADINPIDDE_OFFSET))(this);
	}

	::System::Int32 PNBMHLADLOB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKDBGOKCIDD_PNBMHLADLOB_OFFSET))(this);
	}

	/*
	::CKDBGOKCIDD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CKDBGOKCIDD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CKDBGOKCIDD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* LCOILJEGAGP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKDBGOKCIDD_LCOILJEGAGP_OFFSET))(this);
	}

	/*
	static ::CKDBGOKCIDD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CKDBGOKCIDD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CKDBGOKCIDD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* JLBDIIEBGBO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKDBGOKCIDD_JLBDIIEBGBO_OFFSET))(this);
	}

	::System::Int32 OLEAOEONCNH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKDBGOKCIDD_OLEAOEONCNH_OFFSET))(this);
	}
};
