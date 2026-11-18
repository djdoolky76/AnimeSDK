#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MEPIDLENHEF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MEPIDLENHEF_AHMAMABOBEI_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define MEPIDLENHEF_AIKPKNKAIAK_OFFSET UNITYSDK_OFFSET(0x757450)
#define MEPIDLENHEF_AOFOGBAGPOB_OFFSET UNITYSDK_OFFSET(0x762FE0)
#define MEPIDLENHEF_BEDBNMBJKNN_OFFSET UNITYSDK_OFFSET(0x755890)
#define MEPIDLENHEF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MEPIDLENHEF_CNLOOHBACPO_OFFSET UNITYSDK_OFFSET(0x757E20)
#define MEPIDLENHEF_CNPMPBOFMFN_OFFSET UNITYSDK_OFFSET(0x755A00)
#define MEPIDLENHEF_DAGADANHPMO_OFFSET UNITYSDK_OFFSET(0x756B10)
#define MEPIDLENHEF_DMPHLKOEIHJ_OFFSET UNITYSDK_OFFSET(0x762910)
#define MEPIDLENHEF_DOFMNKNCJHC_OFFSET UNITYSDK_OFFSET(0x7628B0)
#define MEPIDLENHEF_EKFNIOEDDJE_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define MEPIDLENHEF_FDAAKBAMBIC_OFFSET UNITYSDK_OFFSET(0x7636B0)
#define MEPIDLENHEF_FDEKMBPKANN_OFFSET UNITYSDK_OFFSET(0x7631A0)
#define MEPIDLENHEF_GBFENGAOMKM_OFFSET UNITYSDK_OFFSET(0x755840)
#define MEPIDLENHEF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MEPIDLENHEF_HAJLLBKPCFC_OFFSET UNITYSDK_OFFSET(0x7AC500)
#define MEPIDLENHEF_HGKHMLCEAOL_OFFSET UNITYSDK_OFFSET(0x755E40)
#define MEPIDLENHEF_ICLHKFANBMH_OFFSET UNITYSDK_OFFSET(0x7627E0)
#define MEPIDLENHEF_JCOJMJPPBKI_OFFSET UNITYSDK_OFFSET(0x7A5700)
#define MEPIDLENHEF_JEFOEBGAAHG_OFFSET UNITYSDK_OFFSET(0x757D20)
#define MEPIDLENHEF_JHDGABLOOAI_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define MEPIDLENHEF_JNACCCGMEGO_OFFSET UNITYSDK_OFFSET(0x762A10)
#define MEPIDLENHEF_LEFEFCFJOEL_OFFSET UNITYSDK_OFFSET(0x755260)
#define MEPIDLENHEF_NEJJCPAJBKH_OFFSET UNITYSDK_OFFSET(0x757290)
#define MEPIDLENHEF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x195A21F0)
#define MEPIDLENHEF_OBALGJECHBK_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define MEPIDLENHEF_OKHPBLABBCI_OFFSET UNITYSDK_OFFSET(0x761BD0)
#define MEPIDLENHEF_PAJKOGAHHFJ_OFFSET UNITYSDK_OFFSET(0x789AB0)
#define MEPIDLENHEF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MEPIDLENHEF_TypeDefinitionIndex = 16440;

struct alignas(4) MEPIDLENHEF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPIDLENHEF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEPIDLENHEF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DOFMNKNCJHC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPIDLENHEF_DOFMNKNCJHC_OFFSET))(this);
	}

	::System::Int32 DMPHLKOEIHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPIDLENHEF_DMPHLKOEIHJ_OFFSET))(this);
	}

	::System::Int32 JHDGABLOOAI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPIDLENHEF_JHDGABLOOAI_OFFSET))(this);
	}

	::System::Boolean ICLHKFANBMH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MEPIDLENHEF_ICLHKFANBMH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean HAJLLBKPCFC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MEPIDLENHEF_HAJLLBKPCFC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* NEJJCPAJBKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPIDLENHEF_NEJJCPAJBKH_OFFSET))(this);
	}

	::System::String* JEFOEBGAAHG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPIDLENHEF_JEFOEBGAAHG_OFFSET))(this);
	}

	::System::Int32 GBFENGAOMKM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPIDLENHEF_GBFENGAOMKM_OFFSET))(this);
	}

	/*
	static ::MEPIDLENHEF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MEPIDLENHEF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MEPIDLENHEF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 OKHPBLABBCI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPIDLENHEF_OKHPBLABBCI_OFFSET))(this);
	}

	::System::Int32 AOFOGBAGPOB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPIDLENHEF_AOFOGBAGPOB_OFFSET))(this);
	}

	::System::String* EKFNIOEDDJE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPIDLENHEF_EKFNIOEDDJE_OFFSET))(this);
	}

	::System::Int32 HGKHMLCEAOL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPIDLENHEF_HGKHMLCEAOL_OFFSET))(this);
	}

	::System::Int32 PAJKOGAHHFJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPIDLENHEF_PAJKOGAHHFJ_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPIDLENHEF_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 LEFEFCFJOEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPIDLENHEF_LEFEFCFJOEL_OFFSET))(this);
	}

	::System::String* CNLOOHBACPO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPIDLENHEF_CNLOOHBACPO_OFFSET))(this);
	}

	::System::String* OBALGJECHBK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPIDLENHEF_OBALGJECHBK_OFFSET))(this);
	}

	::System::Int32 BEDBNMBJKNN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPIDLENHEF_BEDBNMBJKNN_OFFSET))(this);
	}

	::System::String* AHMAMABOBEI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPIDLENHEF_AHMAMABOBEI_OFFSET))(this);
	}

	::System::Boolean JNACCCGMEGO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MEPIDLENHEF_JNACCCGMEGO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* DAGADANHPMO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPIDLENHEF_DAGADANHPMO_OFFSET))(this);
	}

	::System::Int32 AIKPKNKAIAK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPIDLENHEF_AIKPKNKAIAK_OFFSET))(this);
	}

	/*
	::MEPIDLENHEF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MEPIDLENHEF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEPIDLENHEF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* CNPMPBOFMFN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPIDLENHEF_CNPMPBOFMFN_OFFSET))(this);
	}

	::System::Boolean JCOJMJPPBKI(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MEPIDLENHEF_JCOJMJPPBKI_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean FDAAKBAMBIC(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + MEPIDLENHEF_FDAAKBAMBIC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 FDEKMBPKANN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPIDLENHEF_FDEKMBPKANN_OFFSET))(this);
	}
};
