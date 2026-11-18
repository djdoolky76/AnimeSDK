#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MCIBBLHEPPE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MCIBBLHEPPE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MCIBBLHEPPE_IFKNCPALBFH_OFFSET UNITYSDK_OFFSET(0x762B30)
#define MCIBBLHEPPE_JDPAJABPCGI_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define MCIBBLHEPPE_MHKKOFEKPHI_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MCIBBLHEPPE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18E03F50)
#define MCIBBLHEPPE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MCIBBLHEPPE_TypeDefinitionIndex = 14339;

struct alignas(4) MCIBBLHEPPE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCIBBLHEPPE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MCIBBLHEPPE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MCIBBLHEPPE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MCIBBLHEPPE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MCIBBLHEPPE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::MCIBBLHEPPE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MCIBBLHEPPE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MCIBBLHEPPE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* JDPAJABPCGI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCIBBLHEPPE_JDPAJABPCGI_OFFSET))(this);
	}

	::System::Int32 MHKKOFEKPHI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCIBBLHEPPE_MHKKOFEKPHI_OFFSET))(this);
	}

	::System::Boolean IFKNCPALBFH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCIBBLHEPPE_IFKNCPALBFH_OFFSET))(this);
	}
};
