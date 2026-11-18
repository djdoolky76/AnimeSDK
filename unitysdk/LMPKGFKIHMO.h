#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LMPKGFKIHMO_BCLDNNNAGNC_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define LMPKGFKIHMO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LMPKGFKIHMO_DNKKIFFLNJL_OFFSET UNITYSDK_OFFSET(0x754920)
#define LMPKGFKIHMO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LMPKGFKIHMO_JHOGHGCHIOE_OFFSET UNITYSDK_OFFSET(0x761240)
#define LMPKGFKIHMO_KJHDPFGFLBJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LMPKGFKIHMO_LLIEHLDKNLG_OFFSET UNITYSDK_OFFSET(0x754970)
#define LMPKGFKIHMO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x191014A0)
#define LMPKGFKIHMO_ODKLDGDHHGP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define LMPKGFKIHMO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LMPKGFKIHMO_TypeDefinitionIndex = 11136;

struct alignas(4) LMPKGFKIHMO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMPKGFKIHMO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LMPKGFKIHMO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* ODKLDGDHHGP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMPKGFKIHMO_ODKLDGDHHGP_OFFSET))(this);
	}

	::System::Int32 KJHDPFGFLBJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMPKGFKIHMO_KJHDPFGFLBJ_OFFSET))(this);
	}

	::System::Int32 LLIEHLDKNLG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMPKGFKIHMO_LLIEHLDKNLG_OFFSET))(this);
	}

	::System::Boolean BCLDNNNAGNC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LMPKGFKIHMO_BCLDNNNAGNC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::LMPKGFKIHMO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LMPKGFKIHMO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LMPKGFKIHMO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::LMPKGFKIHMO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LMPKGFKIHMO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LMPKGFKIHMO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DNKKIFFLNJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMPKGFKIHMO_DNKKIFFLNJL_OFFSET))(this);
	}

	::System::Int32 JHOGHGCHIOE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMPKGFKIHMO_JHOGHGCHIOE_OFFSET))(this);
	}
};
