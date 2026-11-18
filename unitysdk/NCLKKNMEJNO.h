#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NCLKKNMEJNO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NCLKKNMEJNO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NCLKKNMEJNO_CLLGCKCDAFA_OFFSET UNITYSDK_OFFSET(0x756B90)
#define NCLKKNMEJNO_COCOFOAJEAE_OFFSET UNITYSDK_OFFSET(0x757290)
#define NCLKKNMEJNO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NCLKKNMEJNO_GMNNHBHFCJE_OFFSET UNITYSDK_OFFSET(0x754920)
#define NCLKKNMEJNO_JFHKILHIDNB_OFFSET UNITYSDK_OFFSET(0x755C70)
#define NCLKKNMEJNO_JMHBIJFBFMA_OFFSET UNITYSDK_OFFSET(0x754970)
#define NCLKKNMEJNO_NDCPGHGEPAA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define NCLKKNMEJNO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17FD0370)
#define NCLKKNMEJNO_OFMGPCOGJEO_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define NCLKKNMEJNO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NCLKKNMEJNO_TypeDefinitionIndex = 14720;

struct alignas(4) NCLKKNMEJNO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLKKNMEJNO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NCLKKNMEJNO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 OFMGPCOGJEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLKKNMEJNO_OFMGPCOGJEO_OFFSET))(this);
	}

	::System::Int32 CLLGCKCDAFA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLKKNMEJNO_CLLGCKCDAFA_OFFSET))(this);
	}

	/*
	::NCLKKNMEJNO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NCLKKNMEJNO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NCLKKNMEJNO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 JMHBIJFBFMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLKKNMEJNO_JMHBIJFBFMA_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLKKNMEJNO_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 JFHKILHIDNB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLKKNMEJNO_JFHKILHIDNB_OFFSET))(this);
	}

	/*
	static ::NCLKKNMEJNO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NCLKKNMEJNO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NCLKKNMEJNO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* COCOFOAJEAE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLKKNMEJNO_COCOFOAJEAE_OFFSET))(this);
	}

	::System::Int32 NDCPGHGEPAA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLKKNMEJNO_NDCPGHGEPAA_OFFSET))(this);
	}

	::System::Int32 GMNNHBHFCJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLKKNMEJNO_GMNNHBHFCJE_OFFSET))(this);
	}
};
