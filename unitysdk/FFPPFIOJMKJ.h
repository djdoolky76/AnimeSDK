#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KENBFELAEOG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FFPPFIOJMKJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FFPPFIOJMKJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E34C0)
#define FFPPFIOJMKJ_GCPBNMAOJMJ_1_OFFSET UNITYSDK_OFFSET(0x19529C20)
#define FFPPFIOJMKJ_GCPBNMAOJMJ_OFFSET UNITYSDK_OFFSET(0x19529BB0)
#define FFPPFIOJMKJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FFPPFIOJMKJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FFPPFIOJMKJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E34B0)
#define FFPPFIOJMKJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E3500)
#define FFPPFIOJMKJ___INIT_OFFSET UNITYSDK_OFFSET(0x7E3490)

inline static constexpr unsigned int FFPPFIOJMKJ_TypeDefinitionIndex = 16982;

struct alignas(8) FFPPFIOJMKJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPPFIOJMKJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFPPFIOJMKJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KENBFELAEOG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KENBFELAEOG&, ::System::Int32&))((::PBYTE)hIl2Cpp + FFPPFIOJMKJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::FFPPFIOJMKJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FFPPFIOJMKJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFPPFIOJMKJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPPFIOJMKJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KENBFELAEOG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KENBFELAEOG&))((::PBYTE)hIl2Cpp + FFPPFIOJMKJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::FFPPFIOJMKJ GCPBNMAOJMJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FFPPFIOJMKJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFPPFIOJMKJ_GCPBNMAOJMJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::FFPPFIOJMKJ GCPBNMAOJMJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FFPPFIOJMKJ EIFONLCJOPG)
	{
		return ((::FFPPFIOJMKJ(*)(::FlatBuffers::ByteBuffer*, ::FFPPFIOJMKJ))((::PBYTE)hIl2Cpp + FFPPFIOJMKJ_GCPBNMAOJMJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPPFIOJMKJ_GHKKNCCLPAN_OFFSET))(this);
	}
};
