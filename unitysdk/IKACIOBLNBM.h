#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IKACIOBLNBM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IKACIOBLNBM_BHOCGBENING_OFFSET UNITYSDK_OFFSET(0x755E40)
#define IKACIOBLNBM_CHBOEJLHCOP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define IKACIOBLNBM_DCBNBLOIDHM_OFFSET UNITYSDK_OFFSET(0x754920)
#define IKACIOBLNBM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IKACIOBLNBM_GONPAPKKNCB_OFFSET UNITYSDK_OFFSET(0x755C70)
#define IKACIOBLNBM_HCPGMCLEBLD_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define IKACIOBLNBM_IBCOOHFHJCC_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define IKACIOBLNBM_MAFBKKFBGFA_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define IKACIOBLNBM_OEDMJLPOKMO_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IKACIOBLNBM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IKACIOBLNBM_TypeDefinitionIndex = 13376;

struct alignas(4) IKACIOBLNBM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKACIOBLNBM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IKACIOBLNBM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* HCPGMCLEBLD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKACIOBLNBM_HCPGMCLEBLD_OFFSET))(this);
	}

	/*
	::IKACIOBLNBM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IKACIOBLNBM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IKACIOBLNBM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GONPAPKKNCB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKACIOBLNBM_GONPAPKKNCB_OFFSET))(this);
	}

	::System::Int32 OEDMJLPOKMO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKACIOBLNBM_OEDMJLPOKMO_OFFSET))(this);
	}

	::System::String* IBCOOHFHJCC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKACIOBLNBM_IBCOOHFHJCC_OFFSET))(this);
	}

	::System::Int32 DCBNBLOIDHM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKACIOBLNBM_DCBNBLOIDHM_OFFSET))(this);
	}

	::System::Int32 BHOCGBENING()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKACIOBLNBM_BHOCGBENING_OFFSET))(this);
	}

	::System::String* MAFBKKFBGFA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKACIOBLNBM_MAFBKKFBGFA_OFFSET))(this);
	}

	::System::String* CHBOEJLHCOP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKACIOBLNBM_CHBOEJLHCOP_OFFSET))(this);
	}
};
