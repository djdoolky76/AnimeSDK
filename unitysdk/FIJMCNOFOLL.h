#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FIJMCNOFOLL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FIJMCNOFOLL_BLNMNCNCPFB_OFFSET UNITYSDK_OFFSET(0x758780)
#define FIJMCNOFOLL_CBGIBELMAAO_OFFSET UNITYSDK_OFFSET(0x7A7050)
#define FIJMCNOFOLL_CHCIKEGPLJD_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define FIJMCNOFOLL_CPHPHLIONDD_OFFSET UNITYSDK_OFFSET(0x757E20)
#define FIJMCNOFOLL_DHPNLFNDKJE_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define FIJMCNOFOLL_EFBGAMAKIJP_OFFSET UNITYSDK_OFFSET(0x7A5C70)
#define FIJMCNOFOLL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FIJMCNOFOLL_LCJDHNNNCPE_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define FIJMCNOFOLL_LOPDGLFFNGB_OFFSET UNITYSDK_OFFSET(0x755A00)
#define FIJMCNOFOLL_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FIJMCNOFOLL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17AB48A0)
#define FIJMCNOFOLL_OEBELJGDNCE_OFFSET UNITYSDK_OFFSET(0x761710)
#define FIJMCNOFOLL_PBFIFAHAHPN_OFFSET UNITYSDK_OFFSET(0x755D70)
#define FIJMCNOFOLL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FIJMCNOFOLL_TypeDefinitionIndex = 13271;

struct alignas(4) FIJMCNOFOLL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJMCNOFOLL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FIJMCNOFOLL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Single CBGIBELMAAO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJMCNOFOLL_CBGIBELMAAO_OFFSET))(this);
	}

	/*
	::FIJMCNOFOLL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FIJMCNOFOLL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FIJMCNOFOLL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* CHCIKEGPLJD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJMCNOFOLL_CHCIKEGPLJD_OFFSET))(this);
	}

	::System::Int32 LCJDHNNNCPE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJMCNOFOLL_LCJDHNNNCPE_OFFSET))(this);
	}

	::System::String* OEBELJGDNCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJMCNOFOLL_OEBELJGDNCE_OFFSET))(this);
	}

	::System::Single EFBGAMAKIJP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJMCNOFOLL_EFBGAMAKIJP_OFFSET))(this);
	}

	::System::String* CPHPHLIONDD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJMCNOFOLL_CPHPHLIONDD_OFFSET))(this);
	}

	::System::String* LOPDGLFFNGB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJMCNOFOLL_LOPDGLFFNGB_OFFSET))(this);
	}

	/*
	static ::FIJMCNOFOLL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FIJMCNOFOLL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FIJMCNOFOLL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean PBFIFAHAHPN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FIJMCNOFOLL_PBFIFAHAHPN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 BLNMNCNCPFB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJMCNOFOLL_BLNMNCNCPFB_OFFSET))(this);
	}

	::System::Int32 DHPNLFNDKJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJMCNOFOLL_DHPNLFNDKJE_OFFSET))(this);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJMCNOFOLL_NKCNGLADFNA_OFFSET))(this);
	}
};
