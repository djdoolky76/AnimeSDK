#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define EPGPIMOAEIA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EPGPIMOAEIA_DIGGIKMCLDN_OFFSET UNITYSDK_OFFSET(0x755790)
#define EPGPIMOAEIA_ECHADKIKBBE_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define EPGPIMOAEIA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EPGPIMOAEIA_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EPGPIMOAEIA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x187B2480)
#define EPGPIMOAEIA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EPGPIMOAEIA_TypeDefinitionIndex = 10509;

struct alignas(4) EPGPIMOAEIA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGPIMOAEIA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EPGPIMOAEIA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGPIMOAEIA_GKBAJJACIEA_OFFSET))(this);
	}

	::System::Int32 DIGGIKMCLDN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGPIMOAEIA_DIGGIKMCLDN_OFFSET))(this);
	}

	::System::Boolean ECHADKIKBBE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EPGPIMOAEIA_ECHADKIKBBE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::EPGPIMOAEIA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EPGPIMOAEIA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EPGPIMOAEIA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::EPGPIMOAEIA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EPGPIMOAEIA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EPGPIMOAEIA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
