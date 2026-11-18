#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define GCEPOGKKDEF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GCEPOGKKDEF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GCEPOGKKDEF_BKFHLMLBCOB_OFFSET UNITYSDK_OFFSET(0x754B50)
#define GCEPOGKKDEF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GCEPOGKKDEF_ILJJHKHKBCJ_OFFSET UNITYSDK_OFFSET(0x755D20)
#define GCEPOGKKDEF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19AF75D0)
#define GCEPOGKKDEF_PFJIBKBMOII_OFFSET UNITYSDK_OFFSET(0x756B90)
#define GCEPOGKKDEF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GCEPOGKKDEF_TypeDefinitionIndex = 16762;

struct alignas(4) GCEPOGKKDEF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEPOGKKDEF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GCEPOGKKDEF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEPOGKKDEF_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 ILJJHKHKBCJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEPOGKKDEF_ILJJHKHKBCJ_OFFSET))(this);
	}

	/*
	static ::GCEPOGKKDEF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GCEPOGKKDEF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GCEPOGKKDEF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::GCEPOGKKDEF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GCEPOGKKDEF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GCEPOGKKDEF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BKFHLMLBCOB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEPOGKKDEF_BKFHLMLBCOB_OFFSET))(this);
	}

	::System::Int32 PFJIBKBMOII()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEPOGKKDEF_PFJIBKBMOII_OFFSET))(this);
	}
};
