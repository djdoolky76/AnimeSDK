#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PCNLEECCLAC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PCNLEECCLAC_FECFCHMJHML_OFFSET UNITYSDK_OFFSET(0x755A00)
#define PCNLEECCLAC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PCNLEECCLAC_HMGAIPJLDLF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PCNLEECCLAC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17375930)
#define PCNLEECCLAC_OENEGODNAAE_OFFSET UNITYSDK_OFFSET(0x754920)
#define PCNLEECCLAC_PPLLGAOKLCB_OFFSET UNITYSDK_OFFSET(0x754F10)
#define PCNLEECCLAC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PCNLEECCLAC_TypeDefinitionIndex = 16536;

struct alignas(4) PCNLEECCLAC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNLEECCLAC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PCNLEECCLAC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PCNLEECCLAC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PCNLEECCLAC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PCNLEECCLAC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* PPLLGAOKLCB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNLEECCLAC_PPLLGAOKLCB_OFFSET))(this);
	}

	::System::Int32 OENEGODNAAE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNLEECCLAC_OENEGODNAAE_OFFSET))(this);
	}

	/*
	::PCNLEECCLAC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PCNLEECCLAC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PCNLEECCLAC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 HMGAIPJLDLF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNLEECCLAC_HMGAIPJLDLF_OFFSET))(this);
	}

	::System::String* FECFCHMJHML()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNLEECCLAC_FECFCHMJHML_OFFSET))(this);
	}
};
