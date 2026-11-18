#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IALMGMNPGFG_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IALMGMNPGFG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IALMGMNPGFG_DOEDEBCEDJG_OFFSET UNITYSDK_OFFSET(0x7F1750)
#define IALMGMNPGFG_DPFLFHEBKJM_OFFSET UNITYSDK_OFFSET(0x756B90)
#define IALMGMNPGFG_FGGHJFNIEGD_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define IALMGMNPGFG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IALMGMNPGFG_GJMHAFOCMDP_OFFSET UNITYSDK_OFFSET(0x7588B0)
#define IALMGMNPGFG_HJEALPAHMOF_OFFSET UNITYSDK_OFFSET(0x758780)
#define IALMGMNPGFG_IHHMOOHPFID_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define IALMGMNPGFG_IJENMBHBNPE_OFFSET UNITYSDK_OFFSET(0x756B10)
#define IALMGMNPGFG_JKAEFGOLDED_OFFSET UNITYSDK_OFFSET(0x7E3710)
#define IALMGMNPGFG_MCGDGAOJMAD_OFFSET UNITYSDK_OFFSET(0x755E40)
#define IALMGMNPGFG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B4E84A0)
#define IALMGMNPGFG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IALMGMNPGFG_TypeDefinitionIndex = 9786;

struct alignas(4) IALMGMNPGFG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IALMGMNPGFG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IALMGMNPGFG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::UInt64 JKAEFGOLDED()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + IALMGMNPGFG_JKAEFGOLDED_OFFSET))(this);
	}

	::System::String* IJENMBHBNPE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IALMGMNPGFG_IJENMBHBNPE_OFFSET))(this);
	}

	::System::Int32 DPFLFHEBKJM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IALMGMNPGFG_DPFLFHEBKJM_OFFSET))(this);
	}

	/*
	::IALMGMNPGFG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IALMGMNPGFG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IALMGMNPGFG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FGGHJFNIEGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IALMGMNPGFG_FGGHJFNIEGD_OFFSET))(this);
	}

	::System::Boolean GJMHAFOCMDP(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + IALMGMNPGFG_GJMHAFOCMDP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::IALMGMNPGFG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IALMGMNPGFG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IALMGMNPGFG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 MCGDGAOJMAD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IALMGMNPGFG_MCGDGAOJMAD_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IALMGMNPGFG_ACOEONABOJL_OFFSET))(this);
	}

	::System::UInt64 DOEDEBCEDJG()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + IALMGMNPGFG_DOEDEBCEDJG_OFFSET))(this);
	}

	::System::String* IHHMOOHPFID()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IALMGMNPGFG_IHHMOOHPFID_OFFSET))(this);
	}

	::System::Int32 HJEALPAHMOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IALMGMNPGFG_HJEALPAHMOF_OFFSET))(this);
	}
};
