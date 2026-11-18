#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FDPLLNPBIEO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FDPLLNPBIEO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FDPLLNPBIEO_BKJLECKHPKA_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define FDPLLNPBIEO_DGDINACLCOG_OFFSET UNITYSDK_OFFSET(0x756360)
#define FDPLLNPBIEO_FIODAAJLOAN_OFFSET UNITYSDK_OFFSET(0x755790)
#define FDPLLNPBIEO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FDPLLNPBIEO_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FDPLLNPBIEO_KAHLCJKJFNN_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define FDPLLNPBIEO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FDPLLNPBIEO_TypeDefinitionIndex = 14152;

struct alignas(4) FDPLLNPBIEO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPLLNPBIEO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FDPLLNPBIEO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 FIODAAJLOAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPLLNPBIEO_FIODAAJLOAN_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPLLNPBIEO_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Boolean BKJLECKHPKA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FDPLLNPBIEO_BKJLECKHPKA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::FDPLLNPBIEO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FDPLLNPBIEO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FDPLLNPBIEO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 KAHLCJKJFNN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPLLNPBIEO_KAHLCJKJFNN_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPLLNPBIEO_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean DGDINACLCOG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FDPLLNPBIEO_DGDINACLCOG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
