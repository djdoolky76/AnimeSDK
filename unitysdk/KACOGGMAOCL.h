#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KACOGGMAOCL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KACOGGMAOCL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KACOGGMAOCL_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KACOGGMAOCL_IKPIEHCICOJ_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define KACOGGMAOCL_JDOCDDPEDAG_OFFSET UNITYSDK_OFFSET(0x761240)
#define KACOGGMAOCL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18BD1610)
#define KACOGGMAOCL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KACOGGMAOCL_TypeDefinitionIndex = 13227;

struct alignas(4) KACOGGMAOCL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KACOGGMAOCL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KACOGGMAOCL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KACOGGMAOCL_GKBAJJACIEA_OFFSET))(this);
	}

	/*
	static ::KACOGGMAOCL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KACOGGMAOCL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KACOGGMAOCL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 JDOCDDPEDAG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KACOGGMAOCL_JDOCDDPEDAG_OFFSET))(this);
	}

	::System::Boolean IKPIEHCICOJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KACOGGMAOCL_IKPIEHCICOJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::KACOGGMAOCL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KACOGGMAOCL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KACOGGMAOCL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
