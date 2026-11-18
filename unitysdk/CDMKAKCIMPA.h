#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CDMKAKCIMPA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CDMKAKCIMPA_CPBNNNFPKEM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define CDMKAKCIMPA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CDMKAKCIMPA_HICIFJLLGGL_OFFSET UNITYSDK_OFFSET(0x756B10)
#define CDMKAKCIMPA_KCJJGBIOEND_OFFSET UNITYSDK_OFFSET(0x755A00)
#define CDMKAKCIMPA_LCPENLKLNEA_OFFSET UNITYSDK_OFFSET(0x754F10)
#define CDMKAKCIMPA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19500060)
#define CDMKAKCIMPA_PAJAKNKKJHH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CDMKAKCIMPA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CDMKAKCIMPA_TypeDefinitionIndex = 10175;

struct alignas(4) CDMKAKCIMPA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMKAKCIMPA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDMKAKCIMPA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 CPBNNNFPKEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMKAKCIMPA_CPBNNNFPKEM_OFFSET))(this);
	}

	::System::String* LCPENLKLNEA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMKAKCIMPA_LCPENLKLNEA_OFFSET))(this);
	}

	::System::String* HICIFJLLGGL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMKAKCIMPA_HICIFJLLGGL_OFFSET))(this);
	}

	/*
	static ::CDMKAKCIMPA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CDMKAKCIMPA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CDMKAKCIMPA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::CDMKAKCIMPA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CDMKAKCIMPA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDMKAKCIMPA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 PAJAKNKKJHH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMKAKCIMPA_PAJAKNKKJHH_OFFSET))(this);
	}

	::System::String* KCJJGBIOEND()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMKAKCIMPA_KCJJGBIOEND_OFFSET))(this);
	}
};
