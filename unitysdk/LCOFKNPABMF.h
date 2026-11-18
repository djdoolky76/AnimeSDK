#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define LCOFKNPABMF_ABGCNKNMEDG_OFFSET UNITYSDK_OFFSET(0x754B50)
#define LCOFKNPABMF_APIGLFOFEJD_OFFSET UNITYSDK_OFFSET(0x756B90)
#define LCOFKNPABMF_BHDHHGIHKGK_OFFSET UNITYSDK_OFFSET(0x754970)
#define LCOFKNPABMF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LCOFKNPABMF_BJKLDBAIFEA_OFFSET UNITYSDK_OFFSET(0x755190)
#define LCOFKNPABMF_BLGFAKIFKLH_OFFSET UNITYSDK_OFFSET(0x758780)
#define LCOFKNPABMF_EPHOFDNNJOG_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define LCOFKNPABMF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LCOFKNPABMF_GOPAOBCNFLJ_OFFSET UNITYSDK_OFFSET(0x755D20)
#define LCOFKNPABMF_ILAKFHJLJGI_OFFSET UNITYSDK_OFFSET(0x755C70)
#define LCOFKNPABMF_MFBBHNEBOMC_OFFSET UNITYSDK_OFFSET(0x755E40)
#define LCOFKNPABMF_MJGJCGIHDPG_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define LCOFKNPABMF_MOFIGKIBMJJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LCOFKNPABMF_PKMCJMIFMDO_OFFSET UNITYSDK_OFFSET(0x754920)
#define LCOFKNPABMF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LCOFKNPABMF_TypeDefinitionIndex = 14234;

struct alignas(4) LCOFKNPABMF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCOFKNPABMF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCOFKNPABMF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ABGCNKNMEDG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCOFKNPABMF_ABGCNKNMEDG_OFFSET))(this);
	}

	::System::Int32 APIGLFOFEJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCOFKNPABMF_APIGLFOFEJD_OFFSET))(this);
	}

	::System::Int32 MOFIGKIBMJJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCOFKNPABMF_MOFIGKIBMJJ_OFFSET))(this);
	}

	::System::Int32 PKMCJMIFMDO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCOFKNPABMF_PKMCJMIFMDO_OFFSET))(this);
	}

	::System::Int32 MJGJCGIHDPG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCOFKNPABMF_MJGJCGIHDPG_OFFSET))(this);
	}

	::System::Int32 ILAKFHJLJGI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCOFKNPABMF_ILAKFHJLJGI_OFFSET))(this);
	}

	::System::Int32 GOPAOBCNFLJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCOFKNPABMF_GOPAOBCNFLJ_OFFSET))(this);
	}

	/*
	::LCOFKNPABMF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LCOFKNPABMF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCOFKNPABMF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MFBBHNEBOMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCOFKNPABMF_MFBBHNEBOMC_OFFSET))(this);
	}

	::System::Int32 BHDHHGIHKGK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCOFKNPABMF_BHDHHGIHKGK_OFFSET))(this);
	}

	::System::Int32 BLGFAKIFKLH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCOFKNPABMF_BLGFAKIFKLH_OFFSET))(this);
	}

	::System::Int32 EPHOFDNNJOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCOFKNPABMF_EPHOFDNNJOG_OFFSET))(this);
	}

	::System::Int32 BJKLDBAIFEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCOFKNPABMF_BJKLDBAIFEA_OFFSET))(this);
	}
};
