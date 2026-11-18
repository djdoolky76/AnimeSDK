#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CODAFJFDIKI_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CODAFJFDIKI_AEKGBKPPDGD_OFFSET UNITYSDK_OFFSET(0x756060)
#define CODAFJFDIKI_AJJMFFOEBHE_OFFSET UNITYSDK_OFFSET(0x758780)
#define CODAFJFDIKI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CODAFJFDIKI_DNKGCHBCAJD_OFFSET UNITYSDK_OFFSET(0x756280)
#define CODAFJFDIKI_GDHKDHEPCLM_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define CODAFJFDIKI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CODAFJFDIKI_GPBFENDAJMF_OFFSET UNITYSDK_OFFSET(0x755A00)
#define CODAFJFDIKI_IEEKFGHIFCH_OFFSET UNITYSDK_OFFSET(0x755320)
#define CODAFJFDIKI_JAEGEMNKPKK_OFFSET UNITYSDK_OFFSET(0x756510)
#define CODAFJFDIKI_JCJMKBJHFEC_OFFSET UNITYSDK_OFFSET(0x755C70)
#define CODAFJFDIKI_KKLFPEPNPAB_OFFSET UNITYSDK_OFFSET(0x755FE0)
#define CODAFJFDIKI_KPNGOFCEDLP_OFFSET UNITYSDK_OFFSET(0x7561C0)
#define CODAFJFDIKI_LAFJHFABJBE_OFFSET UNITYSDK_OFFSET(0x7587D0)
#define CODAFJFDIKI_LFEGGMHOOCF_OFFSET UNITYSDK_OFFSET(0x807450)
#define CODAFJFDIKI_NHAJBCMLMDE_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define CODAFJFDIKI_OAICOLMNGMB_OFFSET UNITYSDK_OFFSET(0x756800)
#define CODAFJFDIKI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1ADB9280)
#define CODAFJFDIKI_OONJBLGPPLJ_OFFSET UNITYSDK_OFFSET(0x756140)
#define CODAFJFDIKI_PKKOFEILCJG_OFFSET UNITYSDK_OFFSET(0x756640)
#define CODAFJFDIKI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CODAFJFDIKI_TypeDefinitionIndex = 17007;

struct alignas(4) CODAFJFDIKI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODAFJFDIKI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CODAFJFDIKI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DNKGCHBCAJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODAFJFDIKI_DNKGCHBCAJD_OFFSET))(this);
	}

	/*
	::CODAFJFDIKI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CODAFJFDIKI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CODAFJFDIKI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* GPBFENDAJMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODAFJFDIKI_GPBFENDAJMF_OFFSET))(this);
	}

	::System::Boolean OONJBLGPPLJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CODAFJFDIKI_OONJBLGPPLJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LFEGGMHOOCF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODAFJFDIKI_LFEGGMHOOCF_OFFSET))(this);
	}

	::System::Boolean KKLFPEPNPAB(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CODAFJFDIKI_KKLFPEPNPAB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 JCJMKBJHFEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODAFJFDIKI_JCJMKBJHFEC_OFFSET))(this);
	}

	::System::String* GDHKDHEPCLM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODAFJFDIKI_GDHKDHEPCLM_OFFSET))(this);
	}

	::System::Int32 JAEGEMNKPKK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODAFJFDIKI_JAEGEMNKPKK_OFFSET))(this);
	}

	::System::Int32 LAFJHFABJBE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODAFJFDIKI_LAFJHFABJBE_OFFSET))(this);
	}

	::System::Boolean AEKGBKPPDGD(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CODAFJFDIKI_AEKGBKPPDGD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* NHAJBCMLMDE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODAFJFDIKI_NHAJBCMLMDE_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODAFJFDIKI_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 OAICOLMNGMB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODAFJFDIKI_OAICOLMNGMB_OFFSET))(this);
	}

	::System::Int32 KPNGOFCEDLP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODAFJFDIKI_KPNGOFCEDLP_OFFSET))(this);
	}

	::System::Int32 AJJMFFOEBHE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODAFJFDIKI_AJJMFFOEBHE_OFFSET))(this);
	}

	::System::Boolean PKKOFEILCJG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CODAFJFDIKI_PKKOFEILCJG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::CODAFJFDIKI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CODAFJFDIKI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CODAFJFDIKI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 IEEKFGHIFCH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODAFJFDIKI_IEEKFGHIFCH_OFFSET))(this);
	}
};
