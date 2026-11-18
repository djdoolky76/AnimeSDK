#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ELJFNDGECBE_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ELJFNDGECBE_ADDDMGFHOFL_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define ELJFNDGECBE_AJKKGFEDCGK_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define ELJFNDGECBE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ELJFNDGECBE_DGHEBGDMAKO_OFFSET UNITYSDK_OFFSET(0x756360)
#define ELJFNDGECBE_GDAOHILPAHP_OFFSET UNITYSDK_OFFSET(0x754A70)
#define ELJFNDGECBE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ELJFNDGECBE_IKMEOKGAEPG_OFFSET UNITYSDK_OFFSET(0x754B50)
#define ELJFNDGECBE_INKDJOOLIGJ_OFFSET UNITYSDK_OFFSET(0x758590)
#define ELJFNDGECBE_JJNAGNGLDLE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define ELJFNDGECBE_JMHMIPIGCCA_OFFSET UNITYSDK_OFFSET(0x756B10)
#define ELJFNDGECBE_LJBJLKCCGHE_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define ELJFNDGECBE_LNEGLMLLLMC_OFFSET UNITYSDK_OFFSET(0x757190)
#define ELJFNDGECBE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x15A6C590)
#define ELJFNDGECBE_PABFJJICJCF_OFFSET UNITYSDK_OFFSET(0x754E10)
#define ELJFNDGECBE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ELJFNDGECBE_TypeDefinitionIndex = 14588;

struct alignas(4) ELJFNDGECBE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJFNDGECBE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ELJFNDGECBE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean PABFJJICJCF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJFNDGECBE_PABFJJICJCF_OFFSET))(this);
	}

	::System::Int32 ADDDMGFHOFL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJFNDGECBE_ADDDMGFHOFL_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJFNDGECBE_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean GDAOHILPAHP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + ELJFNDGECBE_GDAOHILPAHP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 IKMEOKGAEPG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJFNDGECBE_IKMEOKGAEPG_OFFSET))(this);
	}

	::System::Int32 LJBJLKCCGHE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJFNDGECBE_LJBJLKCCGHE_OFFSET))(this);
	}

	::System::Boolean DGHEBGDMAKO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + ELJFNDGECBE_DGHEBGDMAKO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 JJNAGNGLDLE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJFNDGECBE_JJNAGNGLDLE_OFFSET))(this);
	}

	::System::String* AJKKGFEDCGK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJFNDGECBE_AJKKGFEDCGK_OFFSET))(this);
	}

	::System::String* LNEGLMLLLMC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJFNDGECBE_LNEGLMLLLMC_OFFSET))(this);
	}

	::System::Boolean INKDJOOLIGJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJFNDGECBE_INKDJOOLIGJ_OFFSET))(this);
	}

	/*
	static ::ELJFNDGECBE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ELJFNDGECBE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ELJFNDGECBE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::ELJFNDGECBE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ELJFNDGECBE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ELJFNDGECBE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* JMHMIPIGCCA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJFNDGECBE_JMHMIPIGCCA_OFFSET))(this);
	}
};
