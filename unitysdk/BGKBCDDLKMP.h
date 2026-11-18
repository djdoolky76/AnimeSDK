#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JMPEHHCKNBD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BGKBCDDLKMP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BGKBCDDLKMP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F9750)
#define BGKBCDDLKMP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BGKBCDDLKMP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BGKBCDDLKMP_KCDMPGBDEOA_1_OFFSET UNITYSDK_OFFSET(0x1A532C40)
#define BGKBCDDLKMP_KCDMPGBDEOA_OFFSET UNITYSDK_OFFSET(0x1A532BD0)
#define BGKBCDDLKMP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F9740)
#define BGKBCDDLKMP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F9790)
#define BGKBCDDLKMP___INIT_OFFSET UNITYSDK_OFFSET(0x7F9720)

inline static constexpr unsigned int BGKBCDDLKMP_TypeDefinitionIndex = 9751;

struct alignas(8) BGKBCDDLKMP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKBCDDLKMP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BGKBCDDLKMP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JMPEHHCKNBD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JMPEHHCKNBD&, ::System::Int32&))((::PBYTE)hIl2Cpp + BGKBCDDLKMP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKBCDDLKMP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::BGKBCDDLKMP KCDMPGBDEOA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BGKBCDDLKMP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BGKBCDDLKMP_KCDMPGBDEOA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::BGKBCDDLKMP KCDMPGBDEOA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BGKBCDDLKMP EIFONLCJOPG)
	{
		return ((::BGKBCDDLKMP(*)(::FlatBuffers::ByteBuffer*, ::BGKBCDDLKMP))((::PBYTE)hIl2Cpp + BGKBCDDLKMP_KCDMPGBDEOA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::BGKBCDDLKMP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BGKBCDDLKMP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BGKBCDDLKMP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKBCDDLKMP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JMPEHHCKNBD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JMPEHHCKNBD&))((::PBYTE)hIl2Cpp + BGKBCDDLKMP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
