#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KMLNLEBALLI_AFDHHLHIKEF_OFFSET UNITYSDK_OFFSET(0x757290)
#define KMLNLEBALLI_BAJAKPANMBP_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define KMLNLEBALLI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KMLNLEBALLI_CGPEGJLLAEP_OFFSET UNITYSDK_OFFSET(0x755A00)
#define KMLNLEBALLI_ECELBKAEMNP_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define KMLNLEBALLI_ECMOKLDNKLF_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define KMLNLEBALLI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KMLNLEBALLI_HKBODAHDAEI_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KMLNLEBALLI_IAPODMPPKDH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define KMLNLEBALLI_LOGJCGMGILM_OFFSET UNITYSDK_OFFSET(0x756B10)
#define KMLNLEBALLI_MIOMFLMKFHI_OFFSET UNITYSDK_OFFSET(0x757190)
#define KMLNLEBALLI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B50C950)
#define KMLNLEBALLI_OBBKNNMBAEH_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define KMLNLEBALLI_OBLAACAANAD_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define KMLNLEBALLI_PMMAEHCEENC_OFFSET UNITYSDK_OFFSET(0x756D50)
#define KMLNLEBALLI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KMLNLEBALLI_TypeDefinitionIndex = 12203;

struct alignas(4) KMLNLEBALLI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLNLEBALLI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KMLNLEBALLI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KMLNLEBALLI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KMLNLEBALLI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KMLNLEBALLI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* CGPEGJLLAEP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLNLEBALLI_CGPEGJLLAEP_OFFSET))(this);
	}

	::System::String* ECMOKLDNKLF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLNLEBALLI_ECMOKLDNKLF_OFFSET))(this);
	}

	::System::String* ECELBKAEMNP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLNLEBALLI_ECELBKAEMNP_OFFSET))(this);
	}

	::System::Int32 HKBODAHDAEI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLNLEBALLI_HKBODAHDAEI_OFFSET))(this);
	}

	::System::String* OBLAACAANAD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLNLEBALLI_OBLAACAANAD_OFFSET))(this);
	}

	::System::String* OBBKNNMBAEH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLNLEBALLI_OBBKNNMBAEH_OFFSET))(this);
	}

	::System::String* LOGJCGMGILM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLNLEBALLI_LOGJCGMGILM_OFFSET))(this);
	}

	/*
	::KMLNLEBALLI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KMLNLEBALLI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KMLNLEBALLI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* MIOMFLMKFHI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLNLEBALLI_MIOMFLMKFHI_OFFSET))(this);
	}

	::System::String* AFDHHLHIKEF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLNLEBALLI_AFDHHLHIKEF_OFFSET))(this);
	}

	::System::String* PMMAEHCEENC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLNLEBALLI_PMMAEHCEENC_OFFSET))(this);
	}

	::System::String* IAPODMPPKDH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLNLEBALLI_IAPODMPPKDH_OFFSET))(this);
	}

	::System::String* BAJAKPANMBP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLNLEBALLI_BAJAKPANMBP_OFFSET))(this);
	}
};
