#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LIFHIOPNGIC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IGIDMPPPPEB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IGIDMPPPPEB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x77A690)
#define IGIDMPPPPEB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IGIDMPPPPEB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IGIDMPPPPEB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x77A6D0)
#define IGIDMPPPPEB_OKPAOHCCFKE_1_OFFSET UNITYSDK_OFFSET(0x161087B0)
#define IGIDMPPPPEB_OKPAOHCCFKE_OFFSET UNITYSDK_OFFSET(0x16108550)
#define IGIDMPPPPEB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x77A6E0)
#define IGIDMPPPPEB___INIT_OFFSET UNITYSDK_OFFSET(0x77A670)

inline static constexpr unsigned int IGIDMPPPPEB_TypeDefinitionIndex = 13639;

struct alignas(8) IGIDMPPPPEB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIDMPPPPEB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGIDMPPPPEB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIDMPPPPEB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::IGIDMPPPPEB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IGIDMPPPPEB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGIDMPPPPEB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IGIDMPPPPEB OKPAOHCCFKE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IGIDMPPPPEB EIFONLCJOPG)
	{
		return ((::IGIDMPPPPEB(*)(::FlatBuffers::ByteBuffer*, ::IGIDMPPPPEB))((::PBYTE)hIl2Cpp + IGIDMPPPPEB_OKPAOHCCFKE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LIFHIOPNGIC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LIFHIOPNGIC&))((::PBYTE)hIl2Cpp + IGIDMPPPPEB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LIFHIOPNGIC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LIFHIOPNGIC&, ::System::Int32&))((::PBYTE)hIl2Cpp + IGIDMPPPPEB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::IGIDMPPPPEB OKPAOHCCFKE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IGIDMPPPPEB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGIDMPPPPEB_OKPAOHCCFKE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIDMPPPPEB_PPOMNIFACOL_OFFSET))(this);
	}
};
