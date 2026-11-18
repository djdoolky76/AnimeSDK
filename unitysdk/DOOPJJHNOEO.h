#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JMMLFDLJKJM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DOOPJJHNOEO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DOOPJJHNOEO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x817100)
#define DOOPJJHNOEO_CMOKKOOBCMC_1_OFFSET UNITYSDK_OFFSET(0x1B9AD790)
#define DOOPJJHNOEO_CMOKKOOBCMC_OFFSET UNITYSDK_OFFSET(0x1B9AD720)
#define DOOPJJHNOEO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DOOPJJHNOEO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DOOPJJHNOEO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x817150)
#define DOOPJJHNOEO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x817140)
#define DOOPJJHNOEO___INIT_OFFSET UNITYSDK_OFFSET(0x8170E0)

inline static constexpr unsigned int DOOPJJHNOEO_TypeDefinitionIndex = 16126;

struct alignas(8) DOOPJJHNOEO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOPJJHNOEO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOOPJJHNOEO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::DOOPJJHNOEO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DOOPJJHNOEO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOOPJJHNOEO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOPJJHNOEO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JMMLFDLJKJM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JMMLFDLJKJM&, ::System::Int32&))((::PBYTE)hIl2Cpp + DOOPJJHNOEO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::DOOPJJHNOEO CMOKKOOBCMC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DOOPJJHNOEO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOOPJJHNOEO_CMOKKOOBCMC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::DOOPJJHNOEO CMOKKOOBCMC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DOOPJJHNOEO EIFONLCJOPG)
	{
		return ((::DOOPJJHNOEO(*)(::FlatBuffers::ByteBuffer*, ::DOOPJJHNOEO))((::PBYTE)hIl2Cpp + DOOPJJHNOEO_CMOKKOOBCMC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOPJJHNOEO_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JMMLFDLJKJM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JMMLFDLJKJM&))((::PBYTE)hIl2Cpp + DOOPJJHNOEO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
