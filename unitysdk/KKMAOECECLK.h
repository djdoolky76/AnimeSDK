#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KKMAOECECLK_BEAJMEGBPAP_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KKMAOECECLK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KKMAOECECLK_CCOHDDGJFPK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KKMAOECECLK_DFBIGAOOECL_OFFSET UNITYSDK_OFFSET(0x7E5C60)
#define KKMAOECECLK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KKMAOECECLK_HAIMNJOFNCL_OFFSET UNITYSDK_OFFSET(0x755C70)
#define KKMAOECECLK_JNOFNAJKOBE_OFFSET UNITYSDK_OFFSET(0x754920)
#define KKMAOECECLK_LANJFNGPHLK_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KKMAOECECLK_LGAPHKMPAJP_OFFSET UNITYSDK_OFFSET(0x7563E0)
#define KKMAOECECLK_MGAKDCAJPBJ_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KKMAOECECLK_MHECMOILCOO_OFFSET UNITYSDK_OFFSET(0x754970)
#define KKMAOECECLK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1957F0A0)
#define KKMAOECECLK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KKMAOECECLK_TypeDefinitionIndex = 15173;

struct alignas(4) KKMAOECECLK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMAOECECLK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KKMAOECECLK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HAIMNJOFNCL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMAOECECLK_HAIMNJOFNCL_OFFSET))(this);
	}

	::System::Int32 MGAKDCAJPBJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMAOECECLK_MGAKDCAJPBJ_OFFSET))(this);
	}

	::System::Int32 MHECMOILCOO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMAOECECLK_MHECMOILCOO_OFFSET))(this);
	}

	/*
	static ::KKMAOECECLK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KKMAOECECLK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KKMAOECECLK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::KKMAOECECLK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KKMAOECECLK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KKMAOECECLK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean DFBIGAOOECL(::System::Int32 HPMEONKHFGG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + KKMAOECECLK_DFBIGAOOECL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 BEAJMEGBPAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMAOECECLK_BEAJMEGBPAP_OFFSET))(this);
	}

	::System::Int32 JNOFNAJKOBE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMAOECECLK_JNOFNAJKOBE_OFFSET))(this);
	}

	::System::Int32 LGAPHKMPAJP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMAOECECLK_LGAPHKMPAJP_OFFSET))(this);
	}

	::System::Int32 CCOHDDGJFPK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMAOECECLK_CCOHDDGJFPK_OFFSET))(this);
	}

	::System::Int32 LANJFNGPHLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMAOECECLK_LANJFNGPHLK_OFFSET))(this);
	}
};
