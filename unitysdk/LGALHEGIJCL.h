#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LGALHEGIJCL_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LGALHEGIJCL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LGALHEGIJCL_BHHBKCAJMNJ_OFFSET UNITYSDK_OFFSET(0x755C70)
#define LGALHEGIJCL_CBFGNLOCMHF_OFFSET UNITYSDK_OFFSET(0x756B90)
#define LGALHEGIJCL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LGALHEGIJCL_GPJBLOEGLEL_OFFSET UNITYSDK_OFFSET(0x754920)
#define LGALHEGIJCL_MNHNEAHPIBE_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define LGALHEGIJCL_NCABDDPCGBH_OFFSET UNITYSDK_OFFSET(0x754970)
#define LGALHEGIJCL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x195651A0)
#define LGALHEGIJCL_OPFBCMEPIHL_OFFSET UNITYSDK_OFFSET(0x758780)
#define LGALHEGIJCL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LGALHEGIJCL_TypeDefinitionIndex = 16413;

struct alignas(4) LGALHEGIJCL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGALHEGIJCL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGALHEGIJCL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 CBFGNLOCMHF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGALHEGIJCL_CBFGNLOCMHF_OFFSET))(this);
	}

	::System::Int32 GPJBLOEGLEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGALHEGIJCL_GPJBLOEGLEL_OFFSET))(this);
	}

	::System::Int32 NCABDDPCGBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGALHEGIJCL_NCABDDPCGBH_OFFSET))(this);
	}

	/*
	static ::LGALHEGIJCL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LGALHEGIJCL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LGALHEGIJCL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::LGALHEGIJCL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LGALHEGIJCL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGALHEGIJCL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 OPFBCMEPIHL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGALHEGIJCL_OPFBCMEPIHL_OFFSET))(this);
	}

	::System::Int32 BHHBKCAJMNJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGALHEGIJCL_BHHBKCAJMNJ_OFFSET))(this);
	}

	::System::String* MNHNEAHPIBE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGALHEGIJCL_MNHNEAHPIBE_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGALHEGIJCL_ACOEONABOJL_OFFSET))(this);
	}
};
