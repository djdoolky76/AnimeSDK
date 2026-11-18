#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FOOBOONGLKI_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FOOBOONGLKI_AOMPPODNGCL_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define FOOBOONGLKI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FOOBOONGLKI_BJLBMABDJGG_OFFSET UNITYSDK_OFFSET(0x755E40)
#define FOOBOONGLKI_DJNKNPCCOBP_OFFSET UNITYSDK_OFFSET(0x755D70)
#define FOOBOONGLKI_DMMKMKCPHMF_OFFSET UNITYSDK_OFFSET(0x755C70)
#define FOOBOONGLKI_EPOAAECLBAM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define FOOBOONGLKI_FJOLPGBLBBH_OFFSET UNITYSDK_OFFSET(0x755190)
#define FOOBOONGLKI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FOOBOONGLKI_GPOJDDAFPDL_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define FOOBOONGLKI_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FOOBOONGLKI_IHDAGGKBGPL_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define FOOBOONGLKI_NAHGOLIIIJK_OFFSET UNITYSDK_OFFSET(0x754970)
#define FOOBOONGLKI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FOOBOONGLKI_TypeDefinitionIndex = 15929;

struct alignas(4) FOOBOONGLKI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOBOONGLKI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FOOBOONGLKI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DMMKMKCPHMF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOBOONGLKI_DMMKMKCPHMF_OFFSET))(this);
	}

	::System::Int32 NAHGOLIIIJK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOBOONGLKI_NAHGOLIIIJK_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOBOONGLKI_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 GPOJDDAFPDL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOBOONGLKI_GPOJDDAFPDL_OFFSET))(this);
	}

	::System::Int32 FJOLPGBLBBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOBOONGLKI_FJOLPGBLBBH_OFFSET))(this);
	}

	::System::Int32 EPOAAECLBAM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOBOONGLKI_EPOAAECLBAM_OFFSET))(this);
	}

	::System::Boolean DJNKNPCCOBP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FOOBOONGLKI_DJNKNPCCOBP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 IHDAGGKBGPL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOBOONGLKI_IHDAGGKBGPL_OFFSET))(this);
	}

	/*
	::FOOBOONGLKI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FOOBOONGLKI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FOOBOONGLKI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOBOONGLKI_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 BJLBMABDJGG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOBOONGLKI_BJLBMABDJGG_OFFSET))(this);
	}

	::System::Int32 AOMPPODNGCL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOBOONGLKI_AOMPPODNGCL_OFFSET))(this);
	}
};
