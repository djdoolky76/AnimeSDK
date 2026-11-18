#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define AHJGODPIDOE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AHJGODPIDOE_CABMDBCCLPC_OFFSET UNITYSDK_OFFSET(0x755C70)
#define AHJGODPIDOE_CKHCEDDHMJI_OFFSET UNITYSDK_OFFSET(0x755D20)
#define AHJGODPIDOE_FJPGCNGHHCC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define AHJGODPIDOE_FKOIPAPHKGL_OFFSET UNITYSDK_OFFSET(0x756D50)
#define AHJGODPIDOE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AHJGODPIDOE_HCCOKCCGDII_OFFSET UNITYSDK_OFFSET(0x756B90)
#define AHJGODPIDOE_JIGCIDPFIHP_OFFSET UNITYSDK_OFFSET(0x756B10)
#define AHJGODPIDOE_JOKAKIMBIKB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AHJGODPIDOE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x157715A0)
#define AHJGODPIDOE_ONJIOMFMDBG_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define AHJGODPIDOE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AHJGODPIDOE_TypeDefinitionIndex = 16821;

struct alignas(4) AHJGODPIDOE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHJGODPIDOE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AHJGODPIDOE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 JOKAKIMBIKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHJGODPIDOE_JOKAKIMBIKB_OFFSET))(this);
	}

	::System::String* FKOIPAPHKGL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHJGODPIDOE_FKOIPAPHKGL_OFFSET))(this);
	}

	::System::Int32 CABMDBCCLPC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHJGODPIDOE_CABMDBCCLPC_OFFSET))(this);
	}

	/*
	static ::AHJGODPIDOE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::AHJGODPIDOE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + AHJGODPIDOE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* ONJIOMFMDBG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHJGODPIDOE_ONJIOMFMDBG_OFFSET))(this);
	}

	::System::Int32 CKHCEDDHMJI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHJGODPIDOE_CKHCEDDHMJI_OFFSET))(this);
	}

	/*
	::AHJGODPIDOE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AHJGODPIDOE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AHJGODPIDOE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* JIGCIDPFIHP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHJGODPIDOE_JIGCIDPFIHP_OFFSET))(this);
	}

	::System::Int32 FJPGCNGHHCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHJGODPIDOE_FJPGCNGHHCC_OFFSET))(this);
	}

	::System::Int32 HCCOKCCGDII()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHJGODPIDOE_HCCOKCCGDII_OFFSET))(this);
	}
};
