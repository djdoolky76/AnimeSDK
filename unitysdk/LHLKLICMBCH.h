#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LHLKLICMBCH_AHDCEIDMBCA_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define LHLKLICMBCH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LHLKLICMBCH_COOONIAHCPC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define LHLKLICMBCH_DJOODNENLFF_OFFSET UNITYSDK_OFFSET(0x754A70)
#define LHLKLICMBCH_EDLFGHCPEEJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LHLKLICMBCH_EPBFCKBEOPC_OFFSET UNITYSDK_OFFSET(0x756D50)
#define LHLKLICMBCH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LHLKLICMBCH_IHNBOEJFCMP_OFFSET UNITYSDK_OFFSET(0x756B90)
#define LHLKLICMBCH_NHJAPKCELKD_OFFSET UNITYSDK_OFFSET(0x754920)
#define LHLKLICMBCH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17FB29A0)
#define LHLKLICMBCH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LHLKLICMBCH_TypeDefinitionIndex = 16852;

struct alignas(4) LHLKLICMBCH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLKLICMBCH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHLKLICMBCH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NHJAPKCELKD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLKLICMBCH_NHJAPKCELKD_OFFSET))(this);
	}

	/*
	static ::LHLKLICMBCH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LHLKLICMBCH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LHLKLICMBCH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 IHNBOEJFCMP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLKLICMBCH_IHNBOEJFCMP_OFFSET))(this);
	}

	::System::Int32 COOONIAHCPC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLKLICMBCH_COOONIAHCPC_OFFSET))(this);
	}

	/*
	::LHLKLICMBCH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LHLKLICMBCH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHLKLICMBCH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* EPBFCKBEOPC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLKLICMBCH_EPBFCKBEOPC_OFFSET))(this);
	}

	::System::Boolean DJOODNENLFF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LHLKLICMBCH_DJOODNENLFF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 EDLFGHCPEEJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLKLICMBCH_EDLFGHCPEEJ_OFFSET))(this);
	}

	::System::Int32 AHDCEIDMBCA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLKLICMBCH_AHDCEIDMBCA_OFFSET))(this);
	}
};
