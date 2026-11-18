#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define PEPDJMGBPML_AMJKMAMFHMP_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define PEPDJMGBPML_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PEPDJMGBPML_EANAINDBMNP_OFFSET UNITYSDK_OFFSET(0x761240)
#define PEPDJMGBPML_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PEPDJMGBPML_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PEPDJMGBPML_MCKGLEMILEG_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define PEPDJMGBPML_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C0AC280)
#define PEPDJMGBPML_PHBLDAHBJKC_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define PEPDJMGBPML___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PEPDJMGBPML_TypeDefinitionIndex = 10225;

struct alignas(4) PEPDJMGBPML
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPDJMGBPML_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PEPDJMGBPML___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean PHBLDAHBJKC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PEPDJMGBPML_PHBLDAHBJKC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean MCKGLEMILEG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PEPDJMGBPML_MCKGLEMILEG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 AMJKMAMFHMP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPDJMGBPML_AMJKMAMFHMP_OFFSET))(this);
	}

	::System::Int32 EANAINDBMNP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPDJMGBPML_EANAINDBMNP_OFFSET))(this);
	}

	/*
	::PEPDJMGBPML BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PEPDJMGBPML(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PEPDJMGBPML_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPDJMGBPML_GKBAJJACIEA_OFFSET))(this);
	}

	/*
	static ::PEPDJMGBPML OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PEPDJMGBPML(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PEPDJMGBPML_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
