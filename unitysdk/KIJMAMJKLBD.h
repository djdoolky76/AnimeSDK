#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KIJMAMJKLBD_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KIJMAMJKLBD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KIJMAMJKLBD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KIJMAMJKLBD_ICLBICFJAPP_OFFSET UNITYSDK_OFFSET(0x755A00)
#define KIJMAMJKLBD_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KIJMAMJKLBD_NLAIFNFGGMA_OFFSET UNITYSDK_OFFSET(0x754920)
#define KIJMAMJKLBD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1936B0A0)
#define KIJMAMJKLBD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KIJMAMJKLBD_TypeDefinitionIndex = 13466;

struct alignas(4) KIJMAMJKLBD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJMAMJKLBD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KIJMAMJKLBD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KIJMAMJKLBD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KIJMAMJKLBD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KIJMAMJKLBD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::KIJMAMJKLBD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KIJMAMJKLBD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KIJMAMJKLBD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJMAMJKLBD_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* ICLBICFJAPP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJMAMJKLBD_ICLBICFJAPP_OFFSET))(this);
	}

	::System::Int32 NLAIFNFGGMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJMAMJKLBD_NLAIFNFGGMA_OFFSET))(this);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJMAMJKLBD_NKCNGLADFNA_OFFSET))(this);
	}
};
