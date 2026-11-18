#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define AKFCEPEMINF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AKFCEPEMINF_CICFNMPCHDM_OFFSET UNITYSDK_OFFSET(0x755E40)
#define AKFCEPEMINF_CICJNHBBBFE_OFFSET UNITYSDK_OFFSET(0x758780)
#define AKFCEPEMINF_DFGNBNFBFBB_OFFSET UNITYSDK_OFFSET(0x754970)
#define AKFCEPEMINF_FFFGAOFGKBG_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define AKFCEPEMINF_FGIHAMIKOEN_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define AKFCEPEMINF_FJPGCNGHHCC_OFFSET UNITYSDK_OFFSET(0x755190)
#define AKFCEPEMINF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AKFCEPEMINF_HINEAACGNEA_OFFSET UNITYSDK_OFFSET(0x756490)
#define AKFCEPEMINF_HJDJIFACGNK_OFFSET UNITYSDK_OFFSET(0x757B50)
#define AKFCEPEMINF_IJEMOEIJBHH_OFFSET UNITYSDK_OFFSET(0x756B10)
#define AKFCEPEMINF_KHFKAFHGLJD_OFFSET UNITYSDK_OFFSET(0x757330)
#define AKFCEPEMINF_LFOBDNNAIKJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AKFCEPEMINF_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x755890)
#define AKFCEPEMINF_MFCNHCNINAB_OFFSET UNITYSDK_OFFSET(0x755A00)
#define AKFCEPEMINF_NCKIHPBABJA_OFFSET UNITYSDK_OFFSET(0x7560E0)
#define AKFCEPEMINF_NENDAECBCEM_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define AKFCEPEMINF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19F0F900)
#define AKFCEPEMINF_OKOILEJPEFN_OFFSET UNITYSDK_OFFSET(0x755D20)
#define AKFCEPEMINF_OLBBMAAHBLA_OFFSET UNITYSDK_OFFSET(0x755C70)
#define AKFCEPEMINF_PBCLJJKFFKJ_OFFSET UNITYSDK_OFFSET(0x7587D0)
#define AKFCEPEMINF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AKFCEPEMINF_TypeDefinitionIndex = 9746;

struct alignas(4) AKFCEPEMINF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCEPEMINF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKFCEPEMINF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 FJPGCNGHHCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCEPEMINF_FJPGCNGHHCC_OFFSET))(this);
	}

	::System::Int32 KHFKAFHGLJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCEPEMINF_KHFKAFHGLJD_OFFSET))(this);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCEPEMINF_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::Int32 CICJNHBBBFE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCEPEMINF_CICJNHBBBFE_OFFSET))(this);
	}

	::System::Int32 OLBBMAAHBLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCEPEMINF_OLBBMAAHBLA_OFFSET))(this);
	}

	::System::Int32 NENDAECBCEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCEPEMINF_NENDAECBCEM_OFFSET))(this);
	}

	::System::Boolean HJDJIFACGNK(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + AKFCEPEMINF_HJDJIFACGNK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 OKOILEJPEFN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCEPEMINF_OKOILEJPEFN_OFFSET))(this);
	}

	::System::String* FFFGAOFGKBG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCEPEMINF_FFFGAOFGKBG_OFFSET))(this);
	}

	::System::Int32 CICFNMPCHDM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCEPEMINF_CICFNMPCHDM_OFFSET))(this);
	}

	::System::Int32 DFGNBNFBFBB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCEPEMINF_DFGNBNFBFBB_OFFSET))(this);
	}

	::System::Int32 NCKIHPBABJA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCEPEMINF_NCKIHPBABJA_OFFSET))(this);
	}

	::System::Int32 PBCLJJKFFKJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCEPEMINF_PBCLJJKFFKJ_OFFSET))(this);
	}

	::System::Int32 LFOBDNNAIKJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCEPEMINF_LFOBDNNAIKJ_OFFSET))(this);
	}

	::System::String* FGIHAMIKOEN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCEPEMINF_FGIHAMIKOEN_OFFSET))(this);
	}

	::System::String* MFCNHCNINAB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCEPEMINF_MFCNHCNINAB_OFFSET))(this);
	}

	::System::String* IJEMOEIJBHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCEPEMINF_IJEMOEIJBHH_OFFSET))(this);
	}

	/*
	::AKFCEPEMINF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AKFCEPEMINF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKFCEPEMINF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean HINEAACGNEA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + AKFCEPEMINF_HINEAACGNEA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::AKFCEPEMINF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::AKFCEPEMINF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + AKFCEPEMINF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
