#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define MAGDEKBPCPM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MAGDEKBPCPM_FOOGIDBKILH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MAGDEKBPCPM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MAGDEKBPCPM_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define MAGDEKBPCPM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18E01EE0)
#define MAGDEKBPCPM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MAGDEKBPCPM_TypeDefinitionIndex = 10135;

struct alignas(4) MAGDEKBPCPM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGDEKBPCPM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MAGDEKBPCPM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGDEKBPCPM_GKBAJJACIEA_OFFSET))(this);
	}

	/*
	::MAGDEKBPCPM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MAGDEKBPCPM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MAGDEKBPCPM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FOOGIDBKILH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGDEKBPCPM_FOOGIDBKILH_OFFSET))(this);
	}

	/*
	static ::MAGDEKBPCPM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MAGDEKBPCPM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MAGDEKBPCPM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
