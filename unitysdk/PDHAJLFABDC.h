#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PDHAJLFABDC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PDHAJLFABDC_CMBFEDAAOKO_1_OFFSET UNITYSDK_OFFSET(0x17FE6F70)
#define PDHAJLFABDC_CMBFEDAAOKO_OFFSET UNITYSDK_OFFSET(0x17FE6E90)
#define PDHAJLFABDC_EJEPBJPCMJL_OFFSET UNITYSDK_OFFSET(0x755320)
#define PDHAJLFABDC_EOBPHJNKAFN_OFFSET UNITYSDK_OFFSET(0x758320)
#define PDHAJLFABDC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PDHAJLFABDC_JKFAHEJIKOF_OFFSET UNITYSDK_OFFSET(0x755190)
#define PDHAJLFABDC_OMBLKLNGBMK_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define PDHAJLFABDC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PDHAJLFABDC_TypeDefinitionIndex = 11397;

struct alignas(4) PDHAJLFABDC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDHAJLFABDC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PDHAJLFABDC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 JKFAHEJIKOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDHAJLFABDC_JKFAHEJIKOF_OFFSET))(this);
	}

	::System::Int32 EJEPBJPCMJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDHAJLFABDC_EJEPBJPCMJL_OFFSET))(this);
	}

	/*
	::PDHAJLFABDC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PDHAJLFABDC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PDHAJLFABDC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 OMBLKLNGBMK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDHAJLFABDC_OMBLKLNGBMK_OFFSET))(this);
	}

	/*
	static ::PDHAJLFABDC CMBFEDAAOKO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PDHAJLFABDC EIFONLCJOPG)
	{
		return ((::PDHAJLFABDC(*)(::FlatBuffers::ByteBuffer*, ::PDHAJLFABDC))((::PBYTE)hIl2Cpp + PDHAJLFABDC_CMBFEDAAOKO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::String* EOBPHJNKAFN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDHAJLFABDC_EOBPHJNKAFN_OFFSET))(this);
	}

	/*
	static ::PDHAJLFABDC CMBFEDAAOKO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PDHAJLFABDC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PDHAJLFABDC_CMBFEDAAOKO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
