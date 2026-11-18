#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GLKGDBCMOBA_AGMIHJHJGPM_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define GLKGDBCMOBA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GLKGDBCMOBA_COAEEDCMCAH_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define GLKGDBCMOBA_DIDMBFLIJFM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GLKGDBCMOBA_EHIEGLGGKNH_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define GLKGDBCMOBA_FMBFODPBCAC_OFFSET UNITYSDK_OFFSET(0x761240)
#define GLKGDBCMOBA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GLKGDBCMOBA_JEAHNHLKKLN_OFFSET UNITYSDK_OFFSET(0x757330)
#define GLKGDBCMOBA_JPFFGIJHGGH_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define GLKGDBCMOBA_MBIDLGODNMA_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define GLKGDBCMOBA_MHGNLKEAGDJ_OFFSET UNITYSDK_OFFSET(0x763920)
#define GLKGDBCMOBA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5C34B0)
#define GLKGDBCMOBA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GLKGDBCMOBA_TypeDefinitionIndex = 14563;

struct alignas(4) GLKGDBCMOBA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLKGDBCMOBA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLKGDBCMOBA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* AGMIHJHJGPM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLKGDBCMOBA_AGMIHJHJGPM_OFFSET))(this);
	}

	::System::Boolean MHGNLKEAGDJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GLKGDBCMOBA_MHGNLKEAGDJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 EHIEGLGGKNH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLKGDBCMOBA_EHIEGLGGKNH_OFFSET))(this);
	}

	::System::Int32 DIDMBFLIJFM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLKGDBCMOBA_DIDMBFLIJFM_OFFSET))(this);
	}

	::System::Boolean COAEEDCMCAH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GLKGDBCMOBA_COAEEDCMCAH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 FMBFODPBCAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLKGDBCMOBA_FMBFODPBCAC_OFFSET))(this);
	}

	/*
	static ::GLKGDBCMOBA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GLKGDBCMOBA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GLKGDBCMOBA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* JPFFGIJHGGH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLKGDBCMOBA_JPFFGIJHGGH_OFFSET))(this);
	}

	::System::String* MBIDLGODNMA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLKGDBCMOBA_MBIDLGODNMA_OFFSET))(this);
	}

	/*
	::GLKGDBCMOBA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GLKGDBCMOBA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLKGDBCMOBA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 JEAHNHLKKLN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLKGDBCMOBA_JEAHNHLKKLN_OFFSET))(this);
	}
};
