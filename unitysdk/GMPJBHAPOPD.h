#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GMPJBHAPOPD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GMPJBHAPOPD_DMBJKPJFMIB_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define GMPJBHAPOPD_DOOJMMEAPCO_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define GMPJBHAPOPD_EIAPDFNIBJP_OFFSET UNITYSDK_OFFSET(0x754D50)
#define GMPJBHAPOPD_EMPHBEDDOOB_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define GMPJBHAPOPD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GMPJBHAPOPD_HCHFOKNKPIB_OFFSET UNITYSDK_OFFSET(0x756B90)
#define GMPJBHAPOPD_KGKNKMDMNIO_OFFSET UNITYSDK_OFFSET(0x756D50)
#define GMPJBHAPOPD_MKOEIFAHBIM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GMPJBHAPOPD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A4DE620)
#define GMPJBHAPOPD_PBCCLKPFFFG_OFFSET UNITYSDK_OFFSET(0x756B10)
#define GMPJBHAPOPD_PKMPEPEHCDN_OFFSET UNITYSDK_OFFSET(0x758200)
#define GMPJBHAPOPD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GMPJBHAPOPD_TypeDefinitionIndex = 12546;

struct alignas(4) GMPJBHAPOPD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPJBHAPOPD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GMPJBHAPOPD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DMBJKPJFMIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPJBHAPOPD_DMBJKPJFMIB_OFFSET))(this);
	}

	::System::String* EMPHBEDDOOB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPJBHAPOPD_EMPHBEDDOOB_OFFSET))(this);
	}

	::System::Int32 MKOEIFAHBIM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPJBHAPOPD_MKOEIFAHBIM_OFFSET))(this);
	}

	::System::Boolean DOOJMMEAPCO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GMPJBHAPOPD_DOOJMMEAPCO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* PBCCLKPFFFG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPJBHAPOPD_PBCCLKPFFFG_OFFSET))(this);
	}

	::System::String* KGKNKMDMNIO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPJBHAPOPD_KGKNKMDMNIO_OFFSET))(this);
	}

	/*
	static ::GMPJBHAPOPD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GMPJBHAPOPD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GMPJBHAPOPD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::GMPJBHAPOPD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GMPJBHAPOPD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GMPJBHAPOPD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 HCHFOKNKPIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPJBHAPOPD_HCHFOKNKPIB_OFFSET))(this);
	}

	::System::Boolean PKMPEPEHCDN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GMPJBHAPOPD_PKMPEPEHCDN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 EIAPDFNIBJP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPJBHAPOPD_EIAPDFNIBJP_OFFSET))(this);
	}
};
