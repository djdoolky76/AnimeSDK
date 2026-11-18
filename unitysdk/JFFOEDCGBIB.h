#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JFFOEDCGBIB_AMMIKPDMEDB_OFFSET UNITYSDK_OFFSET(0x756B90)
#define JFFOEDCGBIB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JFFOEDCGBIB_CBDIPLDNALP_OFFSET UNITYSDK_OFFSET(0x755C70)
#define JFFOEDCGBIB_DOANMPMIDHG_OFFSET UNITYSDK_OFFSET(0x754920)
#define JFFOEDCGBIB_DOPEKPFEEGK_OFFSET UNITYSDK_OFFSET(0x754F10)
#define JFFOEDCGBIB_FHMALJNDDCG_OFFSET UNITYSDK_OFFSET(0x754B50)
#define JFFOEDCGBIB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JFFOEDCGBIB_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JFFOEDCGBIB_KAGMKBKBDIN_OFFSET UNITYSDK_OFFSET(0x758780)
#define JFFOEDCGBIB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19548930)
#define JFFOEDCGBIB_OPBNDBOAKKL_OFFSET UNITYSDK_OFFSET(0x755E40)
#define JFFOEDCGBIB_PNBHJLJFLPB_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define JFFOEDCGBIB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JFFOEDCGBIB_TypeDefinitionIndex = 12976;

struct alignas(4) JFFOEDCGBIB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFOEDCGBIB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JFFOEDCGBIB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFOEDCGBIB_GKBAJJACIEA_OFFSET))(this);
	}

	::System::Int32 FHMALJNDDCG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFOEDCGBIB_FHMALJNDDCG_OFFSET))(this);
	}

	::System::Int32 KAGMKBKBDIN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFOEDCGBIB_KAGMKBKBDIN_OFFSET))(this);
	}

	::System::Int32 AMMIKPDMEDB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFOEDCGBIB_AMMIKPDMEDB_OFFSET))(this);
	}

	/*
	::JFFOEDCGBIB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JFFOEDCGBIB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JFFOEDCGBIB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 OPBNDBOAKKL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFOEDCGBIB_OPBNDBOAKKL_OFFSET))(this);
	}

	::System::Int32 CBDIPLDNALP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFOEDCGBIB_CBDIPLDNALP_OFFSET))(this);
	}

	::System::Int32 PNBHJLJFLPB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFOEDCGBIB_PNBHJLJFLPB_OFFSET))(this);
	}

	::System::Int32 DOANMPMIDHG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFOEDCGBIB_DOANMPMIDHG_OFFSET))(this);
	}

	/*
	static ::JFFOEDCGBIB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JFFOEDCGBIB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JFFOEDCGBIB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* DOPEKPFEEGK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFOEDCGBIB_DOPEKPFEEGK_OFFSET))(this);
	}
};
