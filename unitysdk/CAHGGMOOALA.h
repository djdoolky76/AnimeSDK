#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EPJIDKDAKCJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CAHGGMOOALA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CAHGGMOOALA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x807110)
#define CAHGGMOOALA_EELCDJKFJFH_1_OFFSET UNITYSDK_OFFSET(0x1ADB7210)
#define CAHGGMOOALA_EELCDJKFJFH_OFFSET UNITYSDK_OFFSET(0x1ADB71A0)
#define CAHGGMOOALA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CAHGGMOOALA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CAHGGMOOALA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x807150)
#define CAHGGMOOALA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x807160)
#define CAHGGMOOALA___INIT_OFFSET UNITYSDK_OFFSET(0x8070F0)

inline static constexpr unsigned int CAHGGMOOALA_TypeDefinitionIndex = 10324;

struct alignas(8) CAHGGMOOALA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAHGGMOOALA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CAHGGMOOALA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::CAHGGMOOALA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CAHGGMOOALA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CAHGGMOOALA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAHGGMOOALA_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EPJIDKDAKCJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EPJIDKDAKCJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + CAHGGMOOALA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAHGGMOOALA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EPJIDKDAKCJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EPJIDKDAKCJ&))((::PBYTE)hIl2Cpp + CAHGGMOOALA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::CAHGGMOOALA EELCDJKFJFH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CAHGGMOOALA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CAHGGMOOALA_EELCDJKFJFH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::CAHGGMOOALA EELCDJKFJFH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CAHGGMOOALA EIFONLCJOPG)
	{
		return ((::CAHGGMOOALA(*)(::FlatBuffers::ByteBuffer*, ::CAHGGMOOALA))((::PBYTE)hIl2Cpp + CAHGGMOOALA_EELCDJKFJFH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
