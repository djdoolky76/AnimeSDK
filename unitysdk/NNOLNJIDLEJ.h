#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NNOLNJIDLEJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NNOLNJIDLEJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NNOLNJIDLEJ_DFBPMCGIJOJ_OFFSET UNITYSDK_OFFSET(0x754970)
#define NNOLNJIDLEJ_FBMIEJIGIED_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define NNOLNJIDLEJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NNOLNJIDLEJ_HKEMFICFMAB_OFFSET UNITYSDK_OFFSET(0x754920)
#define NNOLNJIDLEJ_JFEAMBKMOMP_OFFSET UNITYSDK_OFFSET(0x755D20)
#define NNOLNJIDLEJ_LFDMNOLPANH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define NNOLNJIDLEJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NNOLNJIDLEJ_TypeDefinitionIndex = 9708;

struct alignas(4) NNOLNJIDLEJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOLNJIDLEJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NNOLNJIDLEJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::NNOLNJIDLEJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NNOLNJIDLEJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NNOLNJIDLEJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* LFDMNOLPANH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOLNJIDLEJ_LFDMNOLPANH_OFFSET))(this);
	}

	::System::Int32 HKEMFICFMAB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOLNJIDLEJ_HKEMFICFMAB_OFFSET))(this);
	}

	::System::String* FBMIEJIGIED()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOLNJIDLEJ_FBMIEJIGIED_OFFSET))(this);
	}

	::System::Int32 JFEAMBKMOMP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOLNJIDLEJ_JFEAMBKMOMP_OFFSET))(this);
	}

	::System::Int32 DFBPMCGIJOJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOLNJIDLEJ_DFBPMCGIJOJ_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOLNJIDLEJ_ACOEONABOJL_OFFSET))(this);
	}
};
