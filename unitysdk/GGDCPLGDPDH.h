#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LHLEMDMCDDH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GGDCPLGDPDH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GGDCPLGDPDH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80D950)
#define GGDCPLGDPDH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GGDCPLGDPDH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GGDCPLGDPDH_IINMFFBHNOF_1_OFFSET UNITYSDK_OFFSET(0x1B4D2BF0)
#define GGDCPLGDPDH_IINMFFBHNOF_OFFSET UNITYSDK_OFFSET(0x1B4D2B80)
#define GGDCPLGDPDH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80D9A0)
#define GGDCPLGDPDH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80D990)
#define GGDCPLGDPDH___INIT_OFFSET UNITYSDK_OFFSET(0x80D930)

inline static constexpr unsigned int GGDCPLGDPDH_TypeDefinitionIndex = 10844;

struct alignas(8) GGDCPLGDPDH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGDCPLGDPDH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GGDCPLGDPDH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GGDCPLGDPDH IINMFFBHNOF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GGDCPLGDPDH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GGDCPLGDPDH_IINMFFBHNOF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LHLEMDMCDDH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LHLEMDMCDDH&))((::PBYTE)hIl2Cpp + GGDCPLGDPDH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::GGDCPLGDPDH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GGDCPLGDPDH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GGDCPLGDPDH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGDCPLGDPDH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LHLEMDMCDDH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LHLEMDMCDDH&, ::System::Int32&))((::PBYTE)hIl2Cpp + GGDCPLGDPDH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGDCPLGDPDH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GGDCPLGDPDH IINMFFBHNOF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GGDCPLGDPDH EIFONLCJOPG)
	{
		return ((::GGDCPLGDPDH(*)(::FlatBuffers::ByteBuffer*, ::GGDCPLGDPDH))((::PBYTE)hIl2Cpp + GGDCPLGDPDH_IINMFFBHNOF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
