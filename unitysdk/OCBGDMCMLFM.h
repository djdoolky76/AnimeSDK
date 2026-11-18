#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OCBGDMCMLFM_AEPDBLAHGNG_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define OCBGDMCMLFM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OCBGDMCMLFM_CHGNDIPLEKH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OCBGDMCMLFM_EGENCIKNBEB_OFFSET UNITYSDK_OFFSET(0x757190)
#define OCBGDMCMLFM_GAFNDHIKKHC_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define OCBGDMCMLFM_GDINGLBGCNM_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define OCBGDMCMLFM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OCBGDMCMLFM_JKFNFLFLABJ_OFFSET UNITYSDK_OFFSET(0x757290)
#define OCBGDMCMLFM_JLLHJLGGBAK_OFFSET UNITYSDK_OFFSET(0x755190)
#define OCBGDMCMLFM_MCNOGIKIHCK_OFFSET UNITYSDK_OFFSET(0x755790)
#define OCBGDMCMLFM_NDJHAEENIEM_OFFSET UNITYSDK_OFFSET(0x762B30)
#define OCBGDMCMLFM_OGBGHNADBDO_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define OCBGDMCMLFM_PBIKDDIDDGI_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define OCBGDMCMLFM_PFNFCPIAJII_OFFSET UNITYSDK_OFFSET(0x7588B0)
#define OCBGDMCMLFM_POGHIDINMJN_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define OCBGDMCMLFM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OCBGDMCMLFM_TypeDefinitionIndex = 14143;

struct alignas(4) OCBGDMCMLFM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBGDMCMLFM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OCBGDMCMLFM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MCNOGIKIHCK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBGDMCMLFM_MCNOGIKIHCK_OFFSET))(this);
	}

	::System::Int32 GAFNDHIKKHC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBGDMCMLFM_GAFNDHIKKHC_OFFSET))(this);
	}

	::System::String* AEPDBLAHGNG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBGDMCMLFM_AEPDBLAHGNG_OFFSET))(this);
	}

	::System::Int32 JLLHJLGGBAK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBGDMCMLFM_JLLHJLGGBAK_OFFSET))(this);
	}

	/*
	::OCBGDMCMLFM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OCBGDMCMLFM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OCBGDMCMLFM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* POGHIDINMJN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBGDMCMLFM_POGHIDINMJN_OFFSET))(this);
	}

	::System::Boolean NDJHAEENIEM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBGDMCMLFM_NDJHAEENIEM_OFFSET))(this);
	}

	::System::Int32 PBIKDDIDDGI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBGDMCMLFM_PBIKDDIDDGI_OFFSET))(this);
	}

	::System::Int32 CHGNDIPLEKH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBGDMCMLFM_CHGNDIPLEKH_OFFSET))(this);
	}

	::System::Boolean PFNFCPIAJII(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + OCBGDMCMLFM_PFNFCPIAJII_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean OGBGHNADBDO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OCBGDMCMLFM_OGBGHNADBDO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* GDINGLBGCNM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBGDMCMLFM_GDINGLBGCNM_OFFSET))(this);
	}

	::System::String* EGENCIKNBEB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBGDMCMLFM_EGENCIKNBEB_OFFSET))(this);
	}

	::System::String* JKFNFLFLABJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBGDMCMLFM_JKFNFLFLABJ_OFFSET))(this);
	}
};
