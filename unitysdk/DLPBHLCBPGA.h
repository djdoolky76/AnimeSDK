#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define DLPBHLCBPGA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DLPBHLCBPGA_FMOLANGCPDH_OFFSET UNITYSDK_OFFSET(0x755790)
#define DLPBHLCBPGA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DLPBHLCBPGA_HOKFDABCANC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DLPBHLCBPGA_IPKDIBHOAHG_OFFSET UNITYSDK_OFFSET(0x756B90)
#define DLPBHLCBPGA_JKPDKNPBGHO_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define DLPBHLCBPGA_KGFNFFALDKG_OFFSET UNITYSDK_OFFSET(0x76F6C0)
#define DLPBHLCBPGA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1661C360)
#define DLPBHLCBPGA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DLPBHLCBPGA_TypeDefinitionIndex = 9513;

struct alignas(4) DLPBHLCBPGA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPBHLCBPGA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DLPBHLCBPGA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 FMOLANGCPDH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPBHLCBPGA_FMOLANGCPDH_OFFSET))(this);
	}

	/*
	::DLPBHLCBPGA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DLPBHLCBPGA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DLPBHLCBPGA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DLPBHLCBPGA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DLPBHLCBPGA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DLPBHLCBPGA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 IPKDIBHOAHG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPBHLCBPGA_IPKDIBHOAHG_OFFSET))(this);
	}

	::System::Boolean JKPDKNPBGHO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + DLPBHLCBPGA_JKPDKNPBGHO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 HOKFDABCANC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPBHLCBPGA_HOKFDABCANC_OFFSET))(this);
	}

	::System::Boolean KGFNFFALDKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPBHLCBPGA_KGFNFFALDKG_OFFSET))(this);
	}
};
