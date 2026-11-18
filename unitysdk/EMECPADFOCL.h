#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HNFADNMADCK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EMECPADFOCL_AHAMLDMDEDD_OFFSET UNITYSDK_OFFSET(0x7635E0)
#define EMECPADFOCL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EMECPADFOCL_EBGBOIKFOAM_OFFSET UNITYSDK_OFFSET(0x757290)
#define EMECPADFOCL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EMECPADFOCL_HPFHJPGMBIH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EMECPADFOCL_MLFPPOEPCGJ_OFFSET UNITYSDK_OFFSET(0x755790)
#define EMECPADFOCL_NKHPLKJMEJO_OFFSET UNITYSDK_OFFSET(0x755A00)
#define EMECPADFOCL_NOHMKCBKAEG_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define EMECPADFOCL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1ADD8990)
#define EMECPADFOCL_OJBLICFJKDK_OFFSET UNITYSDK_OFFSET(0x757210)
#define EMECPADFOCL_POAFNGLHNEJ_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define EMECPADFOCL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EMECPADFOCL_TypeDefinitionIndex = 13578;

struct alignas(4) EMECPADFOCL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMECPADFOCL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMECPADFOCL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* POAFNGLHNEJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMECPADFOCL_POAFNGLHNEJ_OFFSET))(this);
	}

	::System::Boolean OJBLICFJKDK(::System::Int32 HPMEONKHFGG, ::HNFADNMADCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNFADNMADCK&))((::PBYTE)hIl2Cpp + EMECPADFOCL_OJBLICFJKDK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NOHMKCBKAEG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMECPADFOCL_NOHMKCBKAEG_OFFSET))(this);
	}

	::System::Boolean AHAMLDMDEDD(::System::Int32 HPMEONKHFGG, ::HNFADNMADCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNFADNMADCK&))((::PBYTE)hIl2Cpp + EMECPADFOCL_AHAMLDMDEDD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* EBGBOIKFOAM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMECPADFOCL_EBGBOIKFOAM_OFFSET))(this);
	}

	/*
	static ::EMECPADFOCL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EMECPADFOCL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EMECPADFOCL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 HPFHJPGMBIH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMECPADFOCL_HPFHJPGMBIH_OFFSET))(this);
	}

	::System::String* NKHPLKJMEJO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMECPADFOCL_NKHPLKJMEJO_OFFSET))(this);
	}

	::System::Int32 MLFPPOEPCGJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMECPADFOCL_MLFPPOEPCGJ_OFFSET))(this);
	}

	/*
	::EMECPADFOCL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EMECPADFOCL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMECPADFOCL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
