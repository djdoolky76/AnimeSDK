#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define GKEMCKFKNMH_APFODJBKGIC_OFFSET UNITYSDK_OFFSET(0x7577E0)
#define GKEMCKFKNMH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GKEMCKFKNMH_DALIKMOIHJN_OFFSET UNITYSDK_OFFSET(0x7A7F80)
#define GKEMCKFKNMH_ENHNJDBBCCE_OFFSET UNITYSDK_OFFSET(0x766740)
#define GKEMCKFKNMH_EOFPHNAMADE_OFFSET UNITYSDK_OFFSET(0x755E40)
#define GKEMCKFKNMH_EPKMBFMFCBG_1_OFFSET UNITYSDK_OFFSET(0x17469B70)
#define GKEMCKFKNMH_EPKMBFMFCBG_OFFSET UNITYSDK_OFFSET(0x174698E0)
#define GKEMCKFKNMH_FGBJPHEKBGB_OFFSET UNITYSDK_OFFSET(0x754970)
#define GKEMCKFKNMH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GKEMCKFKNMH_GPKIMFOAPDA_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define GKEMCKFKNMH_HDJIHEEPCKA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define GKEMCKFKNMH_KLPDBOFAEFE_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define GKEMCKFKNMH_KPDKDCCLIHK_OFFSET UNITYSDK_OFFSET(0x7A5BD0)
#define GKEMCKFKNMH_OBGLJOHDKIG_OFFSET UNITYSDK_OFFSET(0x758780)
#define GKEMCKFKNMH_PNOBGMKBIKD_OFFSET UNITYSDK_OFFSET(0x7A5C20)
#define GKEMCKFKNMH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GKEMCKFKNMH_TypeDefinitionIndex = 16447;

struct alignas(4) GKEMCKFKNMH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEMCKFKNMH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GKEMCKFKNMH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Single ENHNJDBBCCE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEMCKFKNMH_ENHNJDBBCCE_OFFSET))(this);
	}

	::System::Int32 HDJIHEEPCKA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEMCKFKNMH_HDJIHEEPCKA_OFFSET))(this);
	}

	::System::Single KPDKDCCLIHK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEMCKFKNMH_KPDKDCCLIHK_OFFSET))(this);
	}

	/*
	static ::GKEMCKFKNMH EPKMBFMFCBG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GKEMCKFKNMH EIFONLCJOPG)
	{
		return ((::GKEMCKFKNMH(*)(::FlatBuffers::ByteBuffer*, ::GKEMCKFKNMH))((::PBYTE)hIl2Cpp + GKEMCKFKNMH_EPKMBFMFCBG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GPKIMFOAPDA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEMCKFKNMH_GPKIMFOAPDA_OFFSET))(this);
	}

	::System::Int32 EOFPHNAMADE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEMCKFKNMH_EOFPHNAMADE_OFFSET))(this);
	}

	::System::Int32 FGBJPHEKBGB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEMCKFKNMH_FGBJPHEKBGB_OFFSET))(this);
	}

	::System::Single APFODJBKGIC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEMCKFKNMH_APFODJBKGIC_OFFSET))(this);
	}

	::System::Int32 KLPDBOFAEFE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEMCKFKNMH_KLPDBOFAEFE_OFFSET))(this);
	}

	::System::Int32 OBGLJOHDKIG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEMCKFKNMH_OBGLJOHDKIG_OFFSET))(this);
	}

	/*
	::GKEMCKFKNMH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GKEMCKFKNMH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GKEMCKFKNMH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Single PNOBGMKBIKD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEMCKFKNMH_PNOBGMKBIKD_OFFSET))(this);
	}

	::System::Single DALIKMOIHJN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEMCKFKNMH_DALIKMOIHJN_OFFSET))(this);
	}

	/*
	static ::GKEMCKFKNMH EPKMBFMFCBG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GKEMCKFKNMH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GKEMCKFKNMH_EPKMBFMFCBG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
