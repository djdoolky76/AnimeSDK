#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JPENFPIAOON_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JPENFPIAOON_ELLCMINOLFE_OFFSET UNITYSDK_OFFSET(0x754920)
#define JPENFPIAOON_FFKADBLGHEO_OFFSET UNITYSDK_OFFSET(0x755A00)
#define JPENFPIAOON_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JPENFPIAOON_KKJBOOCKLJE_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define JPENFPIAOON_MHAHNHMIBCE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JPENFPIAOON_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1748FB80)
#define JPENFPIAOON_OFOFEICBBBN_OFFSET UNITYSDK_OFFSET(0x755D20)
#define JPENFPIAOON_PMBCAKACFJP_OFFSET UNITYSDK_OFFSET(0x756D50)
#define JPENFPIAOON___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JPENFPIAOON_TypeDefinitionIndex = 10105;

struct alignas(4) JPENFPIAOON
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPENFPIAOON_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JPENFPIAOON___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* FFKADBLGHEO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPENFPIAOON_FFKADBLGHEO_OFFSET))(this);
	}

	::System::String* KKJBOOCKLJE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPENFPIAOON_KKJBOOCKLJE_OFFSET))(this);
	}

	::System::Int32 OFOFEICBBBN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPENFPIAOON_OFOFEICBBBN_OFFSET))(this);
	}

	::System::Int32 MHAHNHMIBCE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPENFPIAOON_MHAHNHMIBCE_OFFSET))(this);
	}

	/*
	static ::JPENFPIAOON OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JPENFPIAOON(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JPENFPIAOON_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::JPENFPIAOON BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JPENFPIAOON(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JPENFPIAOON_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* PMBCAKACFJP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPENFPIAOON_PMBCAKACFJP_OFFSET))(this);
	}

	::System::Int32 ELLCMINOLFE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPENFPIAOON_ELLCMINOLFE_OFFSET))(this);
	}
};
