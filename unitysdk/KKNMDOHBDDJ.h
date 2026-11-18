#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KKNMDOHBDDJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KKNMDOHBDDJ_CCIGLAPLMAM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KKNMDOHBDDJ_DLELFJCPHNI_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KKNMDOHBDDJ_FMGKEKJPPDM_OFFSET UNITYSDK_OFFSET(0x756720)
#define KKNMDOHBDDJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KKNMDOHBDDJ_GOLHPDBAMMB_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KKNMDOHBDDJ_IPLACEIOFOK_OFFSET UNITYSDK_OFFSET(0x754920)
#define KKNMDOHBDDJ_MMLBFOANOEP_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define KKNMDOHBDDJ_NKGBDDPDPEP_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KKNMDOHBDDJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18DE9D70)
#define KKNMDOHBDDJ_OOBLBLJPJEJ_OFFSET UNITYSDK_OFFSET(0x77A420)
#define KKNMDOHBDDJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KKNMDOHBDDJ_TypeDefinitionIndex = 10272;

struct alignas(4) KKNMDOHBDDJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNMDOHBDDJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KKNMDOHBDDJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KKNMDOHBDDJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KKNMDOHBDDJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KKNMDOHBDDJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* MMLBFOANOEP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNMDOHBDDJ_MMLBFOANOEP_OFFSET))(this);
	}

	::System::Int32 GOLHPDBAMMB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNMDOHBDDJ_GOLHPDBAMMB_OFFSET))(this);
	}

	::System::Int32 CCIGLAPLMAM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNMDOHBDDJ_CCIGLAPLMAM_OFFSET))(this);
	}

	::System::Int32 DLELFJCPHNI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNMDOHBDDJ_DLELFJCPHNI_OFFSET))(this);
	}

	::System::Int32 IPLACEIOFOK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNMDOHBDDJ_IPLACEIOFOK_OFFSET))(this);
	}

	/*
	::KKNMDOHBDDJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KKNMDOHBDDJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KKNMDOHBDDJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FMGKEKJPPDM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNMDOHBDDJ_FMGKEKJPPDM_OFFSET))(this);
	}

	::System::Int32 NKGBDDPDPEP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNMDOHBDDJ_NKGBDDPDPEP_OFFSET))(this);
	}

	::System::Boolean OOBLBLJPJEJ(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + KKNMDOHBDDJ_OOBLBLJPJEJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
