#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AAKHHPMNOID.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define POEJFBAKCGN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define POEJFBAKCGN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x992250)
#define POEJFBAKCGN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define POEJFBAKCGN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define POEJFBAKCGN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x992290)
#define POEJFBAKCGN_OKHDHPCBNNC_1_OFFSET UNITYSDK_OFFSET(0x1FA56B20)
#define POEJFBAKCGN_OKHDHPCBNNC_OFFSET UNITYSDK_OFFSET(0x1FA56A20)
#define POEJFBAKCGN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x992240)
#define POEJFBAKCGN___INIT_OFFSET UNITYSDK_OFFSET(0x992220)

inline static constexpr unsigned int POEJFBAKCGN_TypeDefinitionIndex = 11553;

struct alignas(8) POEJFBAKCGN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + POEJFBAKCGN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POEJFBAKCGN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POEJFBAKCGN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::POEJFBAKCGN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::POEJFBAKCGN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POEJFBAKCGN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::POEJFBAKCGN OKHDHPCBNNC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::POEJFBAKCGN EIFONLCJOPG)
	{
		return ((::POEJFBAKCGN(*)(::FlatBuffers::ByteBuffer*, ::POEJFBAKCGN))((::PBYTE)hIl2Cpp + POEJFBAKCGN_OKHDHPCBNNC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AAKHHPMNOID& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AAKHHPMNOID&))((::PBYTE)hIl2Cpp + POEJFBAKCGN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::POEJFBAKCGN OKHDHPCBNNC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::POEJFBAKCGN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POEJFBAKCGN_OKHDHPCBNNC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POEJFBAKCGN_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AAKHHPMNOID& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AAKHHPMNOID&, ::System::Int32&))((::PBYTE)hIl2Cpp + POEJFBAKCGN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
