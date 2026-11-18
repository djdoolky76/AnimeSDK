#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EEHKJHDNDIH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DEJLENHBCIF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DEJLENHBCIF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E29E0)
#define DEJLENHBCIF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DEJLENHBCIF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DEJLENHBCIF_JAKGNIJGIFE_1_OFFSET UNITYSDK_OFFSET(0x19509760)
#define DEJLENHBCIF_JAKGNIJGIFE_OFFSET UNITYSDK_OFFSET(0x19509700)
#define DEJLENHBCIF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E29D0)
#define DEJLENHBCIF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E29C0)
#define DEJLENHBCIF___INIT_OFFSET UNITYSDK_OFFSET(0x7E29A0)

inline static constexpr unsigned int DEJLENHBCIF_TypeDefinitionIndex = 15928;

struct alignas(8) DEJLENHBCIF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJLENHBCIF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEJLENHBCIF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJLENHBCIF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJLENHBCIF_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EEHKJHDNDIH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EEHKJHDNDIH&, ::System::Int32&))((::PBYTE)hIl2Cpp + DEJLENHBCIF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::DEJLENHBCIF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DEJLENHBCIF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEJLENHBCIF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DEJLENHBCIF JAKGNIJGIFE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DEJLENHBCIF EIFONLCJOPG)
	{
		return ((::DEJLENHBCIF(*)(::FlatBuffers::ByteBuffer*, ::DEJLENHBCIF))((::PBYTE)hIl2Cpp + DEJLENHBCIF_JAKGNIJGIFE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EEHKJHDNDIH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EEHKJHDNDIH&))((::PBYTE)hIl2Cpp + DEJLENHBCIF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::DEJLENHBCIF JAKGNIJGIFE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DEJLENHBCIF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEJLENHBCIF_JAKGNIJGIFE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
