#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FPMAKOIHBAP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FPMAKOIHBAP_BGBCHHNBACL_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define FPMAKOIHBAP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FPMAKOIHBAP_DGFAJDNHCIJ_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define FPMAKOIHBAP_FMIEBBEEGGN_OFFSET UNITYSDK_OFFSET(0x755890)
#define FPMAKOIHBAP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FPMAKOIHBAP_HCOGGHOLHOA_OFFSET UNITYSDK_OFFSET(0x757290)
#define FPMAKOIHBAP_HEJKPDFAKAO_OFFSET UNITYSDK_OFFSET(0x757E20)
#define FPMAKOIHBAP_HGGLLEFNEID_OFFSET UNITYSDK_OFFSET(0x754970)
#define FPMAKOIHBAP_HOLKAJGGFNM_OFFSET UNITYSDK_OFFSET(0x7624E0)
#define FPMAKOIHBAP_IDKFDGAHDLK_OFFSET UNITYSDK_OFFSET(0x754F10)
#define FPMAKOIHBAP_IGCDLPOJOMJ_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define FPMAKOIHBAP_MBCJGKAPELF_OFFSET UNITYSDK_OFFSET(0x756570)
#define FPMAKOIHBAP_NBIIFFIFOMA_OFFSET UNITYSDK_OFFSET(0x756220)
#define FPMAKOIHBAP_NLBOALNBODH_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FPMAKOIHBAP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17AB6470)
#define FPMAKOIHBAP_OLHAEKNILDM_OFFSET UNITYSDK_OFFSET(0x756440)
#define FPMAKOIHBAP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FPMAKOIHBAP_TypeDefinitionIndex = 13165;

struct alignas(4) FPMAKOIHBAP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMAKOIHBAP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FPMAKOIHBAP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean MBCJGKAPELF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FPMAKOIHBAP_MBCJGKAPELF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* HEJKPDFAKAO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMAKOIHBAP_HEJKPDFAKAO_OFFSET))(this);
	}

	::System::String* HCOGGHOLHOA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMAKOIHBAP_HCOGGHOLHOA_OFFSET))(this);
	}

	::System::String* IDKFDGAHDLK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMAKOIHBAP_IDKFDGAHDLK_OFFSET))(this);
	}

	::System::Int32 FMIEBBEEGGN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMAKOIHBAP_FMIEBBEEGGN_OFFSET))(this);
	}

	/*
	static ::FPMAKOIHBAP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FPMAKOIHBAP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FPMAKOIHBAP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 BGBCHHNBACL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMAKOIHBAP_BGBCHHNBACL_OFFSET))(this);
	}

	/*
	::FPMAKOIHBAP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FPMAKOIHBAP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FPMAKOIHBAP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* IGCDLPOJOMJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMAKOIHBAP_IGCDLPOJOMJ_OFFSET))(this);
	}

	::System::Int32 HGGLLEFNEID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMAKOIHBAP_HGGLLEFNEID_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMAKOIHBAP_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean HOLKAJGGFNM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMAKOIHBAP_HOLKAJGGFNM_OFFSET))(this);
	}

	::System::Int32 OLHAEKNILDM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMAKOIHBAP_OLHAEKNILDM_OFFSET))(this);
	}

	::System::Int32 NLBOALNBODH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMAKOIHBAP_NLBOALNBODH_OFFSET))(this);
	}

	::System::Int32 NBIIFFIFOMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMAKOIHBAP_NBIIFFIFOMA_OFFSET))(this);
	}

	::System::Int32 DGFAJDNHCIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMAKOIHBAP_DGFAJDNHCIJ_OFFSET))(this);
	}
};
