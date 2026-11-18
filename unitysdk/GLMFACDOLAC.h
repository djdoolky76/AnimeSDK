#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BAPHBMKPELM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GLMFACDOLAC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GLMFACDOLAC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x809CB0)
#define GLMFACDOLAC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GLMFACDOLAC_GGJLOEDDBBI_1_OFFSET UNITYSDK_OFFSET(0x1B118AB0)
#define GLMFACDOLAC_GGJLOEDDBBI_OFFSET UNITYSDK_OFFSET(0x1B118A50)
#define GLMFACDOLAC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GLMFACDOLAC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x809CF0)
#define GLMFACDOLAC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x809CA0)
#define GLMFACDOLAC___INIT_OFFSET UNITYSDK_OFFSET(0x809C80)

inline static constexpr unsigned int GLMFACDOLAC_TypeDefinitionIndex = 10126;

struct alignas(8) GLMFACDOLAC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMFACDOLAC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLMFACDOLAC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMFACDOLAC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMFACDOLAC_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BAPHBMKPELM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BAPHBMKPELM&))((::PBYTE)hIl2Cpp + GLMFACDOLAC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::GLMFACDOLAC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GLMFACDOLAC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLMFACDOLAC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BAPHBMKPELM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BAPHBMKPELM&, ::System::Int32&))((::PBYTE)hIl2Cpp + GLMFACDOLAC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::GLMFACDOLAC GGJLOEDDBBI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GLMFACDOLAC EIFONLCJOPG)
	{
		return ((::GLMFACDOLAC(*)(::FlatBuffers::ByteBuffer*, ::GLMFACDOLAC))((::PBYTE)hIl2Cpp + GLMFACDOLAC_GGJLOEDDBBI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::GLMFACDOLAC GGJLOEDDBBI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GLMFACDOLAC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLMFACDOLAC_GGJLOEDDBBI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
