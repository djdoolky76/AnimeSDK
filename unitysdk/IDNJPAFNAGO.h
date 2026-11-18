#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IDNJPAFNAGO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IDNJPAFNAGO_AHNAPAJBHPJ_OFFSET UNITYSDK_OFFSET(0x755710)
#define IDNJPAFNAGO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IDNJPAFNAGO_DJDDKEFPGKO_OFFSET UNITYSDK_OFFSET(0x756570)
#define IDNJPAFNAGO_DLIKIFPHDCP_OFFSET UNITYSDK_OFFSET(0x756220)
#define IDNJPAFNAGO_EKGKLBDBDOJ_OFFSET UNITYSDK_OFFSET(0x755C70)
#define IDNJPAFNAGO_EPNLDCPFLDL_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define IDNJPAFNAGO_GBFJHDHODNC_OFFSET UNITYSDK_OFFSET(0x755E40)
#define IDNJPAFNAGO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IDNJPAFNAGO_HEBOANPCFOC_OFFSET UNITYSDK_OFFSET(0x762D20)
#define IDNJPAFNAGO_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x758780)
#define IDNJPAFNAGO_JACBKJDGCGA_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define IDNJPAFNAGO_LLFMLMIJFAG_OFFSET UNITYSDK_OFFSET(0x755790)
#define IDNJPAFNAGO_MENLLNPAOCB_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define IDNJPAFNAGO_NBBDEHDIONI_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define IDNJPAFNAGO_NIBIBEBNJIP_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define IDNJPAFNAGO_NKPOPMMCOFM_OFFSET UNITYSDK_OFFSET(0x758320)
#define IDNJPAFNAGO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17C18D70)
#define IDNJPAFNAGO_OKECOCIFJAB_OFFSET UNITYSDK_OFFSET(0x76FDA0)
#define IDNJPAFNAGO_OKGKODNEICJ_OFFSET UNITYSDK_OFFSET(0x754970)
#define IDNJPAFNAGO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IDNJPAFNAGO_TypeDefinitionIndex = 11029;

struct alignas(4) IDNJPAFNAGO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNJPAFNAGO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IDNJPAFNAGO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean OKECOCIFJAB(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + IDNJPAFNAGO_OKECOCIFJAB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean DJDDKEFPGKO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + IDNJPAFNAGO_DJDDKEFPGKO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* NKPOPMMCOFM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNJPAFNAGO_NKPOPMMCOFM_OFFSET))(this);
	}

	::System::String* EPNLDCPFLDL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNJPAFNAGO_EPNLDCPFLDL_OFFSET))(this);
	}

	::System::Int32 NBBDEHDIONI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNJPAFNAGO_NBBDEHDIONI_OFFSET))(this);
	}

	::System::Boolean JACBKJDGCGA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + IDNJPAFNAGO_JACBKJDGCGA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 DLIKIFPHDCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNJPAFNAGO_DLIKIFPHDCP_OFFSET))(this);
	}

	::System::String* AHNAPAJBHPJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNJPAFNAGO_AHNAPAJBHPJ_OFFSET))(this);
	}

	::System::Int32 LLFMLMIJFAG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNJPAFNAGO_LLFMLMIJFAG_OFFSET))(this);
	}

	::System::String* MENLLNPAOCB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNJPAFNAGO_MENLLNPAOCB_OFFSET))(this);
	}

	::System::String* NIBIBEBNJIP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNJPAFNAGO_NIBIBEBNJIP_OFFSET))(this);
	}

	::System::Int32 OKGKODNEICJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNJPAFNAGO_OKGKODNEICJ_OFFSET))(this);
	}

	::System::Int32 HEBOANPCFOC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNJPAFNAGO_HEBOANPCFOC_OFFSET))(this);
	}

	::System::Int32 GBFJHDHODNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNJPAFNAGO_GBFJHDHODNC_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNJPAFNAGO_HKELPCLHLEC_OFFSET))(this);
	}

	/*
	::IDNJPAFNAGO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IDNJPAFNAGO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IDNJPAFNAGO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 EKGKLBDBDOJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNJPAFNAGO_EKGKLBDBDOJ_OFFSET))(this);
	}

	/*
	static ::IDNJPAFNAGO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IDNJPAFNAGO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IDNJPAFNAGO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNJPAFNAGO_ACOEONABOJL_OFFSET))(this);
	}
};
