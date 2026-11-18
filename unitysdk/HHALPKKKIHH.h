#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HHALPKKKIHH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HHALPKKKIHH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HHALPKKKIHH_ELDFEFKEEBJ_OFFSET UNITYSDK_OFFSET(0x758200)
#define HHALPKKKIHH_ELHEPACLHBE_OFFSET UNITYSDK_OFFSET(0x7563E0)
#define HHALPKKKIHH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HHALPKKKIHH_GKKEEOMPEGE_OFFSET UNITYSDK_OFFSET(0x755190)
#define HHALPKKKIHH_HGODFCFGNDA_OFFSET UNITYSDK_OFFSET(0x758320)
#define HHALPKKKIHH_ICKIFIAJBBO_OFFSET UNITYSDK_OFFSET(0x754970)
#define HHALPKKKIHH_MDLLGIMAGCP_OFFSET UNITYSDK_OFFSET(0x755D20)
#define HHALPKKKIHH_NABGEHFIEBM_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define HHALPKKKIHH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17C00C40)
#define HHALPKKKIHH_PFNMPKNIEOM_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define HHALPKKKIHH_PKNJKCHHMJD_OFFSET UNITYSDK_OFFSET(0x756780)
#define HHALPKKKIHH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HHALPKKKIHH_TypeDefinitionIndex = 13550;

struct alignas(4) HHALPKKKIHH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHALPKKKIHH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHALPKKKIHH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GKKEEOMPEGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHALPKKKIHH_GKKEEOMPEGE_OFFSET))(this);
	}

	::System::Int32 NABGEHFIEBM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHALPKKKIHH_NABGEHFIEBM_OFFSET))(this);
	}

	::System::Boolean ELDFEFKEEBJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HHALPKKKIHH_ELDFEFKEEBJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean PKNJKCHHMJD(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HHALPKKKIHH_PKNJKCHHMJD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::HHALPKKKIHH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HHALPKKKIHH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HHALPKKKIHH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHALPKKKIHH_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 ICKIFIAJBBO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHALPKKKIHH_ICKIFIAJBBO_OFFSET))(this);
	}

	::System::Int32 PFNMPKNIEOM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHALPKKKIHH_PFNMPKNIEOM_OFFSET))(this);
	}

	/*
	::HHALPKKKIHH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HHALPKKKIHH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHALPKKKIHH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* HGODFCFGNDA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHALPKKKIHH_HGODFCFGNDA_OFFSET))(this);
	}

	::System::Int32 MDLLGIMAGCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHALPKKKIHH_MDLLGIMAGCP_OFFSET))(this);
	}

	::System::Int32 ELHEPACLHBE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHALPKKKIHH_ELHEPACLHBE_OFFSET))(this);
	}
};
