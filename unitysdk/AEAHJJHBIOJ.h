#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ELNECDIHJFA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AEAHJJHBIOJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AEAHJJHBIOJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x815EC0)
#define AEAHJJHBIOJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AEAHJJHBIOJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AEAHJJHBIOJ_JPKGKFIPKLG_1_OFFSET UNITYSDK_OFFSET(0x1B982370)
#define AEAHJJHBIOJ_JPKGKFIPKLG_OFFSET UNITYSDK_OFFSET(0x1B982070)
#define AEAHJJHBIOJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x815EA0)
#define AEAHJJHBIOJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x815EB0)
#define AEAHJJHBIOJ___INIT_OFFSET UNITYSDK_OFFSET(0x815E80)

inline static constexpr unsigned int AEAHJJHBIOJ_TypeDefinitionIndex = 9896;

struct alignas(8) AEAHJJHBIOJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEAHJJHBIOJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AEAHJJHBIOJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AEAHJJHBIOJ JPKGKFIPKLG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AEAHJJHBIOJ EIFONLCJOPG)
	{
		return ((::AEAHJJHBIOJ(*)(::FlatBuffers::ByteBuffer*, ::AEAHJJHBIOJ))((::PBYTE)hIl2Cpp + AEAHJJHBIOJ_JPKGKFIPKLG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ELNECDIHJFA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ELNECDIHJFA&, ::System::Int32&))((::PBYTE)hIl2Cpp + AEAHJJHBIOJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEAHJJHBIOJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::AEAHJJHBIOJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AEAHJJHBIOJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AEAHJJHBIOJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEAHJJHBIOJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::AEAHJJHBIOJ JPKGKFIPKLG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AEAHJJHBIOJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AEAHJJHBIOJ_JPKGKFIPKLG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ELNECDIHJFA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ELNECDIHJFA&))((::PBYTE)hIl2Cpp + AEAHJJHBIOJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
