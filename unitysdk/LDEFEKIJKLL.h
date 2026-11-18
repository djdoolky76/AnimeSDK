#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LDEFEKIJKLL_AONLKHNDEFJ_OFFSET UNITYSDK_OFFSET(0x757290)
#define LDEFEKIJKLL_BDEMCKIHDHM_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define LDEFEKIJKLL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LDEFEKIJKLL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LDEFEKIJKLL_GKPDJAOENKH_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define LDEFEKIJKLL_HIDCABECNDB_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define LDEFEKIJKLL_HOHHMAPCKMJ_OFFSET UNITYSDK_OFFSET(0x755A00)
#define LDEFEKIJKLL_JJJCABLCAMO_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LDEFEKIJKLL_JPCGDJPMDPP_OFFSET UNITYSDK_OFFSET(0x7624E0)
#define LDEFEKIJKLL_MDDEIDJNMPB_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define LDEFEKIJKLL_MLPBBIMNIIN_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define LDEFEKIJKLL_MNGNAMLGGJN_OFFSET UNITYSDK_OFFSET(0x756B10)
#define LDEFEKIJKLL_MPLKCEDLDMJ_OFFSET UNITYSDK_OFFSET(0x754970)
#define LDEFEKIJKLL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B2FB700)
#define LDEFEKIJKLL_PDOBJBPDOOF_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define LDEFEKIJKLL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LDEFEKIJKLL_TypeDefinitionIndex = 17182;

struct alignas(4) LDEFEKIJKLL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEFEKIJKLL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LDEFEKIJKLL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GKPDJAOENKH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEFEKIJKLL_GKPDJAOENKH_OFFSET))(this);
	}

	::System::String* MLPBBIMNIIN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEFEKIJKLL_MLPBBIMNIIN_OFFSET))(this);
	}

	::System::String* PDOBJBPDOOF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEFEKIJKLL_PDOBJBPDOOF_OFFSET))(this);
	}

	::System::Boolean JPCGDJPMDPP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEFEKIJKLL_JPCGDJPMDPP_OFFSET))(this);
	}

	::System::Boolean HIDCABECNDB(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LDEFEKIJKLL_HIDCABECNDB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::LDEFEKIJKLL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LDEFEKIJKLL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LDEFEKIJKLL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 MPLKCEDLDMJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEFEKIJKLL_MPLKCEDLDMJ_OFFSET))(this);
	}

	/*
	::LDEFEKIJKLL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LDEFEKIJKLL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LDEFEKIJKLL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* BDEMCKIHDHM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEFEKIJKLL_BDEMCKIHDHM_OFFSET))(this);
	}

	::System::String* MDDEIDJNMPB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEFEKIJKLL_MDDEIDJNMPB_OFFSET))(this);
	}

	::System::String* AONLKHNDEFJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEFEKIJKLL_AONLKHNDEFJ_OFFSET))(this);
	}

	::System::String* HOHHMAPCKMJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEFEKIJKLL_HOHHMAPCKMJ_OFFSET))(this);
	}

	::System::Int32 JJJCABLCAMO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEFEKIJKLL_JJJCABLCAMO_OFFSET))(this);
	}

	::System::String* MNGNAMLGGJN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEFEKIJKLL_MNGNAMLGGJN_OFFSET))(this);
	}
};
