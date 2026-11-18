#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define DPCMCPOMJKL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DPCMCPOMJKL_DHIDHCIFPMP_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DPCMCPOMJKL_DMPKFPNFMEA_OFFSET UNITYSDK_OFFSET(0x758780)
#define DPCMCPOMJKL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DPCMCPOMJKL_ICPDPKGCNDC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DPCMCPOMJKL_LBJJIMDLINH_OFFSET UNITYSDK_OFFSET(0x754970)
#define DPCMCPOMJKL_LKCGDKFGLCJ_OFFSET UNITYSDK_OFFSET(0x754920)
#define DPCMCPOMJKL_OFGJHHCHOKB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DPCMCPOMJKL_PMPBFPBLKFJ_OFFSET UNITYSDK_OFFSET(0x756B90)
#define DPCMCPOMJKL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DPCMCPOMJKL_TypeDefinitionIndex = 9372;

struct alignas(4) DPCMCPOMJKL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCMCPOMJKL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPCMCPOMJKL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DMPKFPNFMEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCMCPOMJKL_DMPKFPNFMEA_OFFSET))(this);
	}

	::System::Int32 LBJJIMDLINH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCMCPOMJKL_LBJJIMDLINH_OFFSET))(this);
	}

	::System::Int32 PMPBFPBLKFJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCMCPOMJKL_PMPBFPBLKFJ_OFFSET))(this);
	}

	::System::Int32 DHIDHCIFPMP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCMCPOMJKL_DHIDHCIFPMP_OFFSET))(this);
	}

	/*
	::DPCMCPOMJKL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DPCMCPOMJKL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPCMCPOMJKL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LKCGDKFGLCJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCMCPOMJKL_LKCGDKFGLCJ_OFFSET))(this);
	}

	::System::Int32 OFGJHHCHOKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCMCPOMJKL_OFGJHHCHOKB_OFFSET))(this);
	}

	::System::Int32 ICPDPKGCNDC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCMCPOMJKL_ICPDPKGCNDC_OFFSET))(this);
	}
};
