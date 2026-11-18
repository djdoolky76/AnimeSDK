#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EGMFMFHJBCM_AHJMEMHANHH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define EGMFMFHJBCM_BBKGGJDNOFI_OFFSET UNITYSDK_OFFSET(0x758780)
#define EGMFMFHJBCM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EGMFMFHJBCM_FNBOALOOFEL_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define EGMFMFHJBCM_GCOKBEGLJAJ_OFFSET UNITYSDK_OFFSET(0x7AC220)
#define EGMFMFHJBCM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EGMFMFHJBCM_JBOIMNAPIKG_OFFSET UNITYSDK_OFFSET(0x755D20)
#define EGMFMFHJBCM_KINKHOPMBPP_OFFSET UNITYSDK_OFFSET(0x755C70)
#define EGMFMFHJBCM_LMDMNKPMOBO_OFFSET UNITYSDK_OFFSET(0x754C20)
#define EGMFMFHJBCM_MKHMCGGNGPL_OFFSET UNITYSDK_OFFSET(0x755790)
#define EGMFMFHJBCM_MLKFNKGDBPN_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EGMFMFHJBCM_NFDDMGBFGNI_OFFSET UNITYSDK_OFFSET(0x754970)
#define EGMFMFHJBCM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EGMFMFHJBCM_TypeDefinitionIndex = 11503;

struct alignas(4) EGMFMFHJBCM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMFMFHJBCM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EGMFMFHJBCM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NFDDMGBFGNI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMFMFHJBCM_NFDDMGBFGNI_OFFSET))(this);
	}

	::System::Int32 MLKFNKGDBPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMFMFHJBCM_MLKFNKGDBPN_OFFSET))(this);
	}

	::System::Boolean FNBOALOOFEL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EGMFMFHJBCM_FNBOALOOFEL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 MKHMCGGNGPL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMFMFHJBCM_MKHMCGGNGPL_OFFSET))(this);
	}

	::System::String* AHJMEMHANHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMFMFHJBCM_AHJMEMHANHH_OFFSET))(this);
	}

	::System::Int32 JBOIMNAPIKG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMFMFHJBCM_JBOIMNAPIKG_OFFSET))(this);
	}

	::System::Int32 KINKHOPMBPP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMFMFHJBCM_KINKHOPMBPP_OFFSET))(this);
	}

	/*
	::EGMFMFHJBCM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EGMFMFHJBCM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EGMFMFHJBCM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BBKGGJDNOFI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMFMFHJBCM_BBKGGJDNOFI_OFFSET))(this);
	}

	::System::Int32 LMDMNKPMOBO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMFMFHJBCM_LMDMNKPMOBO_OFFSET))(this);
	}

	::System::Boolean GCOKBEGLJAJ(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + EGMFMFHJBCM_GCOKBEGLJAJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
