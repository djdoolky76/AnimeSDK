#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NCEMOEFKHCI_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NCEMOEFKHCI_AMNCCAHONCI_OFFSET UNITYSDK_OFFSET(0x756D50)
#define NCEMOEFKHCI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NCEMOEFKHCI_EPJMKPAAJBM_OFFSET UNITYSDK_OFFSET(0x755A00)
#define NCEMOEFKHCI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NCEMOEFKHCI_GFFGAKNOIBM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define NCEMOEFKHCI_LHIOELHGKFN_OFFSET UNITYSDK_OFFSET(0x754920)
#define NCEMOEFKHCI_NHOHAFNCKNF_OFFSET UNITYSDK_OFFSET(0x754F10)
#define NCEMOEFKHCI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NCEMOEFKHCI_TypeDefinitionIndex = 13209;

struct alignas(4) NCEMOEFKHCI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEMOEFKHCI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NCEMOEFKHCI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* NHOHAFNCKNF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEMOEFKHCI_NHOHAFNCKNF_OFFSET))(this);
	}

	::System::Int32 LHIOELHGKFN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEMOEFKHCI_LHIOELHGKFN_OFFSET))(this);
	}

	::System::Int32 GFFGAKNOIBM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEMOEFKHCI_GFFGAKNOIBM_OFFSET))(this);
	}

	/*
	::NCEMOEFKHCI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NCEMOEFKHCI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NCEMOEFKHCI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* EPJMKPAAJBM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEMOEFKHCI_EPJMKPAAJBM_OFFSET))(this);
	}

	::System::String* AMNCCAHONCI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEMOEFKHCI_AMNCCAHONCI_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEMOEFKHCI_ACOEONABOJL_OFFSET))(this);
	}
};
