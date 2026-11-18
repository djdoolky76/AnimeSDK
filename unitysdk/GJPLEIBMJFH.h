#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NGJFPALIBJF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GJPLEIBMJFH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GJPLEIBMJFH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x811CD0)
#define GJPLEIBMJFH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GJPLEIBMJFH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GJPLEIBMJFH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x811CC0)
#define GJPLEIBMJFH_PMAFDKPEHBJ_1_OFFSET UNITYSDK_OFFSET(0x1B7BB970)
#define GJPLEIBMJFH_PMAFDKPEHBJ_OFFSET UNITYSDK_OFFSET(0x1B7BB8B0)
#define GJPLEIBMJFH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x811D10)
#define GJPLEIBMJFH___INIT_OFFSET UNITYSDK_OFFSET(0x811CA0)

inline static constexpr unsigned int GJPLEIBMJFH_TypeDefinitionIndex = 17481;

struct alignas(8) GJPLEIBMJFH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPLEIBMJFH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GJPLEIBMJFH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NGJFPALIBJF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NGJFPALIBJF&, ::System::Int32&))((::PBYTE)hIl2Cpp + GJPLEIBMJFH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::GJPLEIBMJFH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GJPLEIBMJFH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GJPLEIBMJFH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NGJFPALIBJF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NGJFPALIBJF&))((::PBYTE)hIl2Cpp + GJPLEIBMJFH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GJPLEIBMJFH PMAFDKPEHBJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GJPLEIBMJFH EIFONLCJOPG)
	{
		return ((::GJPLEIBMJFH(*)(::FlatBuffers::ByteBuffer*, ::GJPLEIBMJFH))((::PBYTE)hIl2Cpp + GJPLEIBMJFH_PMAFDKPEHBJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPLEIBMJFH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GJPLEIBMJFH PMAFDKPEHBJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GJPLEIBMJFH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GJPLEIBMJFH_PMAFDKPEHBJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPLEIBMJFH_PPOMNIFACOL_OFFSET))(this);
	}
};
