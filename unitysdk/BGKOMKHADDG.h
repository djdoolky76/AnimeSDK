#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PBDLOKDCHLG.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }

#define BGKOMKHADDG_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BGKOMKHADDG_BGIEHBBAELK_OFFSET UNITYSDK_OFFSET(0x7B1970)
#define BGKOMKHADDG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BGKOMKHADDG_BNEPPINFOHH_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define BGKOMKHADDG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BGKOMKHADDG_GMNNCIEJBNN_OFFSET UNITYSDK_OFFSET(0x756360)
#define BGKOMKHADDG_LJAOKKNLCFM_OFFSET UNITYSDK_OFFSET(0x754A70)
#define BGKOMKHADDG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17A7AE30)
#define BGKOMKHADDG_PGILFNPEJGC_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define BGKOMKHADDG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BGKOMKHADDG_TypeDefinitionIndex = 12703;

struct alignas(4) BGKOMKHADDG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKOMKHADDG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BGKOMKHADDG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BGKOMKHADDG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BGKOMKHADDG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BGKOMKHADDG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 BNEPPINFOHH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKOMKHADDG_BNEPPINFOHH_OFFSET))(this);
	}

	::System::Nullable_1<::PBDLOKDCHLG> BGIEHBBAELK()
	{
		return ((::System::Nullable_1<::PBDLOKDCHLG>(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKOMKHADDG_BGIEHBBAELK_OFFSET))(this);
	}

	::System::Int32 PGILFNPEJGC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKOMKHADDG_PGILFNPEJGC_OFFSET))(this);
	}

	/*
	::BGKOMKHADDG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BGKOMKHADDG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BGKOMKHADDG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKOMKHADDG_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean LJAOKKNLCFM(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BGKOMKHADDG_LJAOKKNLCFM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean GMNNCIEJBNN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BGKOMKHADDG_GMNNCIEJBNN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
