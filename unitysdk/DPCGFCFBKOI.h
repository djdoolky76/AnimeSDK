#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DPCGFCFBKOI_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DPCGFCFBKOI_BGFLPBGMAMG_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DPCGFCFBKOI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DPCGFCFBKOI_FFAFCFOJOKJ_OFFSET UNITYSDK_OFFSET(0x756B10)
#define DPCGFCFBKOI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DPCGFCFBKOI_GHKOBIMHENC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DPCGFCFBKOI_HNGJMNBDFIF_OFFSET UNITYSDK_OFFSET(0x756B90)
#define DPCGFCFBKOI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B9AD810)
#define DPCGFCFBKOI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DPCGFCFBKOI_TypeDefinitionIndex = 9223;

struct alignas(4) DPCGFCFBKOI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCGFCFBKOI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPCGFCFBKOI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DPCGFCFBKOI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 JGKNCPMELON, ::System::Int32 BFPCCIHCFIK, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DPCGFCFBKOI(*)(::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DPCGFCFBKOI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, JGKNCPMELON, BFPCCIHCFIK, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 BGFLPBGMAMG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCGFCFBKOI_BGFLPBGMAMG_OFFSET))(this);
	}

	::System::String* FFAFCFOJOKJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCGFCFBKOI_FFAFCFOJOKJ_OFFSET))(this);
	}

	::System::Int32 GHKOBIMHENC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCGFCFBKOI_GHKOBIMHENC_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCGFCFBKOI_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::DPCGFCFBKOI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DPCGFCFBKOI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPCGFCFBKOI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 HNGJMNBDFIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCGFCFBKOI_HNGJMNBDFIF_OFFSET))(this);
	}
};
