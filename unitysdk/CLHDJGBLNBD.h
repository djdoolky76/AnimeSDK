#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CLHDJGBLNBD_ABJECOMGBMN_OFFSET UNITYSDK_OFFSET(0x756490)
#define CLHDJGBLNBD_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CLHDJGBLNBD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CLHDJGBLNBD_DMFFPCOIBIM_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define CLHDJGBLNBD_EJMLGJMDCNJ_OFFSET UNITYSDK_OFFSET(0x756D50)
#define CLHDJGBLNBD_EMOACCCKGNN_OFFSET UNITYSDK_OFFSET(0x757190)
#define CLHDJGBLNBD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CLHDJGBLNBD_GHIKECCFBHG_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define CLHDJGBLNBD_IFOPFBIDGDM_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define CLHDJGBLNBD_KBNILCGHOJO_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define CLHDJGBLNBD_LMGBPENIJHD_OFFSET UNITYSDK_OFFSET(0x755320)
#define CLHDJGBLNBD_LNHGCCNPKCD_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define CLHDJGBLNBD_LPLEIMLDAJC_OFFSET UNITYSDK_OFFSET(0x755D70)
#define CLHDJGBLNBD_NCLBODLIEIB_OFFSET UNITYSDK_OFFSET(0x756B10)
#define CLHDJGBLNBD_NNHLNFPGCLN_OFFSET UNITYSDK_OFFSET(0x756B90)
#define CLHDJGBLNBD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B99C7C0)
#define CLHDJGBLNBD_ONPKFFPPDAF_OFFSET UNITYSDK_OFFSET(0x757290)
#define CLHDJGBLNBD_PMBCAKACFJP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define CLHDJGBLNBD_PNBNCBMNGDF_OFFSET UNITYSDK_OFFSET(0x7560E0)
#define CLHDJGBLNBD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CLHDJGBLNBD_TypeDefinitionIndex = 12209;

struct alignas(4) CLHDJGBLNBD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHDJGBLNBD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLHDJGBLNBD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* GHIKECCFBHG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHDJGBLNBD_GHIKECCFBHG_OFFSET))(this);
	}

	::System::String* LNHGCCNPKCD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHDJGBLNBD_LNHGCCNPKCD_OFFSET))(this);
	}

	::System::Int32 KBNILCGHOJO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHDJGBLNBD_KBNILCGHOJO_OFFSET))(this);
	}

	::System::Int32 LMGBPENIJHD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHDJGBLNBD_LMGBPENIJHD_OFFSET))(this);
	}

	::System::Int32 PNBNCBMNGDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHDJGBLNBD_PNBNCBMNGDF_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHDJGBLNBD_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* DMFFPCOIBIM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHDJGBLNBD_DMFFPCOIBIM_OFFSET))(this);
	}

	::System::String* ONPKFFPPDAF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHDJGBLNBD_ONPKFFPPDAF_OFFSET))(this);
	}

	::System::String* EJMLGJMDCNJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHDJGBLNBD_EJMLGJMDCNJ_OFFSET))(this);
	}

	::System::Int32 IFOPFBIDGDM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHDJGBLNBD_IFOPFBIDGDM_OFFSET))(this);
	}

	::System::Int32 NNHLNFPGCLN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHDJGBLNBD_NNHLNFPGCLN_OFFSET))(this);
	}

	/*
	::CLHDJGBLNBD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CLHDJGBLNBD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLHDJGBLNBD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* EMOACCCKGNN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHDJGBLNBD_EMOACCCKGNN_OFFSET))(this);
	}

	::System::Boolean LPLEIMLDAJC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLHDJGBLNBD_LPLEIMLDAJC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::CLHDJGBLNBD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CLHDJGBLNBD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLHDJGBLNBD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean ABJECOMGBMN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLHDJGBLNBD_ABJECOMGBMN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* PMBCAKACFJP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHDJGBLNBD_PMBCAKACFJP_OFFSET))(this);
	}

	::System::String* NCLBODLIEIB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHDJGBLNBD_NCLBODLIEIB_OFFSET))(this);
	}
};
