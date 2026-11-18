#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define ONMBKFFAEEO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ONMBKFFAEEO_EIEJFNLNOEL_OFFSET UNITYSDK_OFFSET(0x756B90)
#define ONMBKFFAEEO_GEBMEMOIFIA_OFFSET UNITYSDK_OFFSET(0x756360)
#define ONMBKFFAEEO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ONMBKFFAEEO_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ONMBKFFAEEO_MLAEENCBAJH_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define ONMBKFFAEEO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BF82CD0)
#define ONMBKFFAEEO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ONMBKFFAEEO_TypeDefinitionIndex = 16206;

struct alignas(4) ONMBKFFAEEO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONMBKFFAEEO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONMBKFFAEEO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::ONMBKFFAEEO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ONMBKFFAEEO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ONMBKFFAEEO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONMBKFFAEEO_GKBAJJACIEA_OFFSET))(this);
	}

	/*
	::ONMBKFFAEEO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ONMBKFFAEEO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONMBKFFAEEO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean GEBMEMOIFIA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + ONMBKFFAEEO_GEBMEMOIFIA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 MLAEENCBAJH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONMBKFFAEEO_MLAEENCBAJH_OFFSET))(this);
	}

	::System::Int32 EIEJFNLNOEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONMBKFFAEEO_EIEJFNLNOEL_OFFSET))(this);
	}
};
