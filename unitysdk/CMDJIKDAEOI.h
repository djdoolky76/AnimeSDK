#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CMDJIKDAEOI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CMDJIKDAEOI_CMHPKFKLCGH_OFFSET UNITYSDK_OFFSET(0x754B50)
#define CMDJIKDAEOI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CMDJIKDAEOI_HFGPAPBBAKD_OFFSET UNITYSDK_OFFSET(0x754920)
#define CMDJIKDAEOI_IDPHGGPIHOL_OFFSET UNITYSDK_OFFSET(0x756B90)
#define CMDJIKDAEOI_KAFLMEILNHI_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CMDJIKDAEOI_LOEFMIEHDLD_OFFSET UNITYSDK_OFFSET(0x754F10)
#define CMDJIKDAEOI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x177477C0)
#define CMDJIKDAEOI_PABDENBKKLA_OFFSET UNITYSDK_OFFSET(0x754970)
#define CMDJIKDAEOI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CMDJIKDAEOI_TypeDefinitionIndex = 13703;

struct alignas(4) CMDJIKDAEOI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMDJIKDAEOI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMDJIKDAEOI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PABDENBKKLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMDJIKDAEOI_PABDENBKKLA_OFFSET))(this);
	}

	::System::Int32 HFGPAPBBAKD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMDJIKDAEOI_HFGPAPBBAKD_OFFSET))(this);
	}

	::System::String* LOEFMIEHDLD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMDJIKDAEOI_LOEFMIEHDLD_OFFSET))(this);
	}

	/*
	static ::CMDJIKDAEOI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CMDJIKDAEOI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CMDJIKDAEOI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 IDPHGGPIHOL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMDJIKDAEOI_IDPHGGPIHOL_OFFSET))(this);
	}

	::System::Int32 KAFLMEILNHI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMDJIKDAEOI_KAFLMEILNHI_OFFSET))(this);
	}

	/*
	::CMDJIKDAEOI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CMDJIKDAEOI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMDJIKDAEOI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 CMHPKFKLCGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMDJIKDAEOI_CMHPKFKLCGH_OFFSET))(this);
	}
};
