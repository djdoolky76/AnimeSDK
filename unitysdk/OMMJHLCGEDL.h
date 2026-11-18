#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OMMJHLCGEDL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OMMJHLCGEDL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OMMJHLCGEDL_HKBMLDGIMGF_OFFSET UNITYSDK_OFFSET(0x755E40)
#define OMMJHLCGEDL_JBEMNEOALAI_OFFSET UNITYSDK_OFFSET(0x755C70)
#define OMMJHLCGEDL_JFPPOHLBPCA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OMMJHLCGEDL_LNLNHEMFAEC_OFFSET UNITYSDK_OFFSET(0x757290)
#define OMMJHLCGEDL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1D0D68D0)
#define OMMJHLCGEDL_PHHDNJBIIFK_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define OMMJHLCGEDL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OMMJHLCGEDL_TypeDefinitionIndex = 16018;

struct alignas(4) OMMJHLCGEDL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMJHLCGEDL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMMJHLCGEDL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 JBEMNEOALAI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMJHLCGEDL_JBEMNEOALAI_OFFSET))(this);
	}

	::System::Int32 JFPPOHLBPCA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMJHLCGEDL_JFPPOHLBPCA_OFFSET))(this);
	}

	/*
	static ::OMMJHLCGEDL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OMMJHLCGEDL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OMMJHLCGEDL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 HKBMLDGIMGF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMJHLCGEDL_HKBMLDGIMGF_OFFSET))(this);
	}

	/*
	::OMMJHLCGEDL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OMMJHLCGEDL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMMJHLCGEDL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* PHHDNJBIIFK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMJHLCGEDL_PHHDNJBIIFK_OFFSET))(this);
	}

	::System::String* LNLNHEMFAEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMJHLCGEDL_LNLNHEMFAEC_OFFSET))(this);
	}
};
