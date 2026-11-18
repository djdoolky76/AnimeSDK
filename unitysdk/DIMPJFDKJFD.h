#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DIMPJFDKJFD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DIMPJFDKJFD_ENMFBPHENPG_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define DIMPJFDKJFD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DIMPJFDKJFD_LHEHAPOFCCK_OFFSET UNITYSDK_OFFSET(0x755A00)
#define DIMPJFDKJFD_MKOGNDNBCIB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DIMPJFDKJFD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x157A3B70)
#define DIMPJFDKJFD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DIMPJFDKJFD_TypeDefinitionIndex = 9425;

struct alignas(4) DIMPJFDKJFD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMPJFDKJFD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DIMPJFDKJFD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::DIMPJFDKJFD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DIMPJFDKJFD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DIMPJFDKJFD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MKOGNDNBCIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMPJFDKJFD_MKOGNDNBCIB_OFFSET))(this);
	}

	::System::String* ENMFBPHENPG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMPJFDKJFD_ENMFBPHENPG_OFFSET))(this);
	}

	/*
	static ::DIMPJFDKJFD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DIMPJFDKJFD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DIMPJFDKJFD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* LHEHAPOFCCK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMPJFDKJFD_LHEHAPOFCCK_OFFSET))(this);
	}
};
