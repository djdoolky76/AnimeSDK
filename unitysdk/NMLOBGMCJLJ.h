#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BOODHDPDPBE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NMLOBGMCJLJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NMLOBGMCJLJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C4880)
#define NMLOBGMCJLJ_BPFMIADFIAC_1_OFFSET UNITYSDK_OFFSET(0x17FD7F20)
#define NMLOBGMCJLJ_BPFMIADFIAC_OFFSET UNITYSDK_OFFSET(0x17FD7EB0)
#define NMLOBGMCJLJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NMLOBGMCJLJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NMLOBGMCJLJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C4870)
#define NMLOBGMCJLJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C4860)
#define NMLOBGMCJLJ___INIT_OFFSET UNITYSDK_OFFSET(0x7C4840)

inline static constexpr unsigned int NMLOBGMCJLJ_TypeDefinitionIndex = 11558;

struct alignas(8) NMLOBGMCJLJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLOBGMCJLJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMLOBGMCJLJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLOBGMCJLJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BOODHDPDPBE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BOODHDPDPBE&))((::PBYTE)hIl2Cpp + NMLOBGMCJLJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BOODHDPDPBE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BOODHDPDPBE&, ::System::Int32&))((::PBYTE)hIl2Cpp + NMLOBGMCJLJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::NMLOBGMCJLJ BPFMIADFIAC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NMLOBGMCJLJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMLOBGMCJLJ_BPFMIADFIAC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::NMLOBGMCJLJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NMLOBGMCJLJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMLOBGMCJLJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NMLOBGMCJLJ BPFMIADFIAC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NMLOBGMCJLJ EIFONLCJOPG)
	{
		return ((::NMLOBGMCJLJ(*)(::FlatBuffers::ByteBuffer*, ::NMLOBGMCJLJ))((::PBYTE)hIl2Cpp + NMLOBGMCJLJ_BPFMIADFIAC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLOBGMCJLJ_GHKKNCCLPAN_OFFSET))(this);
	}
};
