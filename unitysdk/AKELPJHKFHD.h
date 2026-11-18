#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define AKELPJHKFHD_AFGPOEHAJGD_OFFSET UNITYSDK_OFFSET(0x754920)
#define AKELPJHKFHD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AKELPJHKFHD_DNHPHEPIAOB_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define AKELPJHKFHD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AKELPJHKFHD_ILGDEBLMCMN_OFFSET UNITYSDK_OFFSET(0x761240)
#define AKELPJHKFHD_KDFAOMCGIDO_OFFSET UNITYSDK_OFFSET(0x755D20)
#define AKELPJHKFHD_NHHPLCIEPHH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AKELPJHKFHD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AKELPJHKFHD_TypeDefinitionIndex = 16511;

struct alignas(4) AKELPJHKFHD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKELPJHKFHD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKELPJHKFHD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ILGDEBLMCMN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKELPJHKFHD_ILGDEBLMCMN_OFFSET))(this);
	}

	::System::Int32 KDFAOMCGIDO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKELPJHKFHD_KDFAOMCGIDO_OFFSET))(this);
	}

	::System::Boolean DNHPHEPIAOB(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + AKELPJHKFHD_DNHPHEPIAOB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::AKELPJHKFHD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AKELPJHKFHD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKELPJHKFHD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 AFGPOEHAJGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKELPJHKFHD_AFGPOEHAJGD_OFFSET))(this);
	}

	::System::Int32 NHHPLCIEPHH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKELPJHKFHD_NHHPLCIEPHH_OFFSET))(this);
	}
};
