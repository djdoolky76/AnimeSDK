#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FIIJBJLJAKH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FIIJBJLJAKH_CMMKFJAOKFI_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FIIJBJLJAKH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FIIJBJLJAKH_NLNODLILGMM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FIIJBJLJAKH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B4C3EF0)
#define FIIJBJLJAKH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FIIJBJLJAKH_TypeDefinitionIndex = 9151;

struct alignas(4) FIIJBJLJAKH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIIJBJLJAKH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FIIJBJLJAKH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FIIJBJLJAKH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FIIJBJLJAKH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FIIJBJLJAKH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 CMMKFJAOKFI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIIJBJLJAKH_CMMKFJAOKFI_OFFSET))(this);
	}

	::System::Int32 NLNODLILGMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIIJBJLJAKH_NLNODLILGMM_OFFSET))(this);
	}

	/*
	::FIIJBJLJAKH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FIIJBJLJAKH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FIIJBJLJAKH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
