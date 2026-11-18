#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define AAKHHPMNOID_ABLKBBEJOEE_OFFSET UNITYSDK_OFFSET(0x757C10)
#define AAKHHPMNOID_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AAKHHPMNOID_AENMIMLEFGE_OFFSET UNITYSDK_OFFSET(0x78AB70)
#define AAKHHPMNOID_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AAKHHPMNOID_BIHKOKJCKNM_OFFSET UNITYSDK_OFFSET(0x7ADDB0)
#define AAKHHPMNOID_CICPDNCJPLF_OFFSET UNITYSDK_OFFSET(0x78A8A0)
#define AAKHHPMNOID_DJKHDAOAKOM_OFFSET UNITYSDK_OFFSET(0x761AD0)
#define AAKHHPMNOID_EFFBHHELIDG_OFFSET UNITYSDK_OFFSET(0x755C70)
#define AAKHHPMNOID_EGGLHJJGCHM_OFFSET UNITYSDK_OFFSET(0x7587D0)
#define AAKHHPMNOID_EHHELKOLPKA_OFFSET UNITYSDK_OFFSET(0x755370)
#define AAKHHPMNOID_EOEFCGPNCMC_OFFSET UNITYSDK_OFFSET(0x779D20)
#define AAKHHPMNOID_GCNHJNMJFBG_OFFSET UNITYSDK_OFFSET(0x762FE0)
#define AAKHHPMNOID_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AAKHHPMNOID_GOPAOBCNFLJ_OFFSET UNITYSDK_OFFSET(0x754970)
#define AAKHHPMNOID_JAHOIAKACIC_OFFSET UNITYSDK_OFFSET(0x756B10)
#define AAKHHPMNOID_JALALPLFGII_OFFSET UNITYSDK_OFFSET(0x755D20)
#define AAKHHPMNOID_KFFHICKDKMJ_OFFSET UNITYSDK_OFFSET(0x7618B0)
#define AAKHHPMNOID_KJJOFKKNKMG_OFFSET UNITYSDK_OFFSET(0x755670)
#define AAKHHPMNOID_LABBPAOONKA_OFFSET UNITYSDK_OFFSET(0x760FB0)
#define AAKHHPMNOID_LBLEAJLAKDG_OFFSET UNITYSDK_OFFSET(0x758780)
#define AAKHHPMNOID_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x761980)
#define AAKHHPMNOID_MCBKKOBAJPN_OFFSET UNITYSDK_OFFSET(0x755320)
#define AAKHHPMNOID_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17EE20E0)
#define AAKHHPMNOID_PMFHEOGKMBD_OFFSET UNITYSDK_OFFSET(0x757190)
#define AAKHHPMNOID___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AAKHHPMNOID_TypeDefinitionIndex = 14360;

struct alignas(4) AAKHHPMNOID
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKHHPMNOID_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AAKHHPMNOID___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* DJKHDAOAKOM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKHHPMNOID_DJKHDAOAKOM_OFFSET))(this);
	}

	::System::String* BIHKOKJCKNM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKHHPMNOID_BIHKOKJCKNM_OFFSET))(this);
	}

	::System::Int32 EGGLHJJGCHM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKHHPMNOID_EGGLHJJGCHM_OFFSET))(this);
	}

	::System::Int32 MCBKKOBAJPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKHHPMNOID_MCBKKOBAJPN_OFFSET))(this);
	}

	::System::Boolean LABBPAOONKA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKHHPMNOID_LABBPAOONKA_OFFSET))(this);
	}

	::System::Int32 GOPAOBCNFLJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKHHPMNOID_GOPAOBCNFLJ_OFFSET))(this);
	}

	::System::String* EOEFCGPNCMC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKHHPMNOID_EOEFCGPNCMC_OFFSET))(this);
	}

	::System::Int32 EHHELKOLPKA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKHHPMNOID_EHHELKOLPKA_OFFSET))(this);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKHHPMNOID_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::Int32 GCNHJNMJFBG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKHHPMNOID_GCNHJNMJFBG_OFFSET))(this);
	}

	::System::Boolean AENMIMLEFGE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + AAKHHPMNOID_AENMIMLEFGE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* KFFHICKDKMJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKHHPMNOID_KFFHICKDKMJ_OFFSET))(this);
	}

	::System::Int32 LBLEAJLAKDG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKHHPMNOID_LBLEAJLAKDG_OFFSET))(this);
	}

	::System::Int32 KJJOFKKNKMG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKHHPMNOID_KJJOFKKNKMG_OFFSET))(this);
	}

	::System::Int32 JALALPLFGII()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKHHPMNOID_JALALPLFGII_OFFSET))(this);
	}

	/*
	static ::AAKHHPMNOID OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::AAKHHPMNOID(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + AAKHHPMNOID_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* PMFHEOGKMBD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKHHPMNOID_PMFHEOGKMBD_OFFSET))(this);
	}

	::System::String* JAHOIAKACIC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKHHPMNOID_JAHOIAKACIC_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKHHPMNOID_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::AAKHHPMNOID BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AAKHHPMNOID(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AAKHHPMNOID_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 CICPDNCJPLF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKHHPMNOID_CICPDNCJPLF_OFFSET))(this);
	}

	::System::Int32 EFFBHHELIDG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKHHPMNOID_EFFBHHELIDG_OFFSET))(this);
	}

	::System::Int32 ABLKBBEJOEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKHHPMNOID_ABLKBBEJOEE_OFFSET))(this);
	}
};
