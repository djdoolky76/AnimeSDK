#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OPMKHNOMOMP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OPMKHNOMOMP_AIJJPBPHCLO_OFFSET UNITYSDK_OFFSET(0x755D20)
#define OPMKHNOMOMP_AKJEBFJMGCJ_OFFSET UNITYSDK_OFFSET(0x755E40)
#define OPMKHNOMOMP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OPMKHNOMOMP_COPBPCCNEAE_OFFSET UNITYSDK_OFFSET(0x757290)
#define OPMKHNOMOMP_CPELHPALFLP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define OPMKHNOMOMP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OPMKHNOMOMP_IADEPIFAMCC_OFFSET UNITYSDK_OFFSET(0x756D50)
#define OPMKHNOMOMP_IDINMHHOOOK_OFFSET UNITYSDK_OFFSET(0x755C70)
#define OPMKHNOMOMP_OHAKJALDAHK_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define OPMKHNOMOMP_PAINFLDDDDD_OFFSET UNITYSDK_OFFSET(0x756B90)
#define OPMKHNOMOMP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OPMKHNOMOMP_TypeDefinitionIndex = 9911;

struct alignas(4) OPMKHNOMOMP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPMKHNOMOMP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OPMKHNOMOMP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* OHAKJALDAHK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPMKHNOMOMP_OHAKJALDAHK_OFFSET))(this);
	}

	::System::String* COPBPCCNEAE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPMKHNOMOMP_COPBPCCNEAE_OFFSET))(this);
	}

	/*
	::OPMKHNOMOMP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OPMKHNOMOMP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OPMKHNOMOMP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPMKHNOMOMP_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* CPELHPALFLP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPMKHNOMOMP_CPELHPALFLP_OFFSET))(this);
	}

	::System::Int32 AKJEBFJMGCJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPMKHNOMOMP_AKJEBFJMGCJ_OFFSET))(this);
	}

	::System::String* IADEPIFAMCC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPMKHNOMOMP_IADEPIFAMCC_OFFSET))(this);
	}

	::System::Int32 IDINMHHOOOK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPMKHNOMOMP_IDINMHHOOOK_OFFSET))(this);
	}

	::System::Int32 AIJJPBPHCLO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPMKHNOMOMP_AIJJPBPHCLO_OFFSET))(this);
	}

	::System::Int32 PAINFLDDDDD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPMKHNOMOMP_PAINFLDDDDD_OFFSET))(this);
	}
};
