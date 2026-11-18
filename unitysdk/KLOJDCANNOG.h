#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KLOJDCANNOG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KLOJDCANNOG_EHIMDAKEEID_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define KLOJDCANNOG_EIPONBMJLNE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KLOJDCANNOG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KLOJDCANNOG_MLKFNKGDBPN_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KLOJDCANNOG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1936FAC0)
#define KLOJDCANNOG_OGMAKCDKMDJ_OFFSET UNITYSDK_OFFSET(0x756B10)
#define KLOJDCANNOG_OGMCCDCMGLH_OFFSET UNITYSDK_OFFSET(0x754C20)
#define KLOJDCANNOG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KLOJDCANNOG_TypeDefinitionIndex = 9284;

struct alignas(4) KLOJDCANNOG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLOJDCANNOG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLOJDCANNOG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean EHIMDAKEEID(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KLOJDCANNOG_EHIMDAKEEID_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* OGMAKCDKMDJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLOJDCANNOG_OGMAKCDKMDJ_OFFSET))(this);
	}

	/*
	static ::KLOJDCANNOG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KLOJDCANNOG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KLOJDCANNOG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 MLKFNKGDBPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLOJDCANNOG_MLKFNKGDBPN_OFFSET))(this);
	}

	::System::Int32 OGMCCDCMGLH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLOJDCANNOG_OGMCCDCMGLH_OFFSET))(this);
	}

	/*
	::KLOJDCANNOG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KLOJDCANNOG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLOJDCANNOG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 EIPONBMJLNE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLOJDCANNOG_EIPONBMJLNE_OFFSET))(this);
	}
};
