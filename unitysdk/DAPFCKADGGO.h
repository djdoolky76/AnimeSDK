#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DAPFCKADGGO_AEAJPKILALJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DAPFCKADGGO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DAPFCKADGGO_CFOJDGDMIAF_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define DAPFCKADGGO_EPKHFGDILDG_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define DAPFCKADGGO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DAPFCKADGGO_GKKEEOMPEGE_OFFSET UNITYSDK_OFFSET(0x754970)
#define DAPFCKADGGO_JLKNALIKFCB_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DAPFCKADGGO_KGPBFGGOHBB_OFFSET UNITYSDK_OFFSET(0x755790)
#define DAPFCKADGGO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18795B30)
#define DAPFCKADGGO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DAPFCKADGGO_TypeDefinitionIndex = 12158;

struct alignas(4) DAPFCKADGGO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPFCKADGGO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DAPFCKADGGO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GKKEEOMPEGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPFCKADGGO_GKKEEOMPEGE_OFFSET))(this);
	}

	/*
	::DAPFCKADGGO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DAPFCKADGGO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DAPFCKADGGO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* EPKHFGDILDG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPFCKADGGO_EPKHFGDILDG_OFFSET))(this);
	}

	::System::Int32 AEAJPKILALJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPFCKADGGO_AEAJPKILALJ_OFFSET))(this);
	}

	/*
	static ::DAPFCKADGGO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DAPFCKADGGO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DAPFCKADGGO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 KGPBFGGOHBB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPFCKADGGO_KGPBFGGOHBB_OFFSET))(this);
	}

	::System::Boolean CFOJDGDMIAF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + DAPFCKADGGO_CFOJDGDMIAF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 JLKNALIKFCB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPFCKADGGO_JLKNALIKFCB_OFFSET))(this);
	}
};
