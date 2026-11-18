#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define HHLPENGNGJD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HHLPENGNGJD_EEPNAEONHAC_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define HHLPENGNGJD_FBGNGBIIGKD_OFFSET UNITYSDK_OFFSET(0x756780)
#define HHLPENGNGJD_FDBGGELHFLH_OFFSET UNITYSDK_OFFSET(0x7562E0)
#define HHLPENGNGJD_FGCJPMMHBIE_OFFSET UNITYSDK_OFFSET(0x7563E0)
#define HHLPENGNGJD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HHLPENGNGJD_GGJGHAHFOLC_OFFSET UNITYSDK_OFFSET(0x754D50)
#define HHLPENGNGJD_HLEPNLBPHMB_OFFSET UNITYSDK_OFFSET(0x756720)
#define HHLPENGNGJD_IFHLBDABIJH_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define HHLPENGNGJD_JLMIPICJPDD_OFFSET UNITYSDK_OFFSET(0x758200)
#define HHLPENGNGJD_NADKCDMJMBD_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define HHLPENGNGJD_OFOPGNLIBMB_OFFSET UNITYSDK_OFFSET(0x754A70)
#define HHLPENGNGJD_PFNFLOHIJNP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HHLPENGNGJD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HHLPENGNGJD_TypeDefinitionIndex = 13157;

struct alignas(4) HHLPENGNGJD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLPENGNGJD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHLPENGNGJD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HLEPNLBPHMB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLPENGNGJD_HLEPNLBPHMB_OFFSET))(this);
	}

	::System::Boolean OFOPGNLIBMB(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HHLPENGNGJD_OFOPGNLIBMB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GGJGHAHFOLC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLPENGNGJD_GGJGHAHFOLC_OFFSET))(this);
	}

	::System::Boolean IFHLBDABIJH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HHLPENGNGJD_IFHLBDABIJH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean JLMIPICJPDD(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HHLPENGNGJD_JLMIPICJPDD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 EEPNAEONHAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLPENGNGJD_EEPNAEONHAC_OFFSET))(this);
	}

	::System::Boolean FDBGGELHFLH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HHLPENGNGJD_FDBGGELHFLH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::HHLPENGNGJD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HHLPENGNGJD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHLPENGNGJD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NADKCDMJMBD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLPENGNGJD_NADKCDMJMBD_OFFSET))(this);
	}

	::System::Int32 FGCJPMMHBIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLPENGNGJD_FGCJPMMHBIE_OFFSET))(this);
	}

	::System::Int32 PFNFLOHIJNP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLPENGNGJD_PFNFLOHIJNP_OFFSET))(this);
	}

	::System::Boolean FBGNGBIIGKD(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HHLPENGNGJD_FBGNGBIIGKD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
