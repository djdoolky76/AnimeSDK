#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OEPGEIMNDKC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OEPGEIMNDKC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OEPGEIMNDKC_EMOACCCKGNN_OFFSET UNITYSDK_OFFSET(0x755A00)
#define OEPGEIMNDKC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OEPGEIMNDKC_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754920)
#define OEPGEIMNDKC_MGPGOBJJMIA_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define OEPGEIMNDKC_OIEHCDHMEKD_OFFSET UNITYSDK_OFFSET(0x754970)
#define OEPGEIMNDKC_PLMMMHHCPPJ_OFFSET UNITYSDK_OFFSET(0x754F10)
#define OEPGEIMNDKC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OEPGEIMNDKC_TypeDefinitionIndex = 10719;

struct alignas(4) OEPGEIMNDKC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPGEIMNDKC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OEPGEIMNDKC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* PLMMMHHCPPJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPGEIMNDKC_PLMMMHHCPPJ_OFFSET))(this);
	}

	::System::String* EMOACCCKGNN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPGEIMNDKC_EMOACCCKGNN_OFFSET))(this);
	}

	/*
	::OEPGEIMNDKC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OEPGEIMNDKC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OEPGEIMNDKC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPGEIMNDKC_GKBAJJACIEA_OFFSET))(this);
	}

	::System::Int32 OIEHCDHMEKD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPGEIMNDKC_OIEHCDHMEKD_OFFSET))(this);
	}

	::System::String* MGPGOBJJMIA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPGEIMNDKC_MGPGOBJJMIA_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPGEIMNDKC_ACOEONABOJL_OFFSET))(this);
	}
};
