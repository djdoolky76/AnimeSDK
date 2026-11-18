#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KFKAHICLJMN_BAJELALLONC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KFKAHICLJMN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KFKAHICLJMN_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x754970)
#define KFKAHICLJMN_FDJFDCDBGEI_OFFSET UNITYSDK_OFFSET(0x77B0B0)
#define KFKAHICLJMN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KFKAHICLJMN_GOOJOBGFMGK_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define KFKAHICLJMN_HBAMGMLNKFD_OFFSET UNITYSDK_OFFSET(0x755440)
#define KFKAHICLJMN_IIIPJJGEAAO_OFFSET UNITYSDK_OFFSET(0x7553C0)
#define KFKAHICLJMN_KAELLFLOMGD_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KFKAHICLJMN_KDDOJHJEJAC_OFFSET UNITYSDK_OFFSET(0x7560E0)
#define KFKAHICLJMN_KGEECOEOHDK_OFFSET UNITYSDK_OFFSET(0x755A00)
#define KFKAHICLJMN_MNGNAMLGGJN_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define KFKAHICLJMN_NBJJKCPNFLG_OFFSET UNITYSDK_OFFSET(0x757690)
#define KFKAHICLJMN_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KFKAHICLJMN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x16121FC0)
#define KFKAHICLJMN_PGPEMFKOJJO_OFFSET UNITYSDK_OFFSET(0x757E20)
#define KFKAHICLJMN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KFKAHICLJMN_TypeDefinitionIndex = 14584;

struct alignas(4) KFKAHICLJMN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKAHICLJMN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KFKAHICLJMN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::KFKAHICLJMN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KFKAHICLJMN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KFKAHICLJMN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* NBJJKCPNFLG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKAHICLJMN_NBJJKCPNFLG_OFFSET))(this);
	}

	::System::String* PGPEMFKOJJO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKAHICLJMN_PGPEMFKOJJO_OFFSET))(this);
	}

	::System::Int32 BAJELALLONC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKAHICLJMN_BAJELALLONC_OFFSET))(this);
	}

	::System::String* MNGNAMLGGJN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKAHICLJMN_MNGNAMLGGJN_OFFSET))(this);
	}

	::System::Int32 HBAMGMLNKFD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKAHICLJMN_HBAMGMLNKFD_OFFSET))(this);
	}

	::System::Boolean IIIPJJGEAAO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KFKAHICLJMN_IIIPJJGEAAO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* KGEECOEOHDK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKAHICLJMN_KGEECOEOHDK_OFFSET))(this);
	}

	::System::Int32 KDDOJHJEJAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKAHICLJMN_KDDOJHJEJAC_OFFSET))(this);
	}

	::System::Boolean FDJFDCDBGEI(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + KFKAHICLJMN_FDJFDCDBGEI_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* GOOJOBGFMGK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKAHICLJMN_GOOJOBGFMGK_OFFSET))(this);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKAHICLJMN_NFKFHJBEPGD_OFFSET))(this);
	}

	/*
	static ::KFKAHICLJMN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KFKAHICLJMN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KFKAHICLJMN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 KAELLFLOMGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKAHICLJMN_KAELLFLOMGD_OFFSET))(this);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKAHICLJMN_DNKLBHKEDEM_OFFSET))(this);
	}
};
