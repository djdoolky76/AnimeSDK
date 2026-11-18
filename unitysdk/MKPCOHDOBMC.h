#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MKPCOHDOBMC_AKHLPKCMLBM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MKPCOHDOBMC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MKPCOHDOBMC_EJKOOOPPILE_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define MKPCOHDOBMC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MKPCOHDOBMC_NENKPEGHOPF_OFFSET UNITYSDK_OFFSET(0x754F10)
#define MKPCOHDOBMC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1910C930)
#define MKPCOHDOBMC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MKPCOHDOBMC_TypeDefinitionIndex = 9545;

struct alignas(4) MKPCOHDOBMC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKPCOHDOBMC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKPCOHDOBMC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* EJKOOOPPILE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKPCOHDOBMC_EJKOOOPPILE_OFFSET))(this);
	}

	::System::String* NENKPEGHOPF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKPCOHDOBMC_NENKPEGHOPF_OFFSET))(this);
	}

	/*
	static ::MKPCOHDOBMC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MKPCOHDOBMC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MKPCOHDOBMC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 AKHLPKCMLBM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKPCOHDOBMC_AKHLPKCMLBM_OFFSET))(this);
	}

	/*
	::MKPCOHDOBMC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MKPCOHDOBMC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKPCOHDOBMC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
