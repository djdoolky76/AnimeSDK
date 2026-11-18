#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JOGDEBNCHAB_AKLNHPCNFLD_OFFSET UNITYSDK_OFFSET(0x754920)
#define JOGDEBNCHAB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JOGDEBNCHAB_CHKLCDFBMLO_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define JOGDEBNCHAB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JOGDEBNCHAB_ICGGGGFAKIN_OFFSET UNITYSDK_OFFSET(0x755C70)
#define JOGDEBNCHAB_IDJOIAFBCDB_OFFSET UNITYSDK_OFFSET(0x7624E0)
#define JOGDEBNCHAB_LMBABJLBCLA_OFFSET UNITYSDK_OFFSET(0x758780)
#define JOGDEBNCHAB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B63A0E0)
#define JOGDEBNCHAB_OGNCEPHHIGI_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define JOGDEBNCHAB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JOGDEBNCHAB_TypeDefinitionIndex = 17581;

struct alignas(4) JOGDEBNCHAB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGDEBNCHAB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JOGDEBNCHAB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean IDJOIAFBCDB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGDEBNCHAB_IDJOIAFBCDB_OFFSET))(this);
	}

	::System::Int32 LMBABJLBCLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGDEBNCHAB_LMBABJLBCLA_OFFSET))(this);
	}

	::System::String* OGNCEPHHIGI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGDEBNCHAB_OGNCEPHHIGI_OFFSET))(this);
	}

	::System::Int32 CHKLCDFBMLO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGDEBNCHAB_CHKLCDFBMLO_OFFSET))(this);
	}

	/*
	static ::JOGDEBNCHAB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JOGDEBNCHAB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JOGDEBNCHAB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 AKLNHPCNFLD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGDEBNCHAB_AKLNHPCNFLD_OFFSET))(this);
	}

	/*
	::JOGDEBNCHAB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JOGDEBNCHAB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JOGDEBNCHAB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ICGGGGFAKIN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGDEBNCHAB_ICGGGGFAKIN_OFFSET))(this);
	}
};
