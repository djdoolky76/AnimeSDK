#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define JBJJIMOJKLC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JBJJIMOJKLC_DDMLAILPKJD_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define JBJJIMOJKLC_DJJNFMCJGCC_OFFSET UNITYSDK_OFFSET(0x755790)
#define JBJJIMOJKLC_DPHKPCMFGHO_OFFSET UNITYSDK_OFFSET(0x755C70)
#define JBJJIMOJKLC_FNBNHAMNODA_OFFSET UNITYSDK_OFFSET(0x756360)
#define JBJJIMOJKLC_FPHFDDKNLEN_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define JBJJIMOJKLC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JBJJIMOJKLC_HAIAGGFHJDB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JBJJIMOJKLC_HEFPLBCJIBJ_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define JBJJIMOJKLC_HIKLLKHONFO_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define JBJJIMOJKLC_JLLHDFAMIGH_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define JBJJIMOJKLC_KGKGENPIOCA_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define JBJJIMOJKLC_PFANMMGFLPF_OFFSET UNITYSDK_OFFSET(0x761240)
#define JBJJIMOJKLC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JBJJIMOJKLC_TypeDefinitionIndex = 11151;

struct alignas(4) JBJJIMOJKLC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJJIMOJKLC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JBJJIMOJKLC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HAIAGGFHJDB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJJIMOJKLC_HAIAGGFHJDB_OFFSET))(this);
	}

	::System::Boolean HEFPLBCJIBJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JBJJIMOJKLC_HEFPLBCJIBJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::JBJJIMOJKLC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JBJJIMOJKLC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JBJJIMOJKLC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 PFANMMGFLPF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJJIMOJKLC_PFANMMGFLPF_OFFSET))(this);
	}

	::System::Int32 DJJNFMCJGCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJJIMOJKLC_DJJNFMCJGCC_OFFSET))(this);
	}

	::System::Int32 HIKLLKHONFO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJJIMOJKLC_HIKLLKHONFO_OFFSET))(this);
	}

	::System::Int32 KGKGENPIOCA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJJIMOJKLC_KGKGENPIOCA_OFFSET))(this);
	}

	::System::Int32 DDMLAILPKJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJJIMOJKLC_DDMLAILPKJD_OFFSET))(this);
	}

	::System::Boolean FNBNHAMNODA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JBJJIMOJKLC_FNBNHAMNODA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean FPHFDDKNLEN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JBJJIMOJKLC_FPHFDDKNLEN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean JLLHDFAMIGH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JBJJIMOJKLC_JLLHDFAMIGH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 DPHKPCMFGHO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJJIMOJKLC_DPHKPCMFGHO_OFFSET))(this);
	}
};
