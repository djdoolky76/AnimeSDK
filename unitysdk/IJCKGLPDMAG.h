#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define IJCKGLPDMAG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IJCKGLPDMAG_FJPGCNGHHCC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IJCKGLPDMAG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IJCKGLPDMAG_IKPIEHCICOJ_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define IJCKGLPDMAG_JDOCDDPEDAG_OFFSET UNITYSDK_OFFSET(0x761240)
#define IJCKGLPDMAG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1610A820)
#define IJCKGLPDMAG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IJCKGLPDMAG_TypeDefinitionIndex = 14096;

struct alignas(4) IJCKGLPDMAG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJCKGLPDMAG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IJCKGLPDMAG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 FJPGCNGHHCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJCKGLPDMAG_FJPGCNGHHCC_OFFSET))(this);
	}

	::System::Boolean IKPIEHCICOJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + IJCKGLPDMAG_IKPIEHCICOJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::IJCKGLPDMAG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IJCKGLPDMAG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IJCKGLPDMAG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::IJCKGLPDMAG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IJCKGLPDMAG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IJCKGLPDMAG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 JDOCDDPEDAG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJCKGLPDMAG_JDOCDDPEDAG_OFFSET))(this);
	}
};
