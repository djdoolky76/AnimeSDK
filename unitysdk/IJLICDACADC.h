#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IJLICDACADC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IJLICDACADC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IJLICDACADC_DFANHMHJJDJ_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define IJLICDACADC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IJLICDACADC_IGKFAFBGBAP_OFFSET UNITYSDK_OFFSET(0x754970)
#define IJLICDACADC_KGHEKNMMPFM_OFFSET UNITYSDK_OFFSET(0x754D50)
#define IJLICDACADC_MEMCMEKNIFG_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define IJLICDACADC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5DFB70)
#define IJLICDACADC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IJLICDACADC_TypeDefinitionIndex = 15597;

struct alignas(4) IJLICDACADC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLICDACADC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IJLICDACADC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::IJLICDACADC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IJLICDACADC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IJLICDACADC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLICDACADC_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 IGKFAFBGBAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLICDACADC_IGKFAFBGBAP_OFFSET))(this);
	}

	/*
	static ::IJLICDACADC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IJLICDACADC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IJLICDACADC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean DFANHMHJJDJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + IJLICDACADC_DFANHMHJJDJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* MEMCMEKNIFG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLICDACADC_MEMCMEKNIFG_OFFSET))(this);
	}

	::System::Int32 KGHEKNMMPFM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLICDACADC_KGHEKNMMPFM_OFFSET))(this);
	}
};
