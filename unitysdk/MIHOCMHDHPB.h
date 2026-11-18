#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define MIHOCMHDHPB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MIHOCMHDHPB_DIIJGKHGGGK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MIHOCMHDHPB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MIHOCMHDHPB_MPMHFOIKJNN_OFFSET UNITYSDK_OFFSET(0x760F60)
#define MIHOCMHDHPB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19578640)
#define MIHOCMHDHPB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MIHOCMHDHPB_TypeDefinitionIndex = 9637;

struct alignas(4) MIHOCMHDHPB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOCMHDHPB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MIHOCMHDHPB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DIIJGKHGGGK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOCMHDHPB_DIIJGKHGGGK_OFFSET))(this);
	}

	/*
	::MIHOCMHDHPB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MIHOCMHDHPB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MIHOCMHDHPB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean MPMHFOIKJNN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOCMHDHPB_MPMHFOIKJNN_OFFSET))(this);
	}

	/*
	static ::MIHOCMHDHPB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MIHOCMHDHPB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MIHOCMHDHPB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
