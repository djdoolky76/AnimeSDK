#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CMDJIKDAEOI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AFNLODFOABA_BFAJNDIAHIG_1_OFFSET UNITYSDK_OFFSET(0x17747970)
#define AFNLODFOABA_BFAJNDIAHIG_OFFSET UNITYSDK_OFFSET(0x17747900)
#define AFNLODFOABA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AFNLODFOABA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ABF00)
#define AFNLODFOABA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AFNLODFOABA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AFNLODFOABA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7ABEF0)
#define AFNLODFOABA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7ABF40)
#define AFNLODFOABA___INIT_OFFSET UNITYSDK_OFFSET(0x7ABED0)

inline static constexpr unsigned int AFNLODFOABA_TypeDefinitionIndex = 10358;

struct alignas(8) AFNLODFOABA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFNLODFOABA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AFNLODFOABA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CMDJIKDAEOI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CMDJIKDAEOI&, ::System::Int32&))((::PBYTE)hIl2Cpp + AFNLODFOABA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::AFNLODFOABA BFAJNDIAHIG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AFNLODFOABA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AFNLODFOABA_BFAJNDIAHIG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::AFNLODFOABA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AFNLODFOABA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AFNLODFOABA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CMDJIKDAEOI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CMDJIKDAEOI&))((::PBYTE)hIl2Cpp + AFNLODFOABA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFNLODFOABA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFNLODFOABA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::AFNLODFOABA BFAJNDIAHIG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AFNLODFOABA EIFONLCJOPG)
	{
		return ((::AFNLODFOABA(*)(::FlatBuffers::ByteBuffer*, ::AFNLODFOABA))((::PBYTE)hIl2Cpp + AFNLODFOABA_BFAJNDIAHIG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
