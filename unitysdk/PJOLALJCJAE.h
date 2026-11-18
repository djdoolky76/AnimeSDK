#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HNFADNMADCK.h"

namespace FlatBuffers { class ByteBuffer; }

#define PJOLALJCJAE_AFLMJAMMBOO_OFFSET UNITYSDK_OFFSET(0x755D20)
#define PJOLALJCJAE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PJOLALJCJAE_DCABAPHEGDL_OFFSET UNITYSDK_OFFSET(0x788DB0)
#define PJOLALJCJAE_DFOFAOHJMHB_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define PJOLALJCJAE_EGNDNBDEOLI_OFFSET UNITYSDK_OFFSET(0x754920)
#define PJOLALJCJAE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PJOLALJCJAE_KOFAFOEBDLB_OFFSET UNITYSDK_OFFSET(0x755E40)
#define PJOLALJCJAE_NIKMMEKEDLD_OFFSET UNITYSDK_OFFSET(0x756220)
#define PJOLALJCJAE_PLMPAGMICCF_OFFSET UNITYSDK_OFFSET(0x754B50)
#define PJOLALJCJAE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PJOLALJCJAE_TypeDefinitionIndex = 10277;

struct alignas(4) PJOLALJCJAE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOLALJCJAE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PJOLALJCJAE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NIKMMEKEDLD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOLALJCJAE_NIKMMEKEDLD_OFFSET))(this);
	}

	::System::Int32 AFLMJAMMBOO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOLALJCJAE_AFLMJAMMBOO_OFFSET))(this);
	}

	::System::Int32 DFOFAOHJMHB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOLALJCJAE_DFOFAOHJMHB_OFFSET))(this);
	}

	::System::Boolean DCABAPHEGDL(::System::Int32 HPMEONKHFGG, ::HNFADNMADCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNFADNMADCK&))((::PBYTE)hIl2Cpp + PJOLALJCJAE_DCABAPHEGDL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::PJOLALJCJAE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PJOLALJCJAE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PJOLALJCJAE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 EGNDNBDEOLI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOLALJCJAE_EGNDNBDEOLI_OFFSET))(this);
	}

	::System::Int32 PLMPAGMICCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOLALJCJAE_PLMPAGMICCF_OFFSET))(this);
	}

	::System::Int32 KOFAFOEBDLB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOLALJCJAE_KOFAFOEBDLB_OFFSET))(this);
	}
};
