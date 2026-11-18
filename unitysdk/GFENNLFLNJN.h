#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GFENNLFLNJN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GFENNLFLNJN_DHEOJCKDJIB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GFENNLFLNJN_GAJAAPPAPAK_OFFSET UNITYSDK_OFFSET(0x755D20)
#define GFENNLFLNJN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GFENNLFLNJN_JPEIMCJFPFB_OFFSET UNITYSDK_OFFSET(0x761240)
#define GFENNLFLNJN_LIGOFCPGINM_OFFSET UNITYSDK_OFFSET(0x754C20)
#define GFENNLFLNJN_NJODDBJHNCG_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define GFENNLFLNJN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5B1220)
#define GFENNLFLNJN_PGENAABCLMD_OFFSET UNITYSDK_OFFSET(0x761500)
#define GFENNLFLNJN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GFENNLFLNJN_TypeDefinitionIndex = 12077;

struct alignas(4) GFENNLFLNJN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFENNLFLNJN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFENNLFLNJN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::GFENNLFLNJN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GFENNLFLNJN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFENNLFLNJN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GFENNLFLNJN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GFENNLFLNJN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GFENNLFLNJN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean NJODDBJHNCG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GFENNLFLNJN_NJODDBJHNCG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 DHEOJCKDJIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFENNLFLNJN_DHEOJCKDJIB_OFFSET))(this);
	}

	::System::Int32 GAJAAPPAPAK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFENNLFLNJN_GAJAAPPAPAK_OFFSET))(this);
	}

	::System::Int32 JPEIMCJFPFB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFENNLFLNJN_JPEIMCJFPFB_OFFSET))(this);
	}

	::System::Boolean PGENAABCLMD(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + GFENNLFLNJN_PGENAABCLMD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 LIGOFCPGINM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFENNLFLNJN_LIGOFCPGINM_OFFSET))(this);
	}
};
