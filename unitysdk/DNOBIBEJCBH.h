#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define DNOBIBEJCBH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DNOBIBEJCBH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DNOBIBEJCBH_HJNGAMBABOP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DNOBIBEJCBH_IKPIEHCICOJ_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define DNOBIBEJCBH_JDOCDDPEDAG_OFFSET UNITYSDK_OFFSET(0x761240)
#define DNOBIBEJCBH_LENIDHCCMLE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DNOBIBEJCBH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A594E60)
#define DNOBIBEJCBH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DNOBIBEJCBH_TypeDefinitionIndex = 15824;

struct alignas(4) DNOBIBEJCBH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNOBIBEJCBH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DNOBIBEJCBH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::DNOBIBEJCBH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DNOBIBEJCBH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DNOBIBEJCBH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean IKPIEHCICOJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + DNOBIBEJCBH_IKPIEHCICOJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::DNOBIBEJCBH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 LBNKIMGOPLL, ::System::Int32 DKEDOEDOGHD, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DNOBIBEJCBH(*)(::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DNOBIBEJCBH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, LBNKIMGOPLL, DKEDOEDOGHD, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 JDOCDDPEDAG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNOBIBEJCBH_JDOCDDPEDAG_OFFSET))(this);
	}

	::System::Int32 HJNGAMBABOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNOBIBEJCBH_HJNGAMBABOP_OFFSET))(this);
	}

	::System::Int32 LENIDHCCMLE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNOBIBEJCBH_LENIDHCCMLE_OFFSET))(this);
	}
};
