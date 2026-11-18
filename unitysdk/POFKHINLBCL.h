#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define POFKHINLBCL_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define POFKHINLBCL_BGKBLDJIFJB_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define POFKHINLBCL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define POFKHINLBCL_CENGHIKDFMJ_OFFSET UNITYSDK_OFFSET(0x755790)
#define POFKHINLBCL_DMOMMKNHDLD_OFFSET UNITYSDK_OFFSET(0x754A70)
#define POFKHINLBCL_FFLGAFJMIJH_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define POFKHINLBCL_GECFDFLFDLL_OFFSET UNITYSDK_OFFSET(0x756360)
#define POFKHINLBCL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define POFKHINLBCL_HKFANFJCBCC_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define POFKHINLBCL_IGPBGONOENL_OFFSET UNITYSDK_OFFSET(0x755A00)
#define POFKHINLBCL_NMHINCDPNDK_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define POFKHINLBCL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1FD7D120)
#define POFKHINLBCL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int POFKHINLBCL_TypeDefinitionIndex = 14806;

struct alignas(4) POFKHINLBCL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + POFKHINLBCL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POFKHINLBCL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POFKHINLBCL_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* IGPBGONOENL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POFKHINLBCL_IGPBGONOENL_OFFSET))(this);
	}

	::System::Boolean DMOMMKNHDLD(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + POFKHINLBCL_DMOMMKNHDLD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NMHINCDPNDK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POFKHINLBCL_NMHINCDPNDK_OFFSET))(this);
	}

	/*
	static ::POFKHINLBCL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::POFKHINLBCL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + POFKHINLBCL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 HKFANFJCBCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POFKHINLBCL_HKFANFJCBCC_OFFSET))(this);
	}

	::System::Boolean GECFDFLFDLL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + POFKHINLBCL_GECFDFLFDLL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::POFKHINLBCL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::POFKHINLBCL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POFKHINLBCL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* BGKBLDJIFJB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POFKHINLBCL_BGKBLDJIFJB_OFFSET))(this);
	}

	::System::Int32 CENGHIKDFMJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POFKHINLBCL_CENGHIKDFMJ_OFFSET))(this);
	}

	::System::Boolean FFLGAFJMIJH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + POFKHINLBCL_FFLGAFJMIJH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
