#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define DKDKMGMJJJB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DKDKMGMJJJB_CIIOBKOLENI_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DKDKMGMJJJB_FCPFNNCKPIP_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define DKDKMGMJJJB_GBPPFEPLPEF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DKDKMGMJJJB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DKDKMGMJJJB_NFIMNEIDPBC_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define DKDKMGMJJJB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1879B9D0)
#define DKDKMGMJJJB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DKDKMGMJJJB_TypeDefinitionIndex = 13658;

struct alignas(4) DKDKMGMJJJB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDKMGMJJJB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DKDKMGMJJJB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean FCPFNNCKPIP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + DKDKMGMJJJB_FCPFNNCKPIP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 CIIOBKOLENI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDKMGMJJJB_CIIOBKOLENI_OFFSET))(this);
	}

	/*
	static ::DKDKMGMJJJB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DKDKMGMJJJB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DKDKMGMJJJB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 GBPPFEPLPEF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDKMGMJJJB_GBPPFEPLPEF_OFFSET))(this);
	}

	/*
	::DKDKMGMJJJB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DKDKMGMJJJB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DKDKMGMJJJB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NFIMNEIDPBC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDKMGMJJJB_NFIMNEIDPBC_OFFSET))(this);
	}
};
