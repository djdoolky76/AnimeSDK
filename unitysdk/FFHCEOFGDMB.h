#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FFHCEOFGDMB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FFHCEOFGDMB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FFHCEOFGDMB_BPLJNPODKIK_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FFHCEOFGDMB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FFHCEOFGDMB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A174D60)
#define FFHCEOFGDMB_ODCNKCKAEKF_OFFSET UNITYSDK_OFFSET(0x756B90)
#define FFHCEOFGDMB_OFILOADKGPC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define FFHCEOFGDMB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FFHCEOFGDMB_TypeDefinitionIndex = 12261;

struct alignas(4) FFHCEOFGDMB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHCEOFGDMB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFHCEOFGDMB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 OFILOADKGPC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHCEOFGDMB_OFILOADKGPC_OFFSET))(this);
	}

	/*
	::FFHCEOFGDMB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FFHCEOFGDMB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFHCEOFGDMB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHCEOFGDMB_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 BPLJNPODKIK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHCEOFGDMB_BPLJNPODKIK_OFFSET))(this);
	}

	/*
	static ::FFHCEOFGDMB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FFHCEOFGDMB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FFHCEOFGDMB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ODCNKCKAEKF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHCEOFGDMB_ODCNKCKAEKF_OFFSET))(this);
	}
};
