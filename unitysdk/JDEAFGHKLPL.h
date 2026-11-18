#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JDEAFGHKLPL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JDEAFGHKLPL_CBJHJHDAKPO_OFFSET UNITYSDK_OFFSET(0x755C70)
#define JDEAFGHKLPL_DFJDPIPGCDA_OFFSET UNITYSDK_OFFSET(0x756B10)
#define JDEAFGHKLPL_FCNENLGONEN_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define JDEAFGHKLPL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JDEAFGHKLPL_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define JDEAFGHKLPL_NKAGGHKKGFI_OFFSET UNITYSDK_OFFSET(0x755A00)
#define JDEAFGHKLPL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18BC70E0)
#define JDEAFGHKLPL_PELOFHKJEPN_OFFSET UNITYSDK_OFFSET(0x756D50)
#define JDEAFGHKLPL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JDEAFGHKLPL_TypeDefinitionIndex = 11845;

struct alignas(4) JDEAFGHKLPL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEAFGHKLPL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JDEAFGHKLPL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* NKAGGHKKGFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEAFGHKLPL_NKAGGHKKGFI_OFFSET))(this);
	}

	::System::Int32 FCNENLGONEN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEAFGHKLPL_FCNENLGONEN_OFFSET))(this);
	}

	/*
	::JDEAFGHKLPL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JDEAFGHKLPL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JDEAFGHKLPL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEAFGHKLPL_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::String* DFJDPIPGCDA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEAFGHKLPL_DFJDPIPGCDA_OFFSET))(this);
	}

	/*
	static ::JDEAFGHKLPL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JDEAFGHKLPL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JDEAFGHKLPL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* PELOFHKJEPN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEAFGHKLPL_PELOFHKJEPN_OFFSET))(this);
	}

	::System::Int32 CBJHJHDAKPO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEAFGHKLPL_CBJHJHDAKPO_OFFSET))(this);
	}
};
