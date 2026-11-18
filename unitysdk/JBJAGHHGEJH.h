#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JBJAGHHGEJH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JBJAGHHGEJH_AMNCCAHONCI_OFFSET UNITYSDK_OFFSET(0x756B10)
#define JBJAGHHGEJH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JBJAGHHGEJH_EGOCINKFCGE_OFFSET UNITYSDK_OFFSET(0x754970)
#define JBJAGHHGEJH_EPJMKPAAJBM_OFFSET UNITYSDK_OFFSET(0x755A00)
#define JBJAGHHGEJH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JBJAGHHGEJH_GFFGAKNOIBM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define JBJAGHHGEJH_LHIOELHGKFN_OFFSET UNITYSDK_OFFSET(0x755C70)
#define JBJAGHHGEJH_NHOHAFNCKNF_OFFSET UNITYSDK_OFFSET(0x754F10)
#define JBJAGHHGEJH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JBJAGHHGEJH_TypeDefinitionIndex = 11312;

struct alignas(4) JBJAGHHGEJH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJAGHHGEJH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JBJAGHHGEJH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* EPJMKPAAJBM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJAGHHGEJH_EPJMKPAAJBM_OFFSET))(this);
	}

	::System::Int32 GFFGAKNOIBM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJAGHHGEJH_GFFGAKNOIBM_OFFSET))(this);
	}

	::System::String* AMNCCAHONCI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJAGHHGEJH_AMNCCAHONCI_OFFSET))(this);
	}

	::System::Int32 EGOCINKFCGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJAGHHGEJH_EGOCINKFCGE_OFFSET))(this);
	}

	::System::Int32 LHIOELHGKFN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJAGHHGEJH_LHIOELHGKFN_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJAGHHGEJH_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::JBJAGHHGEJH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JBJAGHHGEJH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JBJAGHHGEJH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* NHOHAFNCKNF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJAGHHGEJH_NHOHAFNCKNF_OFFSET))(this);
	}
};
