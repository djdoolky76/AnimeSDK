#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EKBJPFKAIPF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EKBJPFKAIPF_AJJKGLNBKKH_OFFSET UNITYSDK_OFFSET(0x7E3710)
#define EKBJPFKAIPF_BDNHODOCNAA_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define EKBJPFKAIPF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EKBJPFKAIPF_CAPEBDGEINN_OFFSET UNITYSDK_OFFSET(0x788CF0)
#define EKBJPFKAIPF_CDDBCGCGAAO_OFFSET UNITYSDK_OFFSET(0x7F1750)
#define EKBJPFKAIPF_CKJHFNIEHFM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EKBJPFKAIPF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EKBJPFKAIPF_HOPFMLBPBEL_OFFSET UNITYSDK_OFFSET(0x7FA450)
#define EKBJPFKAIPF_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define EKBJPFKAIPF_JACLKLHDBFM_OFFSET UNITYSDK_OFFSET(0x7C4080)
#define EKBJPFKAIPF_JCKGGJGMHDP_OFFSET UNITYSDK_OFFSET(0x761710)
#define EKBJPFKAIPF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1ADD48A0)
#define EKBJPFKAIPF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EKBJPFKAIPF_TypeDefinitionIndex = 17476;

struct alignas(4) EKBJPFKAIPF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBJPFKAIPF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EKBJPFKAIPF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::UInt64 CAPEBDGEINN()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBJPFKAIPF_CAPEBDGEINN_OFFSET))(this);
	}

	::System::UInt64 JACLKLHDBFM()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBJPFKAIPF_JACLKLHDBFM_OFFSET))(this);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBJPFKAIPF_IFDIOIOCGDP_OFFSET))(this);
	}

	::System::UInt64 HOPFMLBPBEL()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBJPFKAIPF_HOPFMLBPBEL_OFFSET))(this);
	}

	::System::UInt64 CDDBCGCGAAO()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBJPFKAIPF_CDDBCGCGAAO_OFFSET))(this);
	}

	::System::Int32 CKJHFNIEHFM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBJPFKAIPF_CKJHFNIEHFM_OFFSET))(this);
	}

	::System::String* BDNHODOCNAA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBJPFKAIPF_BDNHODOCNAA_OFFSET))(this);
	}

	::System::String* JCKGGJGMHDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBJPFKAIPF_JCKGGJGMHDP_OFFSET))(this);
	}

	/*
	::EKBJPFKAIPF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EKBJPFKAIPF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EKBJPFKAIPF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::EKBJPFKAIPF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EKBJPFKAIPF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EKBJPFKAIPF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBJPFKAIPF_ACOEONABOJL_OFFSET))(this);
	}

	::System::UInt64 AJJKGLNBKKH()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBJPFKAIPF_AJJKGLNBKKH_OFFSET))(this);
	}
};
