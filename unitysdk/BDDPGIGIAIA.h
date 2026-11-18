#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BDDPGIGIAIA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BDDPGIGIAIA_AJJKGLNBKKH_OFFSET UNITYSDK_OFFSET(0x7C4080)
#define BDDPGIGIAIA_BDNHODOCNAA_OFFSET UNITYSDK_OFFSET(0x757760)
#define BDDPGIGIAIA_BEELDBDCMGG_OFFSET UNITYSDK_OFFSET(0x754E10)
#define BDDPGIGIAIA_BFMDEIFMEFM_OFFSET UNITYSDK_OFFSET(0x757C10)
#define BDDPGIGIAIA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BDDPGIGIAIA_CAPEBDGEINN_OFFSET UNITYSDK_OFFSET(0x762790)
#define BDDPGIGIAIA_CDDBCGCGAAO_OFFSET UNITYSDK_OFFSET(0x7F17A0)
#define BDDPGIGIAIA_CMECLKAAKOP_OFFSET UNITYSDK_OFFSET(0x765FD0)
#define BDDPGIGIAIA_DBCCBHIKGMK_OFFSET UNITYSDK_OFFSET(0x7F1750)
#define BDDPGIGIAIA_DIHABPJOACL_OFFSET UNITYSDK_OFFSET(0x7A7A10)
#define BDDPGIGIAIA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BDDPGIGIAIA_GONMOPBFMFO_OFFSET UNITYSDK_OFFSET(0x761D30)
#define BDDPGIGIAIA_KAIGIFENONG_OFFSET UNITYSDK_OFFSET(0x762860)
#define BDDPGIGIAIA_KBLIJAMLMEO_OFFSET UNITYSDK_OFFSET(0x76FBF0)
#define BDDPGIGIAIA_KKKHDHGLDHI_OFFSET UNITYSDK_OFFSET(0x7EA330)
#define BDDPGIGIAIA_MKELBHKBKDC_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define BDDPGIGIAIA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19F17A50)
#define BDDPGIGIAIA_POFIDNCBONF_OFFSET UNITYSDK_OFFSET(0x7F1700)
#define BDDPGIGIAIA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BDDPGIGIAIA_TypeDefinitionIndex = 11169;

struct alignas(4) BDDPGIGIAIA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDPGIGIAIA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDDPGIGIAIA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::UInt64 AJJKGLNBKKH()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDPGIGIAIA_AJJKGLNBKKH_OFFSET))(this);
	}

	::System::UInt64 KAIGIFENONG()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDPGIGIAIA_KAIGIFENONG_OFFSET))(this);
	}

	::System::Int32 BFMDEIFMEFM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDPGIGIAIA_BFMDEIFMEFM_OFFSET))(this);
	}

	::System::UInt64 DIHABPJOACL()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDPGIGIAIA_DIHABPJOACL_OFFSET))(this);
	}

	::System::UInt64 POFIDNCBONF()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDPGIGIAIA_POFIDNCBONF_OFFSET))(this);
	}

	::System::String* BDNHODOCNAA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDPGIGIAIA_BDNHODOCNAA_OFFSET))(this);
	}

	::System::Boolean BEELDBDCMGG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDPGIGIAIA_BEELDBDCMGG_OFFSET))(this);
	}

	::System::String* MKELBHKBKDC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDPGIGIAIA_MKELBHKBKDC_OFFSET))(this);
	}

	::System::UInt64 DBCCBHIKGMK()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDPGIGIAIA_DBCCBHIKGMK_OFFSET))(this);
	}

	/*
	static ::BDDPGIGIAIA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BDDPGIGIAIA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BDDPGIGIAIA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::UInt64 CAPEBDGEINN()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDPGIGIAIA_CAPEBDGEINN_OFFSET))(this);
	}

	::System::Boolean GONMOPBFMFO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDPGIGIAIA_GONMOPBFMFO_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDPGIGIAIA_ACOEONABOJL_OFFSET))(this);
	}

	::System::UInt64 CDDBCGCGAAO()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDPGIGIAIA_CDDBCGCGAAO_OFFSET))(this);
	}

	/*
	::BDDPGIGIAIA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BDDPGIGIAIA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDDPGIGIAIA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean KBLIJAMLMEO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDPGIGIAIA_KBLIJAMLMEO_OFFSET))(this);
	}

	::System::UInt64 KKKHDHGLDHI()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDPGIGIAIA_KKKHDHGLDHI_OFFSET))(this);
	}

	::System::Boolean CMECLKAAKOP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDPGIGIAIA_CMECLKAAKOP_OFFSET))(this);
	}
};
