#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MNIFGBEIKPO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HFPDNMJJNGF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HFPDNMJJNGF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E3880)
#define HFPDNMJJNGF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HFPDNMJJNGF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HFPDNMJJNGF_LCEDLJHHGHC_1_OFFSET UNITYSDK_OFFSET(0x19532150)
#define HFPDNMJJNGF_LCEDLJHHGHC_OFFSET UNITYSDK_OFFSET(0x195320E0)
#define HFPDNMJJNGF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E3870)
#define HFPDNMJJNGF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E3860)
#define HFPDNMJJNGF___INIT_OFFSET UNITYSDK_OFFSET(0x7E3840)

inline static constexpr unsigned int HFPDNMJJNGF_TypeDefinitionIndex = 12467;

struct alignas(8) HFPDNMJJNGF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPDNMJJNGF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFPDNMJJNGF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPDNMJJNGF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MNIFGBEIKPO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MNIFGBEIKPO&, ::System::Int32&))((::PBYTE)hIl2Cpp + HFPDNMJJNGF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MNIFGBEIKPO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MNIFGBEIKPO&))((::PBYTE)hIl2Cpp + HFPDNMJJNGF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPDNMJJNGF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HFPDNMJJNGF LCEDLJHHGHC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HFPDNMJJNGF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFPDNMJJNGF_LCEDLJHHGHC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::HFPDNMJJNGF LCEDLJHHGHC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HFPDNMJJNGF EIFONLCJOPG)
	{
		return ((::HFPDNMJJNGF(*)(::FlatBuffers::ByteBuffer*, ::HFPDNMJJNGF))((::PBYTE)hIl2Cpp + HFPDNMJJNGF_LCEDLJHHGHC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::HFPDNMJJNGF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HFPDNMJJNGF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFPDNMJJNGF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
