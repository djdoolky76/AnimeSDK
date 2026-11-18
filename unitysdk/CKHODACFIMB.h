#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ANMJMFIFBJG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CKHODACFIMB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CKHODACFIMB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F53A0)
#define CKHODACFIMB_DNHBNBGHBJE_1_OFFSET UNITYSDK_OFFSET(0x1A17EFF0)
#define CKHODACFIMB_DNHBNBGHBJE_OFFSET UNITYSDK_OFFSET(0x1A17ED90)
#define CKHODACFIMB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CKHODACFIMB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CKHODACFIMB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F53E0)
#define CKHODACFIMB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F53F0)
#define CKHODACFIMB___INIT_OFFSET UNITYSDK_OFFSET(0x7F5380)

inline static constexpr unsigned int CKHODACFIMB_TypeDefinitionIndex = 13566;

struct alignas(8) CKHODACFIMB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHODACFIMB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CKHODACFIMB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::CKHODACFIMB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CKHODACFIMB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CKHODACFIMB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CKHODACFIMB DNHBNBGHBJE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CKHODACFIMB EIFONLCJOPG)
	{
		return ((::CKHODACFIMB(*)(::FlatBuffers::ByteBuffer*, ::CKHODACFIMB))((::PBYTE)hIl2Cpp + CKHODACFIMB_DNHBNBGHBJE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ANMJMFIFBJG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ANMJMFIFBJG&, ::System::Int32&))((::PBYTE)hIl2Cpp + CKHODACFIMB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::CKHODACFIMB DNHBNBGHBJE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CKHODACFIMB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CKHODACFIMB_DNHBNBGHBJE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHODACFIMB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHODACFIMB_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ANMJMFIFBJG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ANMJMFIFBJG&))((::PBYTE)hIl2Cpp + CKHODACFIMB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
