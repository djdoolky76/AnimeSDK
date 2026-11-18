#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MIFHAEPNCHA_ADOIIJKPLNE_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define MIFHAEPNCHA_AGAOMOILFKG_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define MIFHAEPNCHA_AOJOKOIBJLA_OFFSET UNITYSDK_OFFSET(0x761240)
#define MIFHAEPNCHA_BEOCICMIJBH_OFFSET UNITYSDK_OFFSET(0x758780)
#define MIFHAEPNCHA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MIFHAEPNCHA_ELHJOMPHFNM_OFFSET UNITYSDK_OFFSET(0x755E40)
#define MIFHAEPNCHA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MIFHAEPNCHA_JPGJOMIEKFN_OFFSET UNITYSDK_OFFSET(0x757A90)
#define MIFHAEPNCHA_LAKDFBCAIJE_OFFSET UNITYSDK_OFFSET(0x7563E0)
#define MIFHAEPNCHA_LDBOBNKDLJM_OFFSET UNITYSDK_OFFSET(0x762B30)
#define MIFHAEPNCHA_PIMMOMALLPM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MIFHAEPNCHA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MIFHAEPNCHA_TypeDefinitionIndex = 10346;

struct alignas(4) MIFHAEPNCHA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIFHAEPNCHA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MIFHAEPNCHA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 AOJOKOIBJLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIFHAEPNCHA_AOJOKOIBJLA_OFFSET))(this);
	}

	::System::Boolean ADOIIJKPLNE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MIFHAEPNCHA_ADOIIJKPLNE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 PIMMOMALLPM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIFHAEPNCHA_PIMMOMALLPM_OFFSET))(this);
	}

	::System::Int32 LAKDFBCAIJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIFHAEPNCHA_LAKDFBCAIJE_OFFSET))(this);
	}

	/*
	::MIFHAEPNCHA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MIFHAEPNCHA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MIFHAEPNCHA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* AGAOMOILFKG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIFHAEPNCHA_AGAOMOILFKG_OFFSET))(this);
	}

	::System::Boolean JPGJOMIEKFN(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + MIFHAEPNCHA_JPGJOMIEKFN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 BEOCICMIJBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIFHAEPNCHA_BEOCICMIJBH_OFFSET))(this);
	}

	::System::Boolean LDBOBNKDLJM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIFHAEPNCHA_LDBOBNKDLJM_OFFSET))(this);
	}

	::System::Int32 ELHJOMPHFNM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIFHAEPNCHA_ELHJOMPHFNM_OFFSET))(this);
	}
};
