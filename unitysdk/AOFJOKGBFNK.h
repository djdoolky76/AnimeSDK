#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define AOFJOKGBFNK_APNIALKKCEO_OFFSET UNITYSDK_OFFSET(0x754970)
#define AOFJOKGBFNK_BHDJIPCEOLG_OFFSET UNITYSDK_OFFSET(0x754920)
#define AOFJOKGBFNK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AOFJOKGBFNK_BIFKKEGOKMD_OFFSET UNITYSDK_OFFSET(0x756B90)
#define AOFJOKGBFNK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AOFJOKGBFNK_GFAECDLOCOL_OFFSET UNITYSDK_OFFSET(0x7562E0)
#define AOFJOKGBFNK_IAKKDOHBPHL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AOFJOKGBFNK_LPNKLBDJAGL_OFFSET UNITYSDK_OFFSET(0x756720)
#define AOFJOKGBFNK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C50DE00)
#define AOFJOKGBFNK_OHMPOJEAPAO_OFFSET UNITYSDK_OFFSET(0x755D20)
#define AOFJOKGBFNK_PCJKMEBCKFI_OFFSET UNITYSDK_OFFSET(0x754B50)
#define AOFJOKGBFNK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AOFJOKGBFNK_TypeDefinitionIndex = 16498;

struct alignas(4) AOFJOKGBFNK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFJOKGBFNK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AOFJOKGBFNK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 APNIALKKCEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFJOKGBFNK_APNIALKKCEO_OFFSET))(this);
	}

	::System::Int32 BIFKKEGOKMD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFJOKGBFNK_BIFKKEGOKMD_OFFSET))(this);
	}

	::System::Int32 LPNKLBDJAGL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFJOKGBFNK_LPNKLBDJAGL_OFFSET))(this);
	}

	/*
	::AOFJOKGBFNK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AOFJOKGBFNK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AOFJOKGBFNK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 OHMPOJEAPAO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFJOKGBFNK_OHMPOJEAPAO_OFFSET))(this);
	}

	::System::Int32 IAKKDOHBPHL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFJOKGBFNK_IAKKDOHBPHL_OFFSET))(this);
	}

	/*
	static ::AOFJOKGBFNK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::AOFJOKGBFNK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + AOFJOKGBFNK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 BHDJIPCEOLG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFJOKGBFNK_BHDJIPCEOLG_OFFSET))(this);
	}

	::System::Boolean GFAECDLOCOL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + AOFJOKGBFNK_GFAECDLOCOL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 PCJKMEBCKFI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFJOKGBFNK_PCJKMEBCKFI_OFFSET))(this);
	}
};
