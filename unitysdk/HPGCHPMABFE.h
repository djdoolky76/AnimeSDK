#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EGBOFPIEHBM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HPGCHPMABFE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HPGCHPMABFE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FCFE0)
#define HPGCHPMABFE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HPGCHPMABFE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HPGCHPMABFE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FD030)
#define HPGCHPMABFE_OLLJCMPCNJM_1_OFFSET UNITYSDK_OFFSET(0x1A5D13E0)
#define HPGCHPMABFE_OLLJCMPCNJM_OFFSET UNITYSDK_OFFSET(0x1A5D1180)
#define HPGCHPMABFE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FD020)
#define HPGCHPMABFE___INIT_OFFSET UNITYSDK_OFFSET(0x7FCFC0)

inline static constexpr unsigned int HPGCHPMABFE_TypeDefinitionIndex = 10077;

struct alignas(8) HPGCHPMABFE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGCHPMABFE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPGCHPMABFE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGCHPMABFE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::HPGCHPMABFE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HPGCHPMABFE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPGCHPMABFE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HPGCHPMABFE OLLJCMPCNJM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HPGCHPMABFE EIFONLCJOPG)
	{
		return ((::HPGCHPMABFE(*)(::FlatBuffers::ByteBuffer*, ::HPGCHPMABFE))((::PBYTE)hIl2Cpp + HPGCHPMABFE_OLLJCMPCNJM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGCHPMABFE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EGBOFPIEHBM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EGBOFPIEHBM&, ::System::Int32&))((::PBYTE)hIl2Cpp + HPGCHPMABFE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EGBOFPIEHBM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EGBOFPIEHBM&))((::PBYTE)hIl2Cpp + HPGCHPMABFE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::HPGCHPMABFE OLLJCMPCNJM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HPGCHPMABFE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPGCHPMABFE_OLLJCMPCNJM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
