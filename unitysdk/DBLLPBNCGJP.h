#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DBLLPBNCGJP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DBLLPBNCGJP_AJDEPOBBGJC_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define DBLLPBNCGJP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DBLLPBNCGJP_BIFMIKAACJH_OFFSET UNITYSDK_OFFSET(0x755790)
#define DBLLPBNCGJP_GBCOMPPFAAA_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define DBLLPBNCGJP_GBKMFMOEANA_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define DBLLPBNCGJP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DBLLPBNCGJP_MOLEHGFBHJE_OFFSET UNITYSDK_OFFSET(0x756360)
#define DBLLPBNCGJP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A54C530)
#define DBLLPBNCGJP_PKJMAACHLDO_OFFSET UNITYSDK_OFFSET(0x756B90)
#define DBLLPBNCGJP_PLJNLMLDKAH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define DBLLPBNCGJP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DBLLPBNCGJP_TypeDefinitionIndex = 10924;

struct alignas(4) DBLLPBNCGJP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLLPBNCGJP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DBLLPBNCGJP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 BIFMIKAACJH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLLPBNCGJP_BIFMIKAACJH_OFFSET))(this);
	}

	::System::Boolean GBKMFMOEANA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + DBLLPBNCGJP_GBKMFMOEANA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 AJDEPOBBGJC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLLPBNCGJP_AJDEPOBBGJC_OFFSET))(this);
	}

	::System::Boolean MOLEHGFBHJE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + DBLLPBNCGJP_MOLEHGFBHJE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLLPBNCGJP_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::DBLLPBNCGJP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DBLLPBNCGJP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DBLLPBNCGJP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 PKJMAACHLDO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLLPBNCGJP_PKJMAACHLDO_OFFSET))(this);
	}

	::System::String* PLJNLMLDKAH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLLPBNCGJP_PLJNLMLDKAH_OFFSET))(this);
	}

	::System::String* GBCOMPPFAAA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLLPBNCGJP_GBCOMPPFAAA_OFFSET))(this);
	}

	/*
	static ::DBLLPBNCGJP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DBLLPBNCGJP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DBLLPBNCGJP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
