#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/INOBHEEBJIE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LOBONGHFBOF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LOBONGHFBOF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81CC10)
#define LOBONGHFBOF_BKPHPGKMLCP_1_OFFSET UNITYSDK_OFFSET(0x1BB13E60)
#define LOBONGHFBOF_BKPHPGKMLCP_OFFSET UNITYSDK_OFFSET(0x1BB13DC0)
#define LOBONGHFBOF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LOBONGHFBOF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LOBONGHFBOF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81CBF0)
#define LOBONGHFBOF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81CC00)
#define LOBONGHFBOF___INIT_OFFSET UNITYSDK_OFFSET(0x81CBD0)

inline static constexpr unsigned int LOBONGHFBOF_TypeDefinitionIndex = 14850;

struct alignas(8) LOBONGHFBOF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBONGHFBOF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LOBONGHFBOF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::INOBHEEBJIE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::INOBHEEBJIE&, ::System::Int32&))((::PBYTE)hIl2Cpp + LOBONGHFBOF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::INOBHEEBJIE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::INOBHEEBJIE&))((::PBYTE)hIl2Cpp + LOBONGHFBOF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBONGHFBOF_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBONGHFBOF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LOBONGHFBOF BKPHPGKMLCP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LOBONGHFBOF EIFONLCJOPG)
	{
		return ((::LOBONGHFBOF(*)(::FlatBuffers::ByteBuffer*, ::LOBONGHFBOF))((::PBYTE)hIl2Cpp + LOBONGHFBOF_BKPHPGKMLCP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::LOBONGHFBOF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LOBONGHFBOF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LOBONGHFBOF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LOBONGHFBOF BKPHPGKMLCP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LOBONGHFBOF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LOBONGHFBOF_BKPHPGKMLCP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
