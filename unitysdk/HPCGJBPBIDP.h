#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HPCGJBPBIDP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HPCGJBPBIDP_AEHHBMMDJAO_OFFSET UNITYSDK_OFFSET(0x755C70)
#define HPCGJBPBIDP_BDELBLJEJPB_OFFSET UNITYSDK_OFFSET(0x756B10)
#define HPCGJBPBIDP_BGFIDBDJLAJ_OFFSET UNITYSDK_OFFSET(0x77A420)
#define HPCGJBPBIDP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HPCGJBPBIDP_CPFHMEDFKGM_OFFSET UNITYSDK_OFFSET(0x757C60)
#define HPCGJBPBIDP_FBIEIJGPCOE_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define HPCGJBPBIDP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HPCGJBPBIDP_IDACDBJBJEH_OFFSET UNITYSDK_OFFSET(0x755D20)
#define HPCGJBPBIDP_JKOFBNDJBBI_OFFSET UNITYSDK_OFFSET(0x756720)
#define HPCGJBPBIDP_MLBLHAFPBHE_OFFSET UNITYSDK_OFFSET(0x754B50)
#define HPCGJBPBIDP_OKMNEIECPOD_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define HPCGJBPBIDP_PFNEMFAIMIN_OFFSET UNITYSDK_OFFSET(0x756B90)
#define HPCGJBPBIDP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HPCGJBPBIDP_TypeDefinitionIndex = 10997;

struct alignas(4) HPCGJBPBIDP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCGJBPBIDP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPCGJBPBIDP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean CPFHMEDFKGM(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + HPCGJBPBIDP_CPFHMEDFKGM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 IDACDBJBJEH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCGJBPBIDP_IDACDBJBJEH_OFFSET))(this);
	}

	::System::String* BDELBLJEJPB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCGJBPBIDP_BDELBLJEJPB_OFFSET))(this);
	}

	::System::Int32 FBIEIJGPCOE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCGJBPBIDP_FBIEIJGPCOE_OFFSET))(this);
	}

	::System::Int32 AEHHBMMDJAO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCGJBPBIDP_AEHHBMMDJAO_OFFSET))(this);
	}

	::System::Int32 JKOFBNDJBBI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCGJBPBIDP_JKOFBNDJBBI_OFFSET))(this);
	}

	::System::Boolean BGFIDBDJLAJ(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + HPCGJBPBIDP_BGFIDBDJLAJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::HPCGJBPBIDP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HPCGJBPBIDP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPCGJBPBIDP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCGJBPBIDP_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 MLBLHAFPBHE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCGJBPBIDP_MLBLHAFPBHE_OFFSET))(this);
	}

	::System::Int32 PFNEMFAIMIN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCGJBPBIDP_PFNEMFAIMIN_OFFSET))(this);
	}

	::System::Int32 OKMNEIECPOD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCGJBPBIDP_OKMNEIECPOD_OFFSET))(this);
	}
};
