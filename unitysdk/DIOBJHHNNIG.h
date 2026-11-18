#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DIOBJHHNNIG_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DIOBJHHNNIG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DIOBJHHNNIG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DIOBJHHNNIG_IJDBPPNMNLG_OFFSET UNITYSDK_OFFSET(0x754F10)
#define DIOBJHHNNIG_INEJHDHPFBM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DIOBJHHNNIG_JEPFLFNCOIE_OFFSET UNITYSDK_OFFSET(0x755A00)
#define DIOBJHHNNIG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17783520)
#define DIOBJHHNNIG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DIOBJHHNNIG_TypeDefinitionIndex = 15685;

struct alignas(4) DIOBJHHNNIG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOBJHHNNIG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DIOBJHHNNIG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOBJHHNNIG_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::DIOBJHHNNIG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DIOBJHHNNIG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DIOBJHHNNIG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 INEJHDHPFBM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOBJHHNNIG_INEJHDHPFBM_OFFSET))(this);
	}

	/*
	static ::DIOBJHHNNIG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DIOBJHHNNIG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DIOBJHHNNIG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* IJDBPPNMNLG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOBJHHNNIG_IJDBPPNMNLG_OFFSET))(this);
	}

	::System::String* JEPFLFNCOIE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOBJHHNNIG_JEPFLFNCOIE_OFFSET))(this);
	}
};
