#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define AKDLDIIOBDI_AIFICEKPKBI_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define AKDLDIIOBDI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AKDLDIIOBDI_FJNDPALNMOG_OFFSET UNITYSDK_OFFSET(0x755E40)
#define AKDLDIIOBDI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AKDLDIIOBDI_MFGOKBAHELE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AKDLDIIOBDI_MJLNDNHBCLK_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define AKDLDIIOBDI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1ADAABD0)
#define AKDLDIIOBDI_OAOGAIJCIGJ_OFFSET UNITYSDK_OFFSET(0x754D50)
#define AKDLDIIOBDI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AKDLDIIOBDI_TypeDefinitionIndex = 15089;

struct alignas(4) AKDLDIIOBDI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDLDIIOBDI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKDLDIIOBDI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::AKDLDIIOBDI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AKDLDIIOBDI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKDLDIIOBDI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean MJLNDNHBCLK(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + AKDLDIIOBDI_MJLNDNHBCLK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 AIFICEKPKBI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDLDIIOBDI_AIFICEKPKBI_OFFSET))(this);
	}

	::System::Int32 FJNDPALNMOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDLDIIOBDI_FJNDPALNMOG_OFFSET))(this);
	}

	/*
	static ::AKDLDIIOBDI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::AKDLDIIOBDI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + AKDLDIIOBDI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 OAOGAIJCIGJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDLDIIOBDI_OAOGAIJCIGJ_OFFSET))(this);
	}

	::System::Int32 MFGOKBAHELE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDLDIIOBDI_MFGOKBAHELE_OFFSET))(this);
	}
};
