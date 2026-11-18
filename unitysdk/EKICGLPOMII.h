#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KFLHFOBMFKJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EKICGLPOMII_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EKICGLPOMII_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x807E00)
#define EKICGLPOMII_CLBDPHEGEHF_1_OFFSET UNITYSDK_OFFSET(0x1ADD5FB0)
#define EKICGLPOMII_CLBDPHEGEHF_OFFSET UNITYSDK_OFFSET(0x1ADD5F40)
#define EKICGLPOMII_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EKICGLPOMII_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EKICGLPOMII_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x807DF0)
#define EKICGLPOMII_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x807DE0)
#define EKICGLPOMII___INIT_OFFSET UNITYSDK_OFFSET(0x807DC0)

inline static constexpr unsigned int EKICGLPOMII_TypeDefinitionIndex = 9563;

struct alignas(8) EKICGLPOMII
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKICGLPOMII_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EKICGLPOMII___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKICGLPOMII_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKICGLPOMII_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::EKICGLPOMII CLBDPHEGEHF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EKICGLPOMII(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EKICGLPOMII_CLBDPHEGEHF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KFLHFOBMFKJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KFLHFOBMFKJ&))((::PBYTE)hIl2Cpp + EKICGLPOMII_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KFLHFOBMFKJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KFLHFOBMFKJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + EKICGLPOMII_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::EKICGLPOMII CLBDPHEGEHF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EKICGLPOMII EIFONLCJOPG)
	{
		return ((::EKICGLPOMII(*)(::FlatBuffers::ByteBuffer*, ::EKICGLPOMII))((::PBYTE)hIl2Cpp + EKICGLPOMII_CLBDPHEGEHF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::EKICGLPOMII BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EKICGLPOMII(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EKICGLPOMII_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
