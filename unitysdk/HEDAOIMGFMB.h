#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HEDAOIMGFMB_AEHDBMGDKGB_OFFSET UNITYSDK_OFFSET(0x755A00)
#define HEDAOIMGFMB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HEDAOIMGFMB_BKPKFJPHJIK_OFFSET UNITYSDK_OFFSET(0x761240)
#define HEDAOIMGFMB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HEDAOIMGFMB_IEAACBODFDC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HEDAOIMGFMB_MHOEJADFIHN_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define HEDAOIMGFMB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B11EDB0)
#define HEDAOIMGFMB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HEDAOIMGFMB_TypeDefinitionIndex = 13609;

struct alignas(4) HEDAOIMGFMB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDAOIMGFMB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HEDAOIMGFMB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* AEHDBMGDKGB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDAOIMGFMB_AEHDBMGDKGB_OFFSET))(this);
	}

	/*
	static ::HEDAOIMGFMB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HEDAOIMGFMB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HEDAOIMGFMB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 BKPKFJPHJIK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDAOIMGFMB_BKPKFJPHJIK_OFFSET))(this);
	}

	::System::Boolean MHOEJADFIHN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HEDAOIMGFMB_MHOEJADFIHN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::HEDAOIMGFMB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HEDAOIMGFMB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HEDAOIMGFMB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 IEAACBODFDC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDAOIMGFMB_IEAACBODFDC_OFFSET))(this);
	}
};
