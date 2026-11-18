#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EDOKEDCMGEI_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EDOKEDCMGEI_AKHEMJGBCPM_OFFSET UNITYSDK_OFFSET(0x755320)
#define EDOKEDCMGEI_BFFJBLBDEIB_OFFSET UNITYSDK_OFFSET(0x7561C0)
#define EDOKEDCMGEI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EDOKEDCMGEI_DIFMMKMJLKJ_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define EDOKEDCMGEI_DJPNDLFPNAE_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define EDOKEDCMGEI_DNKOABNPPAH_OFFSET UNITYSDK_OFFSET(0x756140)
#define EDOKEDCMGEI_FELDILHMMIK_OFFSET UNITYSDK_OFFSET(0x754F10)
#define EDOKEDCMGEI_FNJIKDMPMEN_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define EDOKEDCMGEI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EDOKEDCMGEI_KMJLFFINJII_OFFSET UNITYSDK_OFFSET(0x755890)
#define EDOKEDCMGEI_LGHICGGNCGJ_OFFSET UNITYSDK_OFFSET(0x755440)
#define EDOKEDCMGEI_MCCPKCIMFEC_OFFSET UNITYSDK_OFFSET(0x755190)
#define EDOKEDCMGEI_NFDDMGBFGNI_OFFSET UNITYSDK_OFFSET(0x758780)
#define EDOKEDCMGEI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19AE21E0)
#define EDOKEDCMGEI_OCOCEPOCOLA_OFFSET UNITYSDK_OFFSET(0x756B90)
#define EDOKEDCMGEI_OPMNNJDCJGK_OFFSET UNITYSDK_OFFSET(0x762C60)
#define EDOKEDCMGEI_PCMDCPBLHFK_OFFSET UNITYSDK_OFFSET(0x755E40)
#define EDOKEDCMGEI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EDOKEDCMGEI_TypeDefinitionIndex = 11195;

struct alignas(4) EDOKEDCMGEI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDOKEDCMGEI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EDOKEDCMGEI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LGHICGGNCGJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDOKEDCMGEI_LGHICGGNCGJ_OFFSET))(this);
	}

	::System::Boolean DNKOABNPPAH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EDOKEDCMGEI_DNKOABNPPAH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDOKEDCMGEI_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 KMJLFFINJII()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDOKEDCMGEI_KMJLFFINJII_OFFSET))(this);
	}

	::System::String* FELDILHMMIK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDOKEDCMGEI_FELDILHMMIK_OFFSET))(this);
	}

	/*
	static ::EDOKEDCMGEI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EDOKEDCMGEI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EDOKEDCMGEI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 BFFJBLBDEIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDOKEDCMGEI_BFFJBLBDEIB_OFFSET))(this);
	}

	::System::Int32 AKHEMJGBCPM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDOKEDCMGEI_AKHEMJGBCPM_OFFSET))(this);
	}

	::System::Int32 DJPNDLFPNAE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDOKEDCMGEI_DJPNDLFPNAE_OFFSET))(this);
	}

	/*
	::EDOKEDCMGEI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EDOKEDCMGEI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EDOKEDCMGEI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean OPMNNJDCJGK(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + EDOKEDCMGEI_OPMNNJDCJGK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 MCCPKCIMFEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDOKEDCMGEI_MCCPKCIMFEC_OFFSET))(this);
	}

	::System::Int32 NFDDMGBFGNI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDOKEDCMGEI_NFDDMGBFGNI_OFFSET))(this);
	}

	::System::String* FNJIKDMPMEN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDOKEDCMGEI_FNJIKDMPMEN_OFFSET))(this);
	}

	::System::Int32 PCMDCPBLHFK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDOKEDCMGEI_PCMDCPBLHFK_OFFSET))(this);
	}

	::System::Int32 OCOCEPOCOLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDOKEDCMGEI_OCOCEPOCOLA_OFFSET))(this);
	}

	::System::Int32 DIFMMKMJLKJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDOKEDCMGEI_DIFMMKMJLKJ_OFFSET))(this);
	}
};
