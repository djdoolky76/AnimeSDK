#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define JHAGPGAKPIN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JHAGPGAKPIN_DPPPBMPJFDH_OFFSET UNITYSDK_OFFSET(0x761240)
#define JHAGPGAKPIN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JHAGPGAKPIN_HJGIFBGIKIK_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define JHAGPGAKPIN_HOJIJHHLANC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JHAGPGAKPIN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x15AAA930)
#define JHAGPGAKPIN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JHAGPGAKPIN_TypeDefinitionIndex = 15908;

struct alignas(4) JHAGPGAKPIN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHAGPGAKPIN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHAGPGAKPIN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JHAGPGAKPIN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JHAGPGAKPIN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JHAGPGAKPIN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 HOJIJHHLANC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHAGPGAKPIN_HOJIJHHLANC_OFFSET))(this);
	}

	::System::Boolean HJGIFBGIKIK(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JHAGPGAKPIN_HJGIFBGIKIK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 DPPPBMPJFDH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHAGPGAKPIN_DPPPBMPJFDH_OFFSET))(this);
	}

	/*
	::JHAGPGAKPIN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JHAGPGAKPIN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHAGPGAKPIN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
