#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ADPGMLIMDDP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ACOFMGDEHBG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ACOFMGDEHBG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FABB0)
#define ACOFMGDEHBG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ACOFMGDEHBG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ACOFMGDEHBG_JJOPPCKENFD_1_OFFSET UNITYSDK_OFFSET(0x1A56ADF0)
#define ACOFMGDEHBG_JJOPPCKENFD_OFFSET UNITYSDK_OFFSET(0x1A56AD80)
#define ACOFMGDEHBG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FAB90)
#define ACOFMGDEHBG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FABA0)
#define ACOFMGDEHBG___INIT_OFFSET UNITYSDK_OFFSET(0x7FAB70)

inline static constexpr unsigned int ACOFMGDEHBG_TypeDefinitionIndex = 16805;

struct alignas(8) ACOFMGDEHBG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACOFMGDEHBG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ACOFMGDEHBG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::ACOFMGDEHBG JJOPPCKENFD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ACOFMGDEHBG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ACOFMGDEHBG_JJOPPCKENFD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACOFMGDEHBG_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ADPGMLIMDDP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ADPGMLIMDDP&, ::System::Int32&))((::PBYTE)hIl2Cpp + ACOFMGDEHBG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::ACOFMGDEHBG JJOPPCKENFD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ACOFMGDEHBG EIFONLCJOPG)
	{
		return ((::ACOFMGDEHBG(*)(::FlatBuffers::ByteBuffer*, ::ACOFMGDEHBG))((::PBYTE)hIl2Cpp + ACOFMGDEHBG_JJOPPCKENFD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACOFMGDEHBG_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ADPGMLIMDDP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ADPGMLIMDDP&))((::PBYTE)hIl2Cpp + ACOFMGDEHBG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::ACOFMGDEHBG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ACOFMGDEHBG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ACOFMGDEHBG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
