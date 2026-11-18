#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HCDGIMFHCAK_AOFHCLKMAKH_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define HCDGIMFHCAK_BBJGHAGDKOM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HCDGIMFHCAK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HCDGIMFHCAK_ENOBACNFFMC_OFFSET UNITYSDK_OFFSET(0x758780)
#define HCDGIMFHCAK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HCDGIMFHCAK_IEFKNFCBOPO_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define HCDGIMFHCAK_KKJFLCJEFIN_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define HCDGIMFHCAK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x160EF3B0)
#define HCDGIMFHCAK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HCDGIMFHCAK_TypeDefinitionIndex = 10735;

struct alignas(4) HCDGIMFHCAK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCDGIMFHCAK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCDGIMFHCAK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* KKJFLCJEFIN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCDGIMFHCAK_KKJFLCJEFIN_OFFSET))(this);
	}

	::System::Int32 ENOBACNFFMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCDGIMFHCAK_ENOBACNFFMC_OFFSET))(this);
	}

	/*
	::HCDGIMFHCAK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HCDGIMFHCAK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCDGIMFHCAK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BBJGHAGDKOM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCDGIMFHCAK_BBJGHAGDKOM_OFFSET))(this);
	}

	::System::Int32 IEFKNFCBOPO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCDGIMFHCAK_IEFKNFCBOPO_OFFSET))(this);
	}

	/*
	static ::HCDGIMFHCAK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HCDGIMFHCAK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HCDGIMFHCAK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* AOFHCLKMAKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCDGIMFHCAK_AOFHCLKMAKH_OFFSET))(this);
	}
};
