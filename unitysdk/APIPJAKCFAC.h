#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define APIPJAKCFAC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define APIPJAKCFAC_EJEDPHHENNN_OFFSET UNITYSDK_OFFSET(0x758590)
#define APIPJAKCFAC_FJOHHBEJEBF_OFFSET UNITYSDK_OFFSET(0x754B50)
#define APIPJAKCFAC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define APIPJAKCFAC_JOKAKIMBIKB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define APIPJAKCFAC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18774280)
#define APIPJAKCFAC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int APIPJAKCFAC_TypeDefinitionIndex = 12798;

struct alignas(4) APIPJAKCFAC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + APIPJAKCFAC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + APIPJAKCFAC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 FJOHHBEJEBF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APIPJAKCFAC_FJOHHBEJEBF_OFFSET))(this);
	}

	::System::Int32 JOKAKIMBIKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APIPJAKCFAC_JOKAKIMBIKB_OFFSET))(this);
	}

	/*
	static ::APIPJAKCFAC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::APIPJAKCFAC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + APIPJAKCFAC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::APIPJAKCFAC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::APIPJAKCFAC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + APIPJAKCFAC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean EJEDPHHENNN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APIPJAKCFAC_EJEDPHHENNN_OFFSET))(this);
	}
};
