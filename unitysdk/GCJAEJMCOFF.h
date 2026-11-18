#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GCJAEJMCOFF_APDBGEDANFG_OFFSET UNITYSDK_OFFSET(0x757290)
#define GCJAEJMCOFF_BEPJCABMIEJ_OFFSET UNITYSDK_OFFSET(0x756B90)
#define GCJAEJMCOFF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GCJAEJMCOFF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GCJAEJMCOFF_GFJNFELCCJG_OFFSET UNITYSDK_OFFSET(0x757190)
#define GCJAEJMCOFF_GNKOMFAEBLA_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define GCJAEJMCOFF_LHMMNLFOLIH_OFFSET UNITYSDK_OFFSET(0x756D50)
#define GCJAEJMCOFF_LOCCLPHIGKE_OFFSET UNITYSDK_OFFSET(0x756B10)
#define GCJAEJMCOFF_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GCJAEJMCOFF_MNJJEDNCCBI_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define GCJAEJMCOFF_NLAIFNFGGMA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define GCJAEJMCOFF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x16641940)
#define GCJAEJMCOFF_OOAMMDCDIGF_OFFSET UNITYSDK_OFFSET(0x754B50)
#define GCJAEJMCOFF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GCJAEJMCOFF_TypeDefinitionIndex = 14211;

struct alignas(4) GCJAEJMCOFF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJAEJMCOFF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GCJAEJMCOFF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 BEPJCABMIEJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJAEJMCOFF_BEPJCABMIEJ_OFFSET))(this);
	}

	/*
	static ::GCJAEJMCOFF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GCJAEJMCOFF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GCJAEJMCOFF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* APDBGEDANFG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJAEJMCOFF_APDBGEDANFG_OFFSET))(this);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJAEJMCOFF_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::String* GNKOMFAEBLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJAEJMCOFF_GNKOMFAEBLA_OFFSET))(this);
	}

	/*
	::GCJAEJMCOFF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GCJAEJMCOFF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GCJAEJMCOFF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* LOCCLPHIGKE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJAEJMCOFF_LOCCLPHIGKE_OFFSET))(this);
	}

	::System::String* MNJJEDNCCBI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJAEJMCOFF_MNJJEDNCCBI_OFFSET))(this);
	}

	::System::String* GFJNFELCCJG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJAEJMCOFF_GFJNFELCCJG_OFFSET))(this);
	}

	::System::Int32 OOAMMDCDIGF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJAEJMCOFF_OOAMMDCDIGF_OFFSET))(this);
	}

	::System::Int32 NLAIFNFGGMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJAEJMCOFF_NLAIFNFGGMA_OFFSET))(this);
	}

	::System::String* LHMMNLFOLIH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJAEJMCOFF_LHMMNLFOLIH_OFFSET))(this);
	}
};
