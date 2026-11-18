#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define HLMPGPINHCM_AANFLDPKPKO_OFFSET UNITYSDK_OFFSET(0x755C70)
#define HLMPGPINHCM_ADIJMNAMIAC_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define HLMPGPINHCM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HLMPGPINHCM_CGBEHOFEHND_OFFSET UNITYSDK_OFFSET(0x756B90)
#define HLMPGPINHCM_EJFMBPFDJJO_OFFSET UNITYSDK_OFFSET(0x754920)
#define HLMPGPINHCM_FDEBBCCMFDA_OFFSET UNITYSDK_OFFSET(0x758780)
#define HLMPGPINHCM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HLMPGPINHCM_LFHOAHEFKDD_OFFSET UNITYSDK_OFFSET(0x754970)
#define HLMPGPINHCM_LLMNILIOLHD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define HLMPGPINHCM_NBKBIDFKGNE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define HLMPGPINHCM_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HLMPGPINHCM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x15A90090)
#define HLMPGPINHCM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HLMPGPINHCM_TypeDefinitionIndex = 17410;

struct alignas(4) HLMPGPINHCM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMPGPINHCM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLMPGPINHCM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LLMNILIOLHD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMPGPINHCM_LLMNILIOLHD_OFFSET))(this);
	}

	::System::Int32 CGBEHOFEHND()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMPGPINHCM_CGBEHOFEHND_OFFSET))(this);
	}

	::System::Int32 LFHOAHEFKDD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMPGPINHCM_LFHOAHEFKDD_OFFSET))(this);
	}

	::System::Int32 FDEBBCCMFDA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMPGPINHCM_FDEBBCCMFDA_OFFSET))(this);
	}

	/*
	::HLMPGPINHCM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HLMPGPINHCM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLMPGPINHCM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 AANFLDPKPKO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMPGPINHCM_AANFLDPKPKO_OFFSET))(this);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMPGPINHCM_NKCNGLADFNA_OFFSET))(this);
	}

	::System::Int32 ADIJMNAMIAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMPGPINHCM_ADIJMNAMIAC_OFFSET))(this);
	}

	/*
	static ::HLMPGPINHCM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HLMPGPINHCM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HLMPGPINHCM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 EJFMBPFDJJO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMPGPINHCM_EJFMBPFDJJO_OFFSET))(this);
	}

	::System::Int32 NBKBIDFKGNE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMPGPINHCM_NBKBIDFKGNE_OFFSET))(this);
	}
};
