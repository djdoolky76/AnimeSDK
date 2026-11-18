#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FKECLCANLOC_BELMIKIMNBG_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define FKECLCANLOC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FKECLCANLOC_DPFALKEAMBP_OFFSET UNITYSDK_OFFSET(0x761240)
#define FKECLCANLOC_FELHBJHGLIC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FKECLCANLOC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FKECLCANLOC_KOJKGPHPMPI_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define FKECLCANLOC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18B9AE10)
#define FKECLCANLOC_PIHGHHFEHED_OFFSET UNITYSDK_OFFSET(0x755D20)
#define FKECLCANLOC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FKECLCANLOC_TypeDefinitionIndex = 16226;

struct alignas(4) FKECLCANLOC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKECLCANLOC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FKECLCANLOC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* BELMIKIMNBG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKECLCANLOC_BELMIKIMNBG_OFFSET))(this);
	}

	::System::Int32 PIHGHHFEHED()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKECLCANLOC_PIHGHHFEHED_OFFSET))(this);
	}

	::System::Int32 FELHBJHGLIC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKECLCANLOC_FELHBJHGLIC_OFFSET))(this);
	}

	::System::Boolean KOJKGPHPMPI(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FKECLCANLOC_KOJKGPHPMPI_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::FKECLCANLOC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FKECLCANLOC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FKECLCANLOC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::FKECLCANLOC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FKECLCANLOC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FKECLCANLOC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DPFALKEAMBP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKECLCANLOC_DPFALKEAMBP_OFFSET))(this);
	}
};
