#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GIGMOMIMJEL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CFAEGCDCOJN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CFAEGCDCOJN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F1DE0)
#define CFAEGCDCOJN_GBIJBGMHGJM_1_OFFSET UNITYSDK_OFFSET(0x19F2A7D0)
#define CFAEGCDCOJN_GBIJBGMHGJM_OFFSET UNITYSDK_OFFSET(0x19F2A770)
#define CFAEGCDCOJN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CFAEGCDCOJN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CFAEGCDCOJN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F1E20)
#define CFAEGCDCOJN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F1DD0)
#define CFAEGCDCOJN___INIT_OFFSET UNITYSDK_OFFSET(0x7F1DB0)

inline static constexpr unsigned int CFAEGCDCOJN_TypeDefinitionIndex = 16470;

struct alignas(8) CFAEGCDCOJN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFAEGCDCOJN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CFAEGCDCOJN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFAEGCDCOJN_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GIGMOMIMJEL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GIGMOMIMJEL&))((::PBYTE)hIl2Cpp + CFAEGCDCOJN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::CFAEGCDCOJN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CFAEGCDCOJN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CFAEGCDCOJN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CFAEGCDCOJN GBIJBGMHGJM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CFAEGCDCOJN EIFONLCJOPG)
	{
		return ((::CFAEGCDCOJN(*)(::FlatBuffers::ByteBuffer*, ::CFAEGCDCOJN))((::PBYTE)hIl2Cpp + CFAEGCDCOJN_GBIJBGMHGJM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::CFAEGCDCOJN GBIJBGMHGJM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CFAEGCDCOJN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CFAEGCDCOJN_GBIJBGMHGJM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GIGMOMIMJEL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GIGMOMIMJEL&, ::System::Int32&))((::PBYTE)hIl2Cpp + CFAEGCDCOJN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFAEGCDCOJN_GHKKNCCLPAN_OFFSET))(this);
	}
};
