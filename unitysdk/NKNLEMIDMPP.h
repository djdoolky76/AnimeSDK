#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OAIFBBIBMHC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NKNLEMIDMPP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NKNLEMIDMPP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81F4A0)
#define NKNLEMIDMPP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NKNLEMIDMPP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NKNLEMIDMPP_JHPJNKGDPEC_1_OFFSET UNITYSDK_OFFSET(0x1C095B80)
#define NKNLEMIDMPP_JHPJNKGDPEC_OFFSET UNITYSDK_OFFSET(0x1C095B10)
#define NKNLEMIDMPP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81F4E0)
#define NKNLEMIDMPP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81F4F0)
#define NKNLEMIDMPP___INIT_OFFSET UNITYSDK_OFFSET(0x81F480)

inline static constexpr unsigned int NKNLEMIDMPP_TypeDefinitionIndex = 14529;

struct alignas(8) NKNLEMIDMPP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNLEMIDMPP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NKNLEMIDMPP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNLEMIDMPP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::NKNLEMIDMPP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NKNLEMIDMPP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NKNLEMIDMPP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OAIFBBIBMHC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OAIFBBIBMHC&, ::System::Int32&))((::PBYTE)hIl2Cpp + NKNLEMIDMPP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::NKNLEMIDMPP JHPJNKGDPEC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NKNLEMIDMPP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NKNLEMIDMPP_JHPJNKGDPEC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::NKNLEMIDMPP JHPJNKGDPEC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NKNLEMIDMPP EIFONLCJOPG)
	{
		return ((::NKNLEMIDMPP(*)(::FlatBuffers::ByteBuffer*, ::NKNLEMIDMPP))((::PBYTE)hIl2Cpp + NKNLEMIDMPP_JHPJNKGDPEC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNLEMIDMPP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OAIFBBIBMHC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OAIFBBIBMHC&))((::PBYTE)hIl2Cpp + NKNLEMIDMPP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
