#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define COKLMMOBOGN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define COKLMMOBOGN_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define COKLMMOBOGN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define COKLMMOBOGN_MBFBHLJIKNI_OFFSET UNITYSDK_OFFSET(0x761240)
#define COKLMMOBOGN_MMAJOCDKBBH_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define COKLMMOBOGN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A182AB0)
#define COKLMMOBOGN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int COKLMMOBOGN_TypeDefinitionIndex = 15751;

struct alignas(4) COKLMMOBOGN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + COKLMMOBOGN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + COKLMMOBOGN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MBFBHLJIKNI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COKLMMOBOGN_MBFBHLJIKNI_OFFSET))(this);
	}

	::System::Boolean MMAJOCDKBBH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + COKLMMOBOGN_MMAJOCDKBBH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::COKLMMOBOGN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::COKLMMOBOGN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + COKLMMOBOGN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COKLMMOBOGN_DNKLBHKEDEM_OFFSET))(this);
	}

	/*
	static ::COKLMMOBOGN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::COKLMMOBOGN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + COKLMMOBOGN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
