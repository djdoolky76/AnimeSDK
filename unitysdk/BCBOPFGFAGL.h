#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BCBOPFGFAGL_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BCBOPFGFAGL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BCBOPFGFAGL_BHHBKCAJMNJ_OFFSET UNITYSDK_OFFSET(0x758780)
#define BCBOPFGFAGL_CBFGNLOCMHF_OFFSET UNITYSDK_OFFSET(0x754920)
#define BCBOPFGFAGL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BCBOPFGFAGL_GPJBLOEGLEL_OFFSET UNITYSDK_OFFSET(0x754970)
#define BCBOPFGFAGL_JPNKOECGDKA_OFFSET UNITYSDK_OFFSET(0x754F10)
#define BCBOPFGFAGL_MGABMIMMFOH_OFFSET UNITYSDK_OFFSET(0x755E40)
#define BCBOPFGFAGL_MNHNEAHPIBE_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define BCBOPFGFAGL_NCABDDPCGBH_OFFSET UNITYSDK_OFFSET(0x755C70)
#define BCBOPFGFAGL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19AC2450)
#define BCBOPFGFAGL_OPFBCMEPIHL_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define BCBOPFGFAGL_PDNLCIHIDOG_OFFSET UNITYSDK_OFFSET(0x756B90)
#define BCBOPFGFAGL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BCBOPFGFAGL_TypeDefinitionIndex = 11543;

struct alignas(4) BCBOPFGFAGL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBOPFGFAGL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BCBOPFGFAGL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::BCBOPFGFAGL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BCBOPFGFAGL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BCBOPFGFAGL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BCBOPFGFAGL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BCBOPFGFAGL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BCBOPFGFAGL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 BHHBKCAJMNJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBOPFGFAGL_BHHBKCAJMNJ_OFFSET))(this);
	}

	::System::Int32 OPFBCMEPIHL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBOPFGFAGL_OPFBCMEPIHL_OFFSET))(this);
	}

	::System::Int32 NCABDDPCGBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBOPFGFAGL_NCABDDPCGBH_OFFSET))(this);
	}

	::System::String* MNHNEAHPIBE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBOPFGFAGL_MNHNEAHPIBE_OFFSET))(this);
	}

	::System::Int32 PDNLCIHIDOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBOPFGFAGL_PDNLCIHIDOG_OFFSET))(this);
	}

	::System::Int32 MGABMIMMFOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBOPFGFAGL_MGABMIMMFOH_OFFSET))(this);
	}

	::System::String* JPNKOECGDKA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBOPFGFAGL_JPNKOECGDKA_OFFSET))(this);
	}

	::System::Int32 CBFGNLOCMHF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBOPFGFAGL_CBFGNLOCMHF_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBOPFGFAGL_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 GPJBLOEGLEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBOPFGFAGL_GPJBLOEGLEL_OFFSET))(this);
	}
};
