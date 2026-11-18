#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DEFFKENOKEI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PPKMKPFEOMP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PPKMKPFEOMP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x806860)
#define PPKMKPFEOMP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PPKMKPFEOMP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PPKMKPFEOMP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x806840)
#define PPKMKPFEOMP_NIAPCBCABHE_1_OFFSET UNITYSDK_OFFSET(0x1AD9E5A0)
#define PPKMKPFEOMP_NIAPCBCABHE_OFFSET UNITYSDK_OFFSET(0x1AD9E500)
#define PPKMKPFEOMP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x806850)
#define PPKMKPFEOMP___INIT_OFFSET UNITYSDK_OFFSET(0x806820)

inline static constexpr unsigned int PPKMKPFEOMP_TypeDefinitionIndex = 15265;

struct alignas(8) PPKMKPFEOMP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPKMKPFEOMP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PPKMKPFEOMP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PPKMKPFEOMP NIAPCBCABHE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PPKMKPFEOMP EIFONLCJOPG)
	{
		return ((::PPKMKPFEOMP(*)(::FlatBuffers::ByteBuffer*, ::PPKMKPFEOMP))((::PBYTE)hIl2Cpp + PPKMKPFEOMP_NIAPCBCABHE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::PPKMKPFEOMP NIAPCBCABHE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PPKMKPFEOMP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PPKMKPFEOMP_NIAPCBCABHE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPKMKPFEOMP_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DEFFKENOKEI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DEFFKENOKEI&, ::System::Int32&))((::PBYTE)hIl2Cpp + PPKMKPFEOMP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPKMKPFEOMP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::PPKMKPFEOMP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PPKMKPFEOMP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PPKMKPFEOMP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DEFFKENOKEI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DEFFKENOKEI&))((::PBYTE)hIl2Cpp + PPKMKPFEOMP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
