#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define POMJPDHIJKO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define POMJPDHIJKO_COEBLOAKNHI_OFFSET UNITYSDK_OFFSET(0x754C20)
#define POMJPDHIJKO_DHPNLFNDKJE_OFFSET UNITYSDK_OFFSET(0x754920)
#define POMJPDHIJKO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define POMJPDHIJKO_MGIABFFNCKF_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define POMJPDHIJKO_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define POMJPDHIJKO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1FC24D00)
#define POMJPDHIJKO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int POMJPDHIJKO_TypeDefinitionIndex = 10979;

struct alignas(4) POMJPDHIJKO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + POMJPDHIJKO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POMJPDHIJKO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::POMJPDHIJKO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::POMJPDHIJKO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + POMJPDHIJKO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean MGIABFFNCKF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + POMJPDHIJKO_MGIABFFNCKF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 COEBLOAKNHI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POMJPDHIJKO_COEBLOAKNHI_OFFSET))(this);
	}

	/*
	::POMJPDHIJKO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::POMJPDHIJKO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POMJPDHIJKO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POMJPDHIJKO_NKCNGLADFNA_OFFSET))(this);
	}

	::System::Int32 DHPNLFNDKJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POMJPDHIJKO_DHPNLFNDKJE_OFFSET))(this);
	}
};
