#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CKLDABNCGMI_AGCNFENBPCH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define CKLDABNCGMI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CKLDABNCGMI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CKLDABNCGMI_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CKLDABNCGMI_JLGPJGAOOPC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define CKLDABNCGMI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A588340)
#define CKLDABNCGMI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CKLDABNCGMI_TypeDefinitionIndex = 17167;

struct alignas(4) CKLDABNCGMI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKLDABNCGMI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CKLDABNCGMI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 JLGPJGAOOPC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKLDABNCGMI_JLGPJGAOOPC_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKLDABNCGMI_GKBAJJACIEA_OFFSET))(this);
	}

	/*
	static ::CKLDABNCGMI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CKLDABNCGMI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CKLDABNCGMI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::CKLDABNCGMI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CKLDABNCGMI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CKLDABNCGMI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* AGCNFENBPCH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKLDABNCGMI_AGCNFENBPCH_OFFSET))(this);
	}
};
