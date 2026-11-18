#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ELMGDGOOELG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MNKKGHKGIML_ACLAGMICBMI_1_OFFSET UNITYSDK_OFFSET(0x1910F4F0)
#define MNKKGHKGIML_ACLAGMICBMI_OFFSET UNITYSDK_OFFSET(0x1910F250)
#define MNKKGHKGIML_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MNKKGHKGIML_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D9F80)
#define MNKKGHKGIML_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MNKKGHKGIML_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MNKKGHKGIML_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D9FC0)
#define MNKKGHKGIML_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D9FD0)
#define MNKKGHKGIML___INIT_OFFSET UNITYSDK_OFFSET(0x7D9F60)

inline static constexpr unsigned int MNKKGHKGIML_TypeDefinitionIndex = 9760;

struct alignas(8) MNKKGHKGIML
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKKGHKGIML_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNKKGHKGIML___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKKGHKGIML_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MNKKGHKGIML ACLAGMICBMI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MNKKGHKGIML EIFONLCJOPG)
	{
		return ((::MNKKGHKGIML(*)(::FlatBuffers::ByteBuffer*, ::MNKKGHKGIML))((::PBYTE)hIl2Cpp + MNKKGHKGIML_ACLAGMICBMI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::MNKKGHKGIML BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MNKKGHKGIML(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNKKGHKGIML_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ELMGDGOOELG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ELMGDGOOELG&, ::System::Int32&))((::PBYTE)hIl2Cpp + MNKKGHKGIML_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ELMGDGOOELG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ELMGDGOOELG&))((::PBYTE)hIl2Cpp + MNKKGHKGIML_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MNKKGHKGIML ACLAGMICBMI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MNKKGHKGIML(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNKKGHKGIML_ACLAGMICBMI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKKGHKGIML_PPOMNIFACOL_OFFSET))(this);
	}
};
