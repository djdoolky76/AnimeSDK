#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CFPPMKDALDE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PKKDKDPDHPB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PKKDKDPDHPB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x85E8D0)
#define PKKDKDPDHPB_CIBCCLDMMIB_1_OFFSET UNITYSDK_OFFSET(0x1CD0E630)
#define PKKDKDPDHPB_CIBCCLDMMIB_OFFSET UNITYSDK_OFFSET(0x1CD0E5C0)
#define PKKDKDPDHPB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PKKDKDPDHPB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PKKDKDPDHPB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x85E910)
#define PKKDKDPDHPB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x85E8C0)
#define PKKDKDPDHPB___INIT_OFFSET UNITYSDK_OFFSET(0x85E8A0)

inline static constexpr unsigned int PKKDKDPDHPB_TypeDefinitionIndex = 9257;

struct alignas(8) PKKDKDPDHPB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKDKDPDHPB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PKKDKDPDHPB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PKKDKDPDHPB CIBCCLDMMIB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PKKDKDPDHPB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PKKDKDPDHPB_CIBCCLDMMIB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKDKDPDHPB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::PKKDKDPDHPB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PKKDKDPDHPB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PKKDKDPDHPB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PKKDKDPDHPB CIBCCLDMMIB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PKKDKDPDHPB EIFONLCJOPG)
	{
		return ((::PKKDKDPDHPB(*)(::FlatBuffers::ByteBuffer*, ::PKKDKDPDHPB))((::PBYTE)hIl2Cpp + PKKDKDPDHPB_CIBCCLDMMIB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CFPPMKDALDE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CFPPMKDALDE&))((::PBYTE)hIl2Cpp + PKKDKDPDHPB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CFPPMKDALDE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CFPPMKDALDE&, ::System::Int32&))((::PBYTE)hIl2Cpp + PKKDKDPDHPB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKDKDPDHPB_GHKKNCCLPAN_OFFSET))(this);
	}
};
