#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KAPCPIDPDNK_BGEDOOLCGBH_OFFSET UNITYSDK_OFFSET(0x755E40)
#define KAPCPIDPDNK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KAPCPIDPDNK_CALCHACHGEJ_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define KAPCPIDPDNK_EKBELAKAGLM_OFFSET UNITYSDK_OFFSET(0x755190)
#define KAPCPIDPDNK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KAPCPIDPDNK_HMHAGPNCCGA_OFFSET UNITYSDK_OFFSET(0x758780)
#define KAPCPIDPDNK_JNPNCKHFDEF_OFFSET UNITYSDK_OFFSET(0x755890)
#define KAPCPIDPDNK_MBGHIDHIKDE_OFFSET UNITYSDK_OFFSET(0x756440)
#define KAPCPIDPDNK_MMMGPAAPICN_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define KAPCPIDPDNK_PIIDCBMJHAH_OFFSET UNITYSDK_OFFSET(0x755C70)
#define KAPCPIDPDNK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KAPCPIDPDNK_TypeDefinitionIndex = 10201;

struct alignas(4) KAPCPIDPDNK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAPCPIDPDNK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KAPCPIDPDNK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MMMGPAAPICN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAPCPIDPDNK_MMMGPAAPICN_OFFSET))(this);
	}

	/*
	::KAPCPIDPDNK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KAPCPIDPDNK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KAPCPIDPDNK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 CALCHACHGEJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAPCPIDPDNK_CALCHACHGEJ_OFFSET))(this);
	}

	::System::Int32 BGEDOOLCGBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAPCPIDPDNK_BGEDOOLCGBH_OFFSET))(this);
	}

	::System::Int32 JNPNCKHFDEF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAPCPIDPDNK_JNPNCKHFDEF_OFFSET))(this);
	}

	::System::Int32 MBGHIDHIKDE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAPCPIDPDNK_MBGHIDHIKDE_OFFSET))(this);
	}

	::System::Int32 HMHAGPNCCGA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAPCPIDPDNK_HMHAGPNCCGA_OFFSET))(this);
	}

	::System::Int32 EKBELAKAGLM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAPCPIDPDNK_EKBELAKAGLM_OFFSET))(this);
	}

	::System::Int32 PIIDCBMJHAH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAPCPIDPDNK_PIIDCBMJHAH_OFFSET))(this);
	}
};
