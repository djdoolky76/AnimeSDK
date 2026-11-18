#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ODPFOGHEKAK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AEGIHPHIHOA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AEGIHPHIHOA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B1310)
#define AEGIHPHIHOA_EKINNKBABAO_1_OFFSET UNITYSDK_OFFSET(0x17A6C5B0)
#define AEGIHPHIHOA_EKINNKBABAO_OFFSET UNITYSDK_OFFSET(0x17A6C550)
#define AEGIHPHIHOA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AEGIHPHIHOA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AEGIHPHIHOA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B1360)
#define AEGIHPHIHOA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B1350)
#define AEGIHPHIHOA___INIT_OFFSET UNITYSDK_OFFSET(0x7B12F0)

inline static constexpr unsigned int AEGIHPHIHOA_TypeDefinitionIndex = 9867;

struct alignas(8) AEGIHPHIHOA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGIHPHIHOA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AEGIHPHIHOA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::AEGIHPHIHOA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AEGIHPHIHOA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AEGIHPHIHOA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGIHPHIHOA_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGIHPHIHOA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ODPFOGHEKAK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ODPFOGHEKAK&))((::PBYTE)hIl2Cpp + AEGIHPHIHOA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ODPFOGHEKAK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ODPFOGHEKAK&, ::System::Int32&))((::PBYTE)hIl2Cpp + AEGIHPHIHOA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::AEGIHPHIHOA EKINNKBABAO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AEGIHPHIHOA EIFONLCJOPG)
	{
		return ((::AEGIHPHIHOA(*)(::FlatBuffers::ByteBuffer*, ::AEGIHPHIHOA))((::PBYTE)hIl2Cpp + AEGIHPHIHOA_EKINNKBABAO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::AEGIHPHIHOA EKINNKBABAO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AEGIHPHIHOA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AEGIHPHIHOA_EKINNKBABAO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
