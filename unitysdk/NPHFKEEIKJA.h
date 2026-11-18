#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CLHLOFOFLEJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPHFKEEIKJA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NPHFKEEIKJA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AB4E0)
#define NPHFKEEIKJA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NPHFKEEIKJA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NPHFKEEIKJA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8AB4C0)
#define NPHFKEEIKJA_OIIDJJDGINO_1_OFFSET UNITYSDK_OFFSET(0x1CFF06E0)
#define NPHFKEEIKJA_OIIDJJDGINO_OFFSET UNITYSDK_OFFSET(0x1CFF0670)
#define NPHFKEEIKJA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AB4D0)
#define NPHFKEEIKJA___INIT_OFFSET UNITYSDK_OFFSET(0x8AB4A0)

inline static constexpr unsigned int NPHFKEEIKJA_TypeDefinitionIndex = 10122;

struct alignas(8) NPHFKEEIKJA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHFKEEIKJA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPHFKEEIKJA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NPHFKEEIKJA OIIDJJDGINO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NPHFKEEIKJA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPHFKEEIKJA_OIIDJJDGINO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CLHLOFOFLEJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CLHLOFOFLEJ&))((::PBYTE)hIl2Cpp + NPHFKEEIKJA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CLHLOFOFLEJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CLHLOFOFLEJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPHFKEEIKJA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHFKEEIKJA_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHFKEEIKJA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::NPHFKEEIKJA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NPHFKEEIKJA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPHFKEEIKJA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NPHFKEEIKJA OIIDJJDGINO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NPHFKEEIKJA EIFONLCJOPG)
	{
		return ((::NPHFKEEIKJA(*)(::FlatBuffers::ByteBuffer*, ::NPHFKEEIKJA))((::PBYTE)hIl2Cpp + NPHFKEEIKJA_OIIDJJDGINO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
