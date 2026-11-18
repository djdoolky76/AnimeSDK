#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MIKAKCLAIGG_AAOOBDFAFNG_OFFSET UNITYSDK_OFFSET(0x761710)
#define MIKAKCLAIGG_AIEFACCJECA_OFFSET UNITYSDK_OFFSET(0x766790)
#define MIKAKCLAIGG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MIKAKCLAIGG_DBIMAKPGEJG_OFFSET UNITYSDK_OFFSET(0x7666F0)
#define MIKAKCLAIGG_DFPGHFDLLCC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MIKAKCLAIGG_DLOCLMLNPOM_OFFSET UNITYSDK_OFFSET(0x764220)
#define MIKAKCLAIGG_EGKGNJEKDJH_OFFSET UNITYSDK_OFFSET(0x754B50)
#define MIKAKCLAIGG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MIKAKCLAIGG_HECPKBMJOMB_OFFSET UNITYSDK_OFFSET(0x7A5C70)
#define MIKAKCLAIGG_HLGJLMBBNAM_OFFSET UNITYSDK_OFFSET(0x7A5BD0)
#define MIKAKCLAIGG_IOAPLNKHBFA_OFFSET UNITYSDK_OFFSET(0x7667E0)
#define MIKAKCLAIGG_KGPKOGJIBNI_OFFSET UNITYSDK_OFFSET(0x766740)
#define MIKAKCLAIGG_KOPDMKCDEHI_OFFSET UNITYSDK_OFFSET(0x7666A0)
#define MIKAKCLAIGG_LOMHOEEBCGP_OFFSET UNITYSDK_OFFSET(0x7A5B80)
#define MIKAKCLAIGG_NAJIAAJCPJD_OFFSET UNITYSDK_OFFSET(0x7A5C20)
#define MIKAKCLAIGG_NCOMPGNPABM_1_OFFSET UNITYSDK_OFFSET(0x173460F0)
#define MIKAKCLAIGG_NCOMPGNPABM_OFFSET UNITYSDK_OFFSET(0x173460B0)
#define MIKAKCLAIGG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MIKAKCLAIGG_TypeDefinitionIndex = 15135;

struct alignas(4) MIKAKCLAIGG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKAKCLAIGG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MIKAKCLAIGG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Single IOAPLNKHBFA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKAKCLAIGG_IOAPLNKHBFA_OFFSET))(this);
	}

	/*
	static ::MIKAKCLAIGG NCOMPGNPABM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MIKAKCLAIGG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MIKAKCLAIGG_NCOMPGNPABM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Single KOPDMKCDEHI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKAKCLAIGG_KOPDMKCDEHI_OFFSET))(this);
	}

	::System::Single KGPKOGJIBNI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKAKCLAIGG_KGPKOGJIBNI_OFFSET))(this);
	}

	/*
	::MIKAKCLAIGG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MIKAKCLAIGG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MIKAKCLAIGG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Single DLOCLMLNPOM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKAKCLAIGG_DLOCLMLNPOM_OFFSET))(this);
	}

	::System::Int32 DFPGHFDLLCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKAKCLAIGG_DFPGHFDLLCC_OFFSET))(this);
	}

	::System::Int32 EGKGNJEKDJH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKAKCLAIGG_EGKGNJEKDJH_OFFSET))(this);
	}

	/*
	static ::MIKAKCLAIGG NCOMPGNPABM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MIKAKCLAIGG EIFONLCJOPG)
	{
		return ((::MIKAKCLAIGG(*)(::FlatBuffers::ByteBuffer*, ::MIKAKCLAIGG))((::PBYTE)hIl2Cpp + MIKAKCLAIGG_NCOMPGNPABM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::String* AAOOBDFAFNG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKAKCLAIGG_AAOOBDFAFNG_OFFSET))(this);
	}

	::System::Single LOMHOEEBCGP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKAKCLAIGG_LOMHOEEBCGP_OFFSET))(this);
	}

	::System::Single HLGJLMBBNAM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKAKCLAIGG_HLGJLMBBNAM_OFFSET))(this);
	}

	::System::Single NAJIAAJCPJD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKAKCLAIGG_NAJIAAJCPJD_OFFSET))(this);
	}

	::System::Single AIEFACCJECA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKAKCLAIGG_AIEFACCJECA_OFFSET))(this);
	}

	::System::Single DBIMAKPGEJG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKAKCLAIGG_DBIMAKPGEJG_OFFSET))(this);
	}

	::System::Single HECPKBMJOMB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKAKCLAIGG_HECPKBMJOMB_OFFSET))(this);
	}
};
