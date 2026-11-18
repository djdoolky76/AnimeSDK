#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EDGJLKGIPJL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LDGALBBHCCE_ADBKCJGKICO_1_OFFSET UNITYSDK_OFFSET(0x18DF8250)
#define LDGALBBHCCE_ADBKCJGKICO_OFFSET UNITYSDK_OFFSET(0x18DF81B0)
#define LDGALBBHCCE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LDGALBBHCCE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D75F0)
#define LDGALBBHCCE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LDGALBBHCCE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LDGALBBHCCE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D75D0)
#define LDGALBBHCCE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D75E0)
#define LDGALBBHCCE___INIT_OFFSET UNITYSDK_OFFSET(0x7D75B0)

inline static constexpr unsigned int LDGALBBHCCE_TypeDefinitionIndex = 12315;

struct alignas(8) LDGALBBHCCE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGALBBHCCE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LDGALBBHCCE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EDGJLKGIPJL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EDGJLKGIPJL&, ::System::Int32&))((::PBYTE)hIl2Cpp + LDGALBBHCCE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGALBBHCCE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LDGALBBHCCE ADBKCJGKICO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LDGALBBHCCE EIFONLCJOPG)
	{
		return ((::LDGALBBHCCE(*)(::FlatBuffers::ByteBuffer*, ::LDGALBBHCCE))((::PBYTE)hIl2Cpp + LDGALBBHCCE_ADBKCJGKICO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::LDGALBBHCCE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LDGALBBHCCE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LDGALBBHCCE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EDGJLKGIPJL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EDGJLKGIPJL&))((::PBYTE)hIl2Cpp + LDGALBBHCCE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGALBBHCCE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::LDGALBBHCCE ADBKCJGKICO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LDGALBBHCCE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LDGALBBHCCE_ADBKCJGKICO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
