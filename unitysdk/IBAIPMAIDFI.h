#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define IBAIPMAIDFI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IBAIPMAIDFI_CGHMDBFDBEM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IBAIPMAIDFI_ENMJGJDEDII_OFFSET UNITYSDK_OFFSET(0x754B50)
#define IBAIPMAIDFI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IBAIPMAIDFI_JJOGINBEJGC_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define IBAIPMAIDFI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B61E160)
#define IBAIPMAIDFI_PGNHBJGDFOE_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define IBAIPMAIDFI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IBAIPMAIDFI_TypeDefinitionIndex = 17329;

struct alignas(4) IBAIPMAIDFI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAIPMAIDFI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBAIPMAIDFI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ENMJGJDEDII()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAIPMAIDFI_ENMJGJDEDII_OFFSET))(this);
	}

	/*
	::IBAIPMAIDFI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IBAIPMAIDFI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBAIPMAIDFI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 PGNHBJGDFOE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAIPMAIDFI_PGNHBJGDFOE_OFFSET))(this);
	}

	::System::Boolean JJOGINBEJGC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + IBAIPMAIDFI_JJOGINBEJGC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::IBAIPMAIDFI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IBAIPMAIDFI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IBAIPMAIDFI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 CGHMDBFDBEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAIPMAIDFI_CGHMDBFDBEM_OFFSET))(this);
	}
};
