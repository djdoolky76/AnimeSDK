#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EFLNIGNHMMK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OFEPACHGPEM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OFEPACHGPEM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x803460)
#define OFEPACHGPEM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OFEPACHGPEM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OFEPACHGPEM_LEKNFMDCNFM_1_OFFSET UNITYSDK_OFFSET(0x1AB28880)
#define OFEPACHGPEM_LEKNFMDCNFM_OFFSET UNITYSDK_OFFSET(0x1AB28810)
#define OFEPACHGPEM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8034A0)
#define OFEPACHGPEM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x803450)
#define OFEPACHGPEM___INIT_OFFSET UNITYSDK_OFFSET(0x803430)

inline static constexpr unsigned int OFEPACHGPEM_TypeDefinitionIndex = 15034;

struct alignas(8) OFEPACHGPEM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPACHGPEM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OFEPACHGPEM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPACHGPEM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EFLNIGNHMMK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EFLNIGNHMMK&))((::PBYTE)hIl2Cpp + OFEPACHGPEM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::OFEPACHGPEM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OFEPACHGPEM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OFEPACHGPEM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OFEPACHGPEM LEKNFMDCNFM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OFEPACHGPEM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OFEPACHGPEM_LEKNFMDCNFM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPACHGPEM_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EFLNIGNHMMK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EFLNIGNHMMK&, ::System::Int32&))((::PBYTE)hIl2Cpp + OFEPACHGPEM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::OFEPACHGPEM LEKNFMDCNFM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OFEPACHGPEM EIFONLCJOPG)
	{
		return ((::OFEPACHGPEM(*)(::FlatBuffers::ByteBuffer*, ::OFEPACHGPEM))((::PBYTE)hIl2Cpp + OFEPACHGPEM_LEKNFMDCNFM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
