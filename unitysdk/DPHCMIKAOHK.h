#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DPHCMIKAOHK_AFEABGKAMIA_OFFSET UNITYSDK_OFFSET(0x788ED0)
#define DPHCMIKAOHK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DPHCMIKAOHK_CDLHDGOMGOA_OFFSET UNITYSDK_OFFSET(0x788E50)
#define DPHCMIKAOHK_EJNGDDKFFED_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DPHCMIKAOHK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DPHCMIKAOHK_HOADENICIHF_OFFSET UNITYSDK_OFFSET(0x788F30)
#define DPHCMIKAOHK_LINNNHEDGMP_OFFSET UNITYSDK_OFFSET(0x757290)
#define DPHCMIKAOHK_LKOJIKEDMOI_OFFSET UNITYSDK_OFFSET(0x788FB0)
#define DPHCMIKAOHK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1661FD10)
#define DPHCMIKAOHK_OOFFEDMDIGF_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define DPHCMIKAOHK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DPHCMIKAOHK_TypeDefinitionIndex = 16621;

struct alignas(4) DPHCMIKAOHK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHCMIKAOHK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPHCMIKAOHK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DPHCMIKAOHK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DPHCMIKAOHK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DPHCMIKAOHK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean CDLHDGOMGOA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + DPHCMIKAOHK_CDLHDGOMGOA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 AFEABGKAMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHCMIKAOHK_AFEABGKAMIA_OFFSET))(this);
	}

	::System::String* OOFFEDMDIGF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHCMIKAOHK_OOFFEDMDIGF_OFFSET))(this);
	}

	::System::String* LINNNHEDGMP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHCMIKAOHK_LINNNHEDGMP_OFFSET))(this);
	}

	/*
	::DPHCMIKAOHK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DPHCMIKAOHK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPHCMIKAOHK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean HOADENICIHF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + DPHCMIKAOHK_HOADENICIHF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 EJNGDDKFFED()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHCMIKAOHK_EJNGDDKFFED_OFFSET))(this);
	}

	::System::Int32 LKOJIKEDMOI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHCMIKAOHK_LKOJIKEDMOI_OFFSET))(this);
	}
};
