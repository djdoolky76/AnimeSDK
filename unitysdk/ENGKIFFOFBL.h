#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PEPGPPFLHNF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ENGKIFFOFBL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ENGKIFFOFBL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F6150)
#define ENGKIFFOFBL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ENGKIFFOFBL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ENGKIFFOFBL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F6190)
#define ENGKIFFOFBL_PBAAOAEJJLN_1_OFFSET UNITYSDK_OFFSET(0x1A1A4420)
#define ENGKIFFOFBL_PBAAOAEJJLN_OFFSET UNITYSDK_OFFSET(0x1A1A43B0)
#define ENGKIFFOFBL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F61A0)
#define ENGKIFFOFBL___INIT_OFFSET UNITYSDK_OFFSET(0x7F6130)

inline static constexpr unsigned int ENGKIFFOFBL_TypeDefinitionIndex = 11926;

struct alignas(8) ENGKIFFOFBL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGKIFFOFBL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ENGKIFFOFBL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PEPGPPFLHNF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PEPGPPFLHNF&))((::PBYTE)hIl2Cpp + ENGKIFFOFBL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::ENGKIFFOFBL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ENGKIFFOFBL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ENGKIFFOFBL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGKIFFOFBL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::ENGKIFFOFBL PBAAOAEJJLN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ENGKIFFOFBL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ENGKIFFOFBL_PBAAOAEJJLN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PEPGPPFLHNF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PEPGPPFLHNF&, ::System::Int32&))((::PBYTE)hIl2Cpp + ENGKIFFOFBL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGKIFFOFBL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::ENGKIFFOFBL PBAAOAEJJLN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ENGKIFFOFBL EIFONLCJOPG)
	{
		return ((::ENGKIFFOFBL(*)(::FlatBuffers::ByteBuffer*, ::ENGKIFFOFBL))((::PBYTE)hIl2Cpp + ENGKIFFOFBL_PBAAOAEJJLN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
