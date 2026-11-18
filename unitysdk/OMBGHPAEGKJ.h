#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OMBGHPAEGKJ_AJOLIOGJGPC_OFFSET UNITYSDK_OFFSET(0x755710)
#define OMBGHPAEGKJ_BDDLOCPFJDK_OFFSET UNITYSDK_OFFSET(0x755570)
#define OMBGHPAEGKJ_BHEGEFBEKIB_OFFSET UNITYSDK_OFFSET(0x762C60)
#define OMBGHPAEGKJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OMBGHPAEGKJ_DIHAKBIDDEC_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define OMBGHPAEGKJ_EOCDNIMPDJH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OMBGHPAEGKJ_FDIFCMMHBCO_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define OMBGHPAEGKJ_FLIPDCJJAOL_OFFSET UNITYSDK_OFFSET(0x757290)
#define OMBGHPAEGKJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OMBGHPAEGKJ_IBAHJIMNGML_OFFSET UNITYSDK_OFFSET(0x76F6C0)
#define OMBGHPAEGKJ_JAMPMKBNJLB_OFFSET UNITYSDK_OFFSET(0x755440)
#define OMBGHPAEGKJ_JENELNGOJJL_OFFSET UNITYSDK_OFFSET(0x7A6880)
#define OMBGHPAEGKJ_JODOPPHAJLK_OFFSET UNITYSDK_OFFSET(0x757E20)
#define OMBGHPAEGKJ_JOPMIMECBHH_OFFSET UNITYSDK_OFFSET(0x756280)
#define OMBGHPAEGKJ_KEEPNABKJJM_OFFSET UNITYSDK_OFFSET(0x757690)
#define OMBGHPAEGKJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BF80430)
#define OMBGHPAEGKJ_OLNCMHBHNJH_OFFSET UNITYSDK_OFFSET(0x765AF0)
#define OMBGHPAEGKJ_POGPOBGLDHL_OFFSET UNITYSDK_OFFSET(0x756B10)
#define OMBGHPAEGKJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OMBGHPAEGKJ_TypeDefinitionIndex = 13173;

struct alignas(4) OMBGHPAEGKJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBGHPAEGKJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMBGHPAEGKJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean IBAHJIMNGML()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBGHPAEGKJ_IBAHJIMNGML_OFFSET))(this);
	}

	::System::String* BDDLOCPFJDK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBGHPAEGKJ_BDDLOCPFJDK_OFFSET))(this);
	}

	/*
	static ::OMBGHPAEGKJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OMBGHPAEGKJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OMBGHPAEGKJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean OLNCMHBHNJH(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + OMBGHPAEGKJ_OLNCMHBHNJH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* POGPOBGLDHL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBGHPAEGKJ_POGPOBGLDHL_OFFSET))(this);
	}

	::System::Int32 JAMPMKBNJLB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBGHPAEGKJ_JAMPMKBNJLB_OFFSET))(this);
	}

	::System::String* KEEPNABKJJM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBGHPAEGKJ_KEEPNABKJJM_OFFSET))(this);
	}

	/*
	::OMBGHPAEGKJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OMBGHPAEGKJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMBGHPAEGKJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 EOCDNIMPDJH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBGHPAEGKJ_EOCDNIMPDJH_OFFSET))(this);
	}

	::System::Boolean JENELNGOJJL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBGHPAEGKJ_JENELNGOJJL_OFFSET))(this);
	}

	::System::String* FLIPDCJJAOL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBGHPAEGKJ_FLIPDCJJAOL_OFFSET))(this);
	}

	::System::String* DIHAKBIDDEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBGHPAEGKJ_DIHAKBIDDEC_OFFSET))(this);
	}

	::System::Boolean BHEGEFBEKIB(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + OMBGHPAEGKJ_BHEGEFBEKIB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* JODOPPHAJLK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBGHPAEGKJ_JODOPPHAJLK_OFFSET))(this);
	}

	::System::Int32 JOPMIMECBHH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBGHPAEGKJ_JOPMIMECBHH_OFFSET))(this);
	}

	::System::Int32 FDIFCMMHBCO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBGHPAEGKJ_FDIFCMMHBCO_OFFSET))(this);
	}

	::System::String* AJOLIOGJGPC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBGHPAEGKJ_AJOLIOGJGPC_OFFSET))(this);
	}
};
