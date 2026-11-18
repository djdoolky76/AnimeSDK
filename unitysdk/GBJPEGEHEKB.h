#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JHKMFNKALBJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GBJPEGEHEKB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GBJPEGEHEKB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FC530)
#define GBJPEGEHEKB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GBJPEGEHEKB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GBJPEGEHEKB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FC520)
#define GBJPEGEHEKB_LLOLPGGLLIB_1_OFFSET UNITYSDK_OFFSET(0x1A5AF3D0)
#define GBJPEGEHEKB_LLOLPGGLLIB_OFFSET UNITYSDK_OFFSET(0x1A5AF360)
#define GBJPEGEHEKB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FC570)
#define GBJPEGEHEKB___INIT_OFFSET UNITYSDK_OFFSET(0x7FC500)

inline static constexpr unsigned int GBJPEGEHEKB_TypeDefinitionIndex = 10231;

struct alignas(8) GBJPEGEHEKB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJPEGEHEKB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GBJPEGEHEKB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GBJPEGEHEKB LLOLPGGLLIB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GBJPEGEHEKB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GBJPEGEHEKB_LLOLPGGLLIB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::UInt64 MCOHLHMKLIP, ::JHKMFNKALBJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::JHKMFNKALBJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + GBJPEGEHEKB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JHKMFNKALBJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JHKMFNKALBJ&))((::PBYTE)hIl2Cpp + GBJPEGEHEKB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GBJPEGEHEKB LLOLPGGLLIB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GBJPEGEHEKB EIFONLCJOPG)
	{
		return ((::GBJPEGEHEKB(*)(::FlatBuffers::ByteBuffer*, ::GBJPEGEHEKB))((::PBYTE)hIl2Cpp + GBJPEGEHEKB_LLOLPGGLLIB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::GBJPEGEHEKB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GBJPEGEHEKB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GBJPEGEHEKB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::UInt64>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJPEGEHEKB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJPEGEHEKB_GHKKNCCLPAN_OFFSET))(this);
	}
};
