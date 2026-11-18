#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KOHMKGPKKLN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KOHMKGPKKLN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KOHMKGPKKLN_DCDNGIOFFCD_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KOHMKGPKKLN_DECDHJMJBFM_OFFSET UNITYSDK_OFFSET(0x754970)
#define KOHMKGPKKLN_ENKDMGBFDFJ_OFFSET UNITYSDK_OFFSET(0x758DB0)
#define KOHMKGPKKLN_FDODNDNANDJ_OFFSET UNITYSDK_OFFSET(0x755E40)
#define KOHMKGPKKLN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KOHMKGPKKLN_IAFAKAHBIIG_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KOHMKGPKKLN_JNCJBHABHIM_OFFSET UNITYSDK_OFFSET(0x758E30)
#define KOHMKGPKKLN_KJOJEBCDMKM_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define KOHMKGPKKLN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x153094D0)
#define KOHMKGPKKLN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KOHMKGPKKLN_TypeDefinitionIndex = 13219;

struct alignas(4) KOHMKGPKKLN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHMKGPKKLN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KOHMKGPKKLN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* KJOJEBCDMKM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHMKGPKKLN_KJOJEBCDMKM_OFFSET))(this);
	}

	::System::Int32 DCDNGIOFFCD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHMKGPKKLN_DCDNGIOFFCD_OFFSET))(this);
	}

	::System::Int32 IAFAKAHBIIG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHMKGPKKLN_IAFAKAHBIIG_OFFSET))(this);
	}

	/*
	static ::KOHMKGPKKLN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 JGKNCPMELON, ::System::Int32 OPNEHHHAJEO, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KOHMKGPKKLN(*)(::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KOHMKGPKKLN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, JGKNCPMELON, OPNEHHHAJEO, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 DECDHJMJBFM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHMKGPKKLN_DECDHJMJBFM_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHMKGPKKLN_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean ENKDMGBFDFJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KOHMKGPKKLN_ENKDMGBFDFJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 JNCJBHABHIM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHMKGPKKLN_JNCJBHABHIM_OFFSET))(this);
	}

	::System::Int32 FDODNDNANDJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHMKGPKKLN_FDODNDNANDJ_OFFSET))(this);
	}

	/*
	::KOHMKGPKKLN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KOHMKGPKKLN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KOHMKGPKKLN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
