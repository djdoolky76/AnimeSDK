#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KKJOOGKNPMO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ENDPKOCKJFH_APDOGPJPNMO_1_OFFSET UNITYSDK_OFFSET(0x17AAC0C0)
#define ENDPKOCKJFH_APDOGPJPNMO_OFFSET UNITYSDK_OFFSET(0x17AABE00)
#define ENDPKOCKJFH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ENDPKOCKJFH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B29A0)
#define ENDPKOCKJFH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ENDPKOCKJFH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ENDPKOCKJFH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B29E0)
#define ENDPKOCKJFH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B29F0)
#define ENDPKOCKJFH___INIT_OFFSET UNITYSDK_OFFSET(0x7B2980)

inline static constexpr unsigned int ENDPKOCKJFH_TypeDefinitionIndex = 12000;

struct alignas(8) ENDPKOCKJFH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDPKOCKJFH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ENDPKOCKJFH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::ENDPKOCKJFH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ENDPKOCKJFH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ENDPKOCKJFH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::ENDPKOCKJFH APDOGPJPNMO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ENDPKOCKJFH EIFONLCJOPG)
	{
		return ((::ENDPKOCKJFH(*)(::FlatBuffers::ByteBuffer*, ::ENDPKOCKJFH))((::PBYTE)hIl2Cpp + ENDPKOCKJFH_APDOGPJPNMO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KKJOOGKNPMO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KKJOOGKNPMO&, ::System::Int32&))((::PBYTE)hIl2Cpp + ENDPKOCKJFH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDPKOCKJFH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDPKOCKJFH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::ENDPKOCKJFH APDOGPJPNMO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ENDPKOCKJFH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ENDPKOCKJFH_APDOGPJPNMO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KKJOOGKNPMO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KKJOOGKNPMO&))((::PBYTE)hIl2Cpp + ENDPKOCKJFH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
