#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HFPAOFLECHA_AAHEMKIDGME_OFFSET UNITYSDK_OFFSET(0x755890)
#define HFPAOFLECHA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HFPAOFLECHA_BDDEMJCHGNA_OFFSET UNITYSDK_OFFSET(0x758200)
#define HFPAOFLECHA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HFPAOFLECHA_ELDABLJDOOB_OFFSET UNITYSDK_OFFSET(0x758780)
#define HFPAOFLECHA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HFPAOFLECHA_JABIKKPEFKB_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define HFPAOFLECHA_LJPHLOPLCLL_OFFSET UNITYSDK_OFFSET(0x756D50)
#define HFPAOFLECHA_NDCPGHGEPAA_OFFSET UNITYSDK_OFFSET(0x755190)
#define HFPAOFLECHA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HFPAOFLECHA_TypeDefinitionIndex = 11809;

struct alignas(4) HFPAOFLECHA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPAOFLECHA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFPAOFLECHA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* LJPHLOPLCLL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPAOFLECHA_LJPHLOPLCLL_OFFSET))(this);
	}

	::System::Int32 ELDABLJDOOB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPAOFLECHA_ELDABLJDOOB_OFFSET))(this);
	}

	::System::Int32 AAHEMKIDGME()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPAOFLECHA_AAHEMKIDGME_OFFSET))(this);
	}

	::System::Int32 NDCPGHGEPAA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPAOFLECHA_NDCPGHGEPAA_OFFSET))(this);
	}

	/*
	::HFPAOFLECHA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HFPAOFLECHA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFPAOFLECHA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPAOFLECHA_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean BDDEMJCHGNA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HFPAOFLECHA_BDDEMJCHGNA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 JABIKKPEFKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPAOFLECHA_JABIKKPEFKB_OFFSET))(this);
	}
};
