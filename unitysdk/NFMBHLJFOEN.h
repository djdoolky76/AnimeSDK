#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NFMBHLJFOEN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NFMBHLJFOEN_CEHPJBLDNBA_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define NFMBHLJFOEN_DHDIOCOGIDP_OFFSET UNITYSDK_OFFSET(0x754B50)
#define NFMBHLJFOEN_FFENNEIPENI_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NFMBHLJFOEN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NFMBHLJFOEN_GPBFENDAJMF_OFFSET UNITYSDK_OFFSET(0x755A00)
#define NFMBHLJFOEN_PMHGIAFDEEP_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define NFMBHLJFOEN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NFMBHLJFOEN_TypeDefinitionIndex = 17635;

struct alignas(4) NFMBHLJFOEN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMBHLJFOEN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NFMBHLJFOEN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 FFENNEIPENI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMBHLJFOEN_FFENNEIPENI_OFFSET))(this);
	}

	/*
	::NFMBHLJFOEN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NFMBHLJFOEN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NFMBHLJFOEN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* GPBFENDAJMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMBHLJFOEN_GPBFENDAJMF_OFFSET))(this);
	}

	::System::Int32 PMHGIAFDEEP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMBHLJFOEN_PMHGIAFDEEP_OFFSET))(this);
	}

	::System::Int32 DHDIOCOGIDP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMBHLJFOEN_DHDIOCOGIDP_OFFSET))(this);
	}

	::System::Boolean CEHPJBLDNBA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NFMBHLJFOEN_CEHPJBLDNBA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
