#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNGCKNKJPCB.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MBNNAHPLBLM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MBNNAHPLBLM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MBNNAHPLBLM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MBNNAHPLBLM_HILMHLCEPBO_OFFSET UNITYSDK_OFFSET(0x758590)
#define MBNNAHPLBLM_HOMIAAGCLJD_OFFSET UNITYSDK_OFFSET(0x754F10)
#define MBNNAHPLBLM_JLNNDNFFOHM_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define MBNNAHPLBLM_MECGDPPEPLO_OFFSET UNITYSDK_OFFSET(0x754920)
#define MBNNAHPLBLM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BF5A670)
#define MBNNAHPLBLM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MBNNAHPLBLM_TypeDefinitionIndex = 10303;

struct alignas(4) MBNNAHPLBLM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBNNAHPLBLM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MBNNAHPLBLM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::MBNNAHPLBLM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MBNNAHPLBLM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MBNNAHPLBLM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* HOMIAAGCLJD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBNNAHPLBLM_HOMIAAGCLJD_OFFSET))(this);
	}

	::CNGCKNKJPCB MECGDPPEPLO()
	{
		return ((::CNGCKNKJPCB(*)(::PVOID))((::PBYTE)hIl2Cpp + MBNNAHPLBLM_MECGDPPEPLO_OFFSET))(this);
	}

	::System::String* JLNNDNFFOHM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBNNAHPLBLM_JLNNDNFFOHM_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBNNAHPLBLM_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean HILMHLCEPBO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBNNAHPLBLM_HILMHLCEPBO_OFFSET))(this);
	}

	/*
	static ::MBNNAHPLBLM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MBNNAHPLBLM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MBNNAHPLBLM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
