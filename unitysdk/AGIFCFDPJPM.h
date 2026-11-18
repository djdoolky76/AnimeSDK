#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define AGIFCFDPJPM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AGIFCFDPJPM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AGIFCFDPJPM_LHCHCKNBFBL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AGIFCFDPJPM_MFPMIFLLCAJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define AGIFCFDPJPM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19ABAB90)
#define AGIFCFDPJPM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AGIFCFDPJPM_TypeDefinitionIndex = 17071;

struct alignas(4) AGIFCFDPJPM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIFCFDPJPM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGIFCFDPJPM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::AGIFCFDPJPM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AGIFCFDPJPM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGIFCFDPJPM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LHCHCKNBFBL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIFCFDPJPM_LHCHCKNBFBL_OFFSET))(this);
	}

	::System::Int32 MFPMIFLLCAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIFCFDPJPM_MFPMIFLLCAJ_OFFSET))(this);
	}

	/*
	static ::AGIFCFDPJPM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::AGIFCFDPJPM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + AGIFCFDPJPM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
