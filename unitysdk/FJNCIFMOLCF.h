#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HNFADNMADCK.h"

namespace FlatBuffers { class ByteBuffer; }

#define FJNCIFMOLCF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FJNCIFMOLCF_DAHPIAHEDMA_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define FJNCIFMOLCF_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FJNCIFMOLCF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FJNCIFMOLCF_JHGFIDHEBIB_OFFSET UNITYSDK_OFFSET(0x755790)
#define FJNCIFMOLCF_LLBOGDBKING_OFFSET UNITYSDK_OFFSET(0x7A87D0)
#define FJNCIFMOLCF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B1073E0)
#define FJNCIFMOLCF_POABLPFOAJG_OFFSET UNITYSDK_OFFSET(0x754C20)
#define FJNCIFMOLCF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FJNCIFMOLCF_TypeDefinitionIndex = 13517;

struct alignas(4) FJNCIFMOLCF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNCIFMOLCF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJNCIFMOLCF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::FJNCIFMOLCF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FJNCIFMOLCF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJNCIFMOLCF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 JHGFIDHEBIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNCIFMOLCF_JHGFIDHEBIB_OFFSET))(this);
	}

	::System::Int32 POABLPFOAJG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNCIFMOLCF_POABLPFOAJG_OFFSET))(this);
	}

	/*
	static ::FJNCIFMOLCF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FJNCIFMOLCF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FJNCIFMOLCF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNCIFMOLCF_DNKLBHKEDEM_OFFSET))(this);
	}

	::System::Boolean DAHPIAHEDMA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FJNCIFMOLCF_DAHPIAHEDMA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLBOGDBKING(::System::Int32 HPMEONKHFGG, ::HNFADNMADCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNFADNMADCK&))((::PBYTE)hIl2Cpp + FJNCIFMOLCF_LLBOGDBKING_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
