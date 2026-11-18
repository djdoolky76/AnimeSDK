#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define DADMGGNJAPE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DADMGGNJAPE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DADMGGNJAPE_IKPIEHCICOJ_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define DADMGGNJAPE_JDOCDDPEDAG_OFFSET UNITYSDK_OFFSET(0x761240)
#define DADMGGNJAPE_NLBOALNBODH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DADMGGNJAPE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19BFDE20)
#define DADMGGNJAPE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DADMGGNJAPE_TypeDefinitionIndex = 13460;

struct alignas(4) DADMGGNJAPE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DADMGGNJAPE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DADMGGNJAPE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean IKPIEHCICOJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + DADMGGNJAPE_IKPIEHCICOJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::DADMGGNJAPE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DADMGGNJAPE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DADMGGNJAPE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 NLBOALNBODH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DADMGGNJAPE_NLBOALNBODH_OFFSET))(this);
	}

	::System::Int32 JDOCDDPEDAG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DADMGGNJAPE_JDOCDDPEDAG_OFFSET))(this);
	}

	/*
	::DADMGGNJAPE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DADMGGNJAPE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DADMGGNJAPE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
