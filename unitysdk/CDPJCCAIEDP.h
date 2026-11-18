#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CDPJCCAIEDP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CDPJCCAIEDP_CCDILGLGIGE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CDPJCCAIEDP_CHLNFODLGDI_OFFSET UNITYSDK_OFFSET(0x754E10)
#define CDPJCCAIEDP_EEAKIFPAEBA_OFFSET UNITYSDK_OFFSET(0x758590)
#define CDPJCCAIEDP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CDPJCCAIEDP_JHHOBKPDHAC_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define CDPJCCAIEDP_NNIANDNNPNF_OFFSET UNITYSDK_OFFSET(0x7E24F0)
#define CDPJCCAIEDP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x195004D0)
#define CDPJCCAIEDP_OIJPAKKAHHN_OFFSET UNITYSDK_OFFSET(0x755D20)
#define CDPJCCAIEDP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CDPJCCAIEDP_TypeDefinitionIndex = 9717;

struct alignas(4) CDPJCCAIEDP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPJCCAIEDP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDPJCCAIEDP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 OIJPAKKAHHN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPJCCAIEDP_OIJPAKKAHHN_OFFSET))(this);
	}

	::System::Int32 CCDILGLGIGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPJCCAIEDP_CCDILGLGIGE_OFFSET))(this);
	}

	::System::Boolean CHLNFODLGDI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPJCCAIEDP_CHLNFODLGDI_OFFSET))(this);
	}

	::System::Boolean NNIANDNNPNF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPJCCAIEDP_NNIANDNNPNF_OFFSET))(this);
	}

	::System::Boolean EEAKIFPAEBA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPJCCAIEDP_EEAKIFPAEBA_OFFSET))(this);
	}

	/*
	::CDPJCCAIEDP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CDPJCCAIEDP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDPJCCAIEDP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* JHHOBKPDHAC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPJCCAIEDP_JHHOBKPDHAC_OFFSET))(this);
	}

	/*
	static ::CDPJCCAIEDP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CDPJCCAIEDP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CDPJCCAIEDP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
