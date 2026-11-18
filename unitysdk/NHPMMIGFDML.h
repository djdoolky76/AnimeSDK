#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NHPMMIGFDML_AELLDMBFGKF_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define NHPMMIGFDML_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NHPMMIGFDML_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NHPMMIGFDML_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NHPMMIGFDML_NLLFHNELKJL_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define NHPMMIGFDML_NNAGCOCHLNP_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define NHPMMIGFDML_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B32C9F0)
#define NHPMMIGFDML_PAGPGIPKICO_OFFSET UNITYSDK_OFFSET(0x756B10)
#define NHPMMIGFDML___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NHPMMIGFDML_TypeDefinitionIndex = 12676;

struct alignas(4) NHPMMIGFDML
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPMMIGFDML_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NHPMMIGFDML___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NHPMMIGFDML OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NHPMMIGFDML(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NHPMMIGFDML_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPMMIGFDML_GKBAJJACIEA_OFFSET))(this);
	}

	::System::Boolean NLLFHNELKJL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NHPMMIGFDML_NLLFHNELKJL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* AELLDMBFGKF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPMMIGFDML_AELLDMBFGKF_OFFSET))(this);
	}

	::System::Int32 NNAGCOCHLNP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPMMIGFDML_NNAGCOCHLNP_OFFSET))(this);
	}

	::System::String* PAGPGIPKICO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPMMIGFDML_PAGPGIPKICO_OFFSET))(this);
	}

	/*
	::NHPMMIGFDML BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NHPMMIGFDML(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NHPMMIGFDML_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
