#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PNIIJECMBIM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PNIIJECMBIM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PNIIJECMBIM_BHHBKCAJMNJ_OFFSET UNITYSDK_OFFSET(0x755C70)
#define PNIIJECMBIM_CBFGNLOCMHF_OFFSET UNITYSDK_OFFSET(0x756B90)
#define PNIIJECMBIM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PNIIJECMBIM_GPJBLOEGLEL_OFFSET UNITYSDK_OFFSET(0x754920)
#define PNIIJECMBIM_MNHNEAHPIBE_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define PNIIJECMBIM_NCABDDPCGBH_OFFSET UNITYSDK_OFFSET(0x754970)
#define PNIIJECMBIM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19DE5910)
#define PNIIJECMBIM_OPFBCMEPIHL_OFFSET UNITYSDK_OFFSET(0x758780)
#define PNIIJECMBIM_PDNLCIHIDOG_OFFSET UNITYSDK_OFFSET(0x755D20)
#define PNIIJECMBIM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PNIIJECMBIM_TypeDefinitionIndex = 13529;

struct alignas(4) PNIIJECMBIM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIIJECMBIM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNIIJECMBIM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 BHHBKCAJMNJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIIJECMBIM_BHHBKCAJMNJ_OFFSET))(this);
	}

	::System::Int32 OPFBCMEPIHL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIIJECMBIM_OPFBCMEPIHL_OFFSET))(this);
	}

	/*
	::PNIIJECMBIM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PNIIJECMBIM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNIIJECMBIM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 CBFGNLOCMHF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIIJECMBIM_CBFGNLOCMHF_OFFSET))(this);
	}

	::System::String* MNHNEAHPIBE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIIJECMBIM_MNHNEAHPIBE_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIIJECMBIM_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 PDNLCIHIDOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIIJECMBIM_PDNLCIHIDOG_OFFSET))(this);
	}

	/*
	static ::PNIIJECMBIM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PNIIJECMBIM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PNIIJECMBIM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 NCABDDPCGBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIIJECMBIM_NCABDDPCGBH_OFFSET))(this);
	}

	::System::Int32 GPJBLOEGLEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIIJECMBIM_GPJBLOEGLEL_OFFSET))(this);
	}
};
