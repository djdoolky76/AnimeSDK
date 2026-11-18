#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NLPEOLJJCIA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FBAKMLNIOFJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FBAKMLNIOFJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7669F0)
#define FBAKMLNIOFJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FBAKMLNIOFJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FBAKMLNIOFJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7669E0)
#define FBAKMLNIOFJ_PNEGJPDGGPM_1_OFFSET UNITYSDK_OFFSET(0x157B7B80)
#define FBAKMLNIOFJ_PNEGJPDGGPM_OFFSET UNITYSDK_OFFSET(0x157B7B10)
#define FBAKMLNIOFJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x766A30)
#define FBAKMLNIOFJ___INIT_OFFSET UNITYSDK_OFFSET(0x7669C0)

inline static constexpr unsigned int FBAKMLNIOFJ_TypeDefinitionIndex = 14167;

struct alignas(8) FBAKMLNIOFJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAKMLNIOFJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FBAKMLNIOFJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NLPEOLJJCIA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NLPEOLJJCIA&))((::PBYTE)hIl2Cpp + FBAKMLNIOFJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::FBAKMLNIOFJ PNEGJPDGGPM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FBAKMLNIOFJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FBAKMLNIOFJ_PNEGJPDGGPM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NLPEOLJJCIA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NLPEOLJJCIA&, ::System::Int32&))((::PBYTE)hIl2Cpp + FBAKMLNIOFJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::FBAKMLNIOFJ PNEGJPDGGPM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FBAKMLNIOFJ EIFONLCJOPG)
	{
		return ((::FBAKMLNIOFJ(*)(::FlatBuffers::ByteBuffer*, ::FBAKMLNIOFJ))((::PBYTE)hIl2Cpp + FBAKMLNIOFJ_PNEGJPDGGPM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::FBAKMLNIOFJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FBAKMLNIOFJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FBAKMLNIOFJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAKMLNIOFJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAKMLNIOFJ_GHKKNCCLPAN_OFFSET))(this);
	}
};
