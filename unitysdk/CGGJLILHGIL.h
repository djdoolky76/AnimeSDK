#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define CGGJLILHGIL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CGGJLILHGIL_BNLIHJGCLKF_OFFSET UNITYSDK_OFFSET(0x7552C0)
#define CGGJLILHGIL_CBECADKEHON_OFFSET UNITYSDK_OFFSET(0x7551E0)
#define CGGJLILHGIL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CGGJLILHGIL_HIAJANPPNDB_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define CGGJLILHGIL_IBIJININBBE_OFFSET UNITYSDK_OFFSET(0x754B50)
#define CGGJLILHGIL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1ADBC140)
#define CGGJLILHGIL_ONFGLHFDEED_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CGGJLILHGIL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CGGJLILHGIL_TypeDefinitionIndex = 16426;

struct alignas(4) CGGJLILHGIL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGGJLILHGIL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CGGJLILHGIL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean CBECADKEHON(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CGGJLILHGIL_CBECADKEHON_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::CGGJLILHGIL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CGGJLILHGIL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CGGJLILHGIL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 BNLIHJGCLKF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGGJLILHGIL_BNLIHJGCLKF_OFFSET))(this);
	}

	/*
	::CGGJLILHGIL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CGGJLILHGIL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CGGJLILHGIL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ONFGLHFDEED()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGGJLILHGIL_ONFGLHFDEED_OFFSET))(this);
	}

	::System::Int32 HIAJANPPNDB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGGJLILHGIL_HIAJANPPNDB_OFFSET))(this);
	}

	::System::Int32 IBIJININBBE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGGJLILHGIL_IBIJININBBE_OFFSET))(this);
	}
};
