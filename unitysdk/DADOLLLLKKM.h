#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DADOLLLLKKM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DADOLLLLKKM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DADOLLLLKKM_HEEIDGJBAAK_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define DADOLLLLKKM_KDBNGIJCHFB_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define DADOLLLLKKM_MFPMIFLLCAJ_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DADOLLLLKKM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17777850)
#define DADOLLLLKKM_OBEEHBEMKDE_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define DADOLLLLKKM_OLMKKENLKPI_OFFSET UNITYSDK_OFFSET(0x757290)
#define DADOLLLLKKM_ONOLHJGKLGI_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DADOLLLLKKM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DADOLLLLKKM_TypeDefinitionIndex = 9630;

struct alignas(4) DADOLLLLKKM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DADOLLLLKKM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DADOLLLLKKM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DADOLLLLKKM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DADOLLLLKKM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DADOLLLLKKM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* KDBNGIJCHFB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DADOLLLLKKM_KDBNGIJCHFB_OFFSET))(this);
	}

	::System::Int32 ONOLHJGKLGI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DADOLLLLKKM_ONOLHJGKLGI_OFFSET))(this);
	}

	::System::Int32 OBEEHBEMKDE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DADOLLLLKKM_OBEEHBEMKDE_OFFSET))(this);
	}

	/*
	::DADOLLLLKKM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DADOLLLLKKM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DADOLLLLKKM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* HEEIDGJBAAK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DADOLLLLKKM_HEEIDGJBAAK_OFFSET))(this);
	}

	::System::String* OLMKKENLKPI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DADOLLLLKKM_OLMKKENLKPI_OFFSET))(this);
	}

	::System::Int32 MFPMIFLLCAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DADOLLLLKKM_MFPMIFLLCAJ_OFFSET))(this);
	}
};
