#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define BILDEENCPDN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x758780)
#define BILDEENCPDN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BILDEENCPDN_BPNJHPCNIGB_OFFSET UNITYSDK_OFFSET(0x754970)
#define BILDEENCPDN_DFKPMFMMMFG_OFFSET UNITYSDK_OFFSET(0x754920)
#define BILDEENCPDN_EFECEJCCBJC_OFFSET UNITYSDK_OFFSET(0x755C70)
#define BILDEENCPDN_EPNAMNKAHNM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define BILDEENCPDN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BILDEENCPDN_IDFBJBKBOFP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BILDEENCPDN_IPPJOKAKGDL_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define BILDEENCPDN_MBCJGCIBINJ_OFFSET UNITYSDK_OFFSET(0x755D20)
#define BILDEENCPDN_MCBCABAECOK_OFFSET UNITYSDK_OFFSET(0x756B90)
#define BILDEENCPDN_MCJMGGFHBPJ_OFFSET UNITYSDK_OFFSET(0x758200)
#define BILDEENCPDN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BILDEENCPDN_TypeDefinitionIndex = 11297;

struct alignas(4) BILDEENCPDN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BILDEENCPDN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BILDEENCPDN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MCBCABAECOK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BILDEENCPDN_MCBCABAECOK_OFFSET))(this);
	}

	::System::Int32 MBCJGCIBINJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BILDEENCPDN_MBCJGCIBINJ_OFFSET))(this);
	}

	::System::Int32 EPNAMNKAHNM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BILDEENCPDN_EPNAMNKAHNM_OFFSET))(this);
	}

	::System::Int32 EFECEJCCBJC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BILDEENCPDN_EFECEJCCBJC_OFFSET))(this);
	}

	::System::Int32 IDFBJBKBOFP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BILDEENCPDN_IDFBJBKBOFP_OFFSET))(this);
	}

	/*
	::BILDEENCPDN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BILDEENCPDN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BILDEENCPDN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BPNJHPCNIGB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BILDEENCPDN_BPNJHPCNIGB_OFFSET))(this);
	}

	::System::Int32 DFKPMFMMMFG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BILDEENCPDN_DFKPMFMMMFG_OFFSET))(this);
	}

	::System::Int32 IPPJOKAKGDL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BILDEENCPDN_IPPJOKAKGDL_OFFSET))(this);
	}

	::System::Boolean MCJMGGFHBPJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BILDEENCPDN_MCJMGGFHBPJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BILDEENCPDN_ACOEONABOJL_OFFSET))(this);
	}
};
