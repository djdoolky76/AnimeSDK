#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MDDPDNNDDCC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MDDPDNNDDCC_AFIKPGHMNCI_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define MDDPDNNDDCC_AJDNOMBCHAE_OFFSET UNITYSDK_OFFSET(0x754B50)
#define MDDPDNNDDCC_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x755E40)
#define MDDPDNNDDCC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MDDPDNNDDCC_DGFAJDNHCIJ_OFFSET UNITYSDK_OFFSET(0x755D20)
#define MDDPDNNDDCC_EKPABMKKNMN_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define MDDPDNNDDCC_FLGDJBHOMMN_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define MDDPDNNDDCC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MDDPDNNDDCC_GMPHKDGAAFF_OFFSET UNITYSDK_OFFSET(0x755890)
#define MDDPDNNDDCC_GONOKCEIDJE_OFFSET UNITYSDK_OFFSET(0x755A00)
#define MDDPDNNDDCC_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x755C70)
#define MDDPDNNDDCC_KGLNLEOODBB_OFFSET UNITYSDK_OFFSET(0x7560E0)
#define MDDPDNNDDCC_LJNBIAFBMIL_OFFSET UNITYSDK_OFFSET(0x754920)
#define MDDPDNNDDCC_LNBAKMPFDIL_OFFSET UNITYSDK_OFFSET(0x758780)
#define MDDPDNNDDCC_PNDAFLCNECM_OFFSET UNITYSDK_OFFSET(0x756490)
#define MDDPDNNDDCC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MDDPDNNDDCC_TypeDefinitionIndex = 15757;

struct alignas(4) MDDPDNNDDCC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDNNDDCC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDDPDNNDDCC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* FLGDJBHOMMN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDNNDDCC_FLGDJBHOMMN_OFFSET))(this);
	}

	::System::String* GONOKCEIDJE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDNNDDCC_GONOKCEIDJE_OFFSET))(this);
	}

	::System::Int32 DGFAJDNHCIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDNNDDCC_DGFAJDNHCIJ_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDNNDDCC_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 EKPABMKKNMN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDNNDDCC_EKPABMKKNMN_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDNNDDCC_APCKPKCNFJE_OFFSET))(this);
	}

	/*
	::MDDPDNNDDCC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MDDPDNNDDCC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDDPDNNDDCC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 KGLNLEOODBB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDNNDDCC_KGLNLEOODBB_OFFSET))(this);
	}

	::System::Int32 AJDNOMBCHAE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDNNDDCC_AJDNOMBCHAE_OFFSET))(this);
	}

	::System::Int32 LJNBIAFBMIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDNNDDCC_LJNBIAFBMIL_OFFSET))(this);
	}

	::System::Int32 AFIKPGHMNCI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDNNDDCC_AFIKPGHMNCI_OFFSET))(this);
	}

	::System::Boolean PNDAFLCNECM(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MDDPDNNDDCC_PNDAFLCNECM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 LNBAKMPFDIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDNNDDCC_LNBAKMPFDIL_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDNNDDCC_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 GMPHKDGAAFF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDNNDDCC_GMPHKDGAAFF_OFFSET))(this);
	}
};
