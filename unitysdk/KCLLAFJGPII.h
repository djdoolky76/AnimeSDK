#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KCLLAFJGPII_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define KCLLAFJGPII_AHEGKACBEOH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KCLLAFJGPII_APMAOBLMPBD_OFFSET UNITYSDK_OFFSET(0x755D70)
#define KCLLAFJGPII_BAKMCJAHAFN_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KCLLAFJGPII_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KCLLAFJGPII_DEEAPACLKDJ_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define KCLLAFJGPII_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KCLLAFJGPII_GKLANJNPOKH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define KCLLAFJGPII_KDIKFBDHNPO_OFFSET UNITYSDK_OFFSET(0x754970)
#define KCLLAFJGPII_KINKHOPMBPP_OFFSET UNITYSDK_OFFSET(0x755190)
#define KCLLAFJGPII_LGPBNLHMEIG_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define KCLLAFJGPII_LNKNEJDNKGF_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define KCLLAFJGPII_NCHMNOMKBDE_OFFSET UNITYSDK_OFFSET(0x754920)
#define KCLLAFJGPII_NMGFHPADEGP_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define KCLLAFJGPII_OKGKODNEICJ_OFFSET UNITYSDK_OFFSET(0x755E40)
#define KCLLAFJGPII___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KCLLAFJGPII_TypeDefinitionIndex = 15844;

struct alignas(4) KCLLAFJGPII
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLLAFJGPII_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KCLLAFJGPII___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 KDIKFBDHNPO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLLAFJGPII_KDIKFBDHNPO_OFFSET))(this);
	}

	::System::String* ACOEONABOJL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLLAFJGPII_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 NCHMNOMKBDE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLLAFJGPII_NCHMNOMKBDE_OFFSET))(this);
	}

	::System::Int32 AHEGKACBEOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLLAFJGPII_AHEGKACBEOH_OFFSET))(this);
	}

	::System::Int32 DEEAPACLKDJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLLAFJGPII_DEEAPACLKDJ_OFFSET))(this);
	}

	::System::Boolean APMAOBLMPBD(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KCLLAFJGPII_APMAOBLMPBD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 OKGKODNEICJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLLAFJGPII_OKGKODNEICJ_OFFSET))(this);
	}

	::System::Int32 BAKMCJAHAFN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLLAFJGPII_BAKMCJAHAFN_OFFSET))(this);
	}

	::System::Int32 KINKHOPMBPP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLLAFJGPII_KINKHOPMBPP_OFFSET))(this);
	}

	::System::Int32 LGPBNLHMEIG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLLAFJGPII_LGPBNLHMEIG_OFFSET))(this);
	}

	::System::String* GKLANJNPOKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLLAFJGPII_GKLANJNPOKH_OFFSET))(this);
	}

	/*
	::KCLLAFJGPII BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KCLLAFJGPII(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KCLLAFJGPII_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NMGFHPADEGP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLLAFJGPII_NMGFHPADEGP_OFFSET))(this);
	}

	::System::Int32 LNKNEJDNKGF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLLAFJGPII_LNKNEJDNKGF_OFFSET))(this);
	}
};
