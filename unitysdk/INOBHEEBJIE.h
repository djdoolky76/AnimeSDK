#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define INOBHEEBJIE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define INOBHEEBJIE_EJBAGPIJLHP_OFFSET UNITYSDK_OFFSET(0x754B50)
#define INOBHEEBJIE_FKGHIGBMBEP_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define INOBHEEBJIE_GEPPLAOBLGD_OFFSET UNITYSDK_OFFSET(0x756B90)
#define INOBHEEBJIE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define INOBHEEBJIE_GFMHGEMKGKC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define INOBHEEBJIE_GPIIOFLAMJF_OFFSET UNITYSDK_OFFSET(0x755790)
#define INOBHEEBJIE_HFOADHDAOMO_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define INOBHEEBJIE_JBAMCJIBIBN_OFFSET UNITYSDK_OFFSET(0x755E40)
#define INOBHEEBJIE_KIBBGOIILOD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define INOBHEEBJIE_LIDIIBAMCHF_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define INOBHEEBJIE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19354EC0)
#define INOBHEEBJIE_OPFCLABONGA_OFFSET UNITYSDK_OFFSET(0x757290)
#define INOBHEEBJIE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int INOBHEEBJIE_TypeDefinitionIndex = 15211;

struct alignas(4) INOBHEEBJIE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + INOBHEEBJIE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + INOBHEEBJIE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GEPPLAOBLGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INOBHEEBJIE_GEPPLAOBLGD_OFFSET))(this);
	}

	::System::String* FKGHIGBMBEP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INOBHEEBJIE_FKGHIGBMBEP_OFFSET))(this);
	}

	::System::Int32 KIBBGOIILOD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INOBHEEBJIE_KIBBGOIILOD_OFFSET))(this);
	}

	::System::Boolean HFOADHDAOMO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + INOBHEEBJIE_HFOADHDAOMO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* LIDIIBAMCHF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INOBHEEBJIE_LIDIIBAMCHF_OFFSET))(this);
	}

	::System::Int32 EJBAGPIJLHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INOBHEEBJIE_EJBAGPIJLHP_OFFSET))(this);
	}

	/*
	static ::INOBHEEBJIE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::INOBHEEBJIE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + INOBHEEBJIE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 GFMHGEMKGKC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INOBHEEBJIE_GFMHGEMKGKC_OFFSET))(this);
	}

	::System::String* OPFCLABONGA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INOBHEEBJIE_OPFCLABONGA_OFFSET))(this);
	}

	::System::Int32 GPIIOFLAMJF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INOBHEEBJIE_GPIIOFLAMJF_OFFSET))(this);
	}

	/*
	::INOBHEEBJIE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::INOBHEEBJIE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + INOBHEEBJIE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 JBAMCJIBIBN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INOBHEEBJIE_JBAMCJIBIBN_OFFSET))(this);
	}
};
