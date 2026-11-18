#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DDFCOOPPONA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DDFCOOPPONA_BEMCKHOJKKM_OFFSET UNITYSDK_OFFSET(0x754920)
#define DDFCOOPPONA_BFIGMKHDKIE_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DDFCOOPPONA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DDFCOOPPONA_BNMKGFJAMEL_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DDFCOOPPONA_CHPJFMHPEFG_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define DDFCOOPPONA_EKNLEOCHPAP_OFFSET UNITYSDK_OFFSET(0x755C70)
#define DDFCOOPPONA_EPNAMNKAHNM_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define DDFCOOPPONA_FLJNHADINAO_OFFSET UNITYSDK_OFFSET(0x7587D0)
#define DDFCOOPPONA_GELLJKBJDLP_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define DDFCOOPPONA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DDFCOOPPONA_HFINOBAJIGH_OFFSET UNITYSDK_OFFSET(0x758780)
#define DDFCOOPPONA_IIDKGHLNKLF_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define DDFCOOPPONA_MMLIHCLFNAK_OFFSET UNITYSDK_OFFSET(0x755E40)
#define DDFCOOPPONA_NGKOPBCHFOP_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define DDFCOOPPONA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DDFCOOPPONA_TypeDefinitionIndex = 15875;

struct alignas(4) DDFCOOPPONA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFCOOPPONA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DDFCOOPPONA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MMLIHCLFNAK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFCOOPPONA_MMLIHCLFNAK_OFFSET))(this);
	}

	::System::Int32 EKNLEOCHPAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFCOOPPONA_EKNLEOCHPAP_OFFSET))(this);
	}

	::System::Int32 HFINOBAJIGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFCOOPPONA_HFINOBAJIGH_OFFSET))(this);
	}

	::System::Int32 FLJNHADINAO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFCOOPPONA_FLJNHADINAO_OFFSET))(this);
	}

	/*
	::DDFCOOPPONA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DDFCOOPPONA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DDFCOOPPONA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 EPNAMNKAHNM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFCOOPPONA_EPNAMNKAHNM_OFFSET))(this);
	}

	::System::String* NGKOPBCHFOP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFCOOPPONA_NGKOPBCHFOP_OFFSET))(this);
	}

	::System::Int32 GELLJKBJDLP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFCOOPPONA_GELLJKBJDLP_OFFSET))(this);
	}

	::System::Int32 CHPJFMHPEFG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFCOOPPONA_CHPJFMHPEFG_OFFSET))(this);
	}

	::System::Int32 BNMKGFJAMEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFCOOPPONA_BNMKGFJAMEL_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFCOOPPONA_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 BEMCKHOJKKM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFCOOPPONA_BEMCKHOJKKM_OFFSET))(this);
	}

	::System::Int32 IIDKGHLNKLF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFCOOPPONA_IIDKGHLNKLF_OFFSET))(this);
	}

	::System::Int32 BFIGMKHDKIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFCOOPPONA_BFIGMKHDKIE_OFFSET))(this);
	}
};
