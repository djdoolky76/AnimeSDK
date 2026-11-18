#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FGPMDNJDHCF_AHOEAIBBFDM_OFFSET UNITYSDK_OFFSET(0x755790)
#define FGPMDNJDHCF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FGPMDNJDHCF_DDEEFHJOONA_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define FGPMDNJDHCF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FGPMDNJDHCF_MLOEBJJIPNC_OFFSET UNITYSDK_OFFSET(0x756360)
#define FGPMDNJDHCF_PACPNMFMBNP_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define FGPMDNJDHCF_PIPBPLEIPFK_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FGPMDNJDHCF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FGPMDNJDHCF_TypeDefinitionIndex = 15732;

struct alignas(4) FGPMDNJDHCF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGPMDNJDHCF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FGPMDNJDHCF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PACPNMFMBNP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGPMDNJDHCF_PACPNMFMBNP_OFFSET))(this);
	}

	::System::Int32 PIPBPLEIPFK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGPMDNJDHCF_PIPBPLEIPFK_OFFSET))(this);
	}

	/*
	::FGPMDNJDHCF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FGPMDNJDHCF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FGPMDNJDHCF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean DDEEFHJOONA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FGPMDNJDHCF_DDEEFHJOONA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 AHOEAIBBFDM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGPMDNJDHCF_AHOEAIBBFDM_OFFSET))(this);
	}

	::System::Boolean MLOEBJJIPNC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FGPMDNJDHCF_MLOEBJJIPNC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
