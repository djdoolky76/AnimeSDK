#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define DOECEAPNEDA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DOECEAPNEDA_BNIJCMFOGOL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DOECEAPNEDA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DOECEAPNEDA_IHJNGKAAJHC_OFFSET UNITYSDK_OFFSET(0x756B90)
#define DOECEAPNEDA_JHJNIHAFPFJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DOECEAPNEDA_KOJLJFMDOED_OFFSET UNITYSDK_OFFSET(0x754970)
#define DOECEAPNEDA_NBMJHIDILMI_OFFSET UNITYSDK_OFFSET(0x754920)
#define DOECEAPNEDA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A595410)
#define DOECEAPNEDA_OOLGCBMCMPD_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DOECEAPNEDA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DOECEAPNEDA_TypeDefinitionIndex = 10050;

struct alignas(4) DOECEAPNEDA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOECEAPNEDA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOECEAPNEDA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 BNIJCMFOGOL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOECEAPNEDA_BNIJCMFOGOL_OFFSET))(this);
	}

	/*
	static ::DOECEAPNEDA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DOECEAPNEDA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DOECEAPNEDA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 IHJNGKAAJHC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOECEAPNEDA_IHJNGKAAJHC_OFFSET))(this);
	}

	::System::Int32 NBMJHIDILMI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOECEAPNEDA_NBMJHIDILMI_OFFSET))(this);
	}

	::System::Int32 JHJNIHAFPFJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOECEAPNEDA_JHJNIHAFPFJ_OFFSET))(this);
	}

	/*
	::DOECEAPNEDA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DOECEAPNEDA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOECEAPNEDA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 KOJLJFMDOED()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOECEAPNEDA_KOJLJFMDOED_OFFSET))(this);
	}

	::System::Int32 OOLGCBMCMPD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOECEAPNEDA_OOLGCBMCMPD_OFFSET))(this);
	}
};
