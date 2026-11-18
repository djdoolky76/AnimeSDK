#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MEHNAMHCHOK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MEHNAMHCHOK_DOOJMMEAPCO_OFFSET UNITYSDK_OFFSET(0x77A4E0)
#define MEHNAMHCHOK_EIAPDFNIBJP_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define MEHNAMHCHOK_FJPGCNGHHCC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MEHNAMHCHOK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MEHNAMHCHOK_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define MEHNAMHCHOK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17343220)
#define MEHNAMHCHOK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MEHNAMHCHOK_TypeDefinitionIndex = 17526;

struct alignas(4) MEHNAMHCHOK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHNAMHCHOK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEHNAMHCHOK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean DOOJMMEAPCO(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + MEHNAMHCHOK_DOOJMMEAPCO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHNAMHCHOK_GKBAJJACIEA_OFFSET))(this);
	}

	/*
	static ::MEHNAMHCHOK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MEHNAMHCHOK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MEHNAMHCHOK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::MEHNAMHCHOK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MEHNAMHCHOK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEHNAMHCHOK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 EIAPDFNIBJP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHNAMHCHOK_EIAPDFNIBJP_OFFSET))(this);
	}

	::System::Int32 FJPGCNGHHCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHNAMHCHOK_FJPGCNGHHCC_OFFSET))(this);
	}
};
