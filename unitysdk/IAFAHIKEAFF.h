#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DKHCEFEIHPB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IAFAHIKEAFF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IAFAHIKEAFF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x77A2A0)
#define IAFAHIKEAFF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IAFAHIKEAFF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IAFAHIKEAFF_LHKFLFHGEKC_1_OFFSET UNITYSDK_OFFSET(0x16102010)
#define IAFAHIKEAFF_LHKFLFHGEKC_OFFSET UNITYSDK_OFFSET(0x16101FA0)
#define IAFAHIKEAFF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x77A280)
#define IAFAHIKEAFF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x77A290)
#define IAFAHIKEAFF___INIT_OFFSET UNITYSDK_OFFSET(0x77A260)

inline static constexpr unsigned int IAFAHIKEAFF_TypeDefinitionIndex = 10894;

struct alignas(8) IAFAHIKEAFF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFAHIKEAFF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IAFAHIKEAFF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IAFAHIKEAFF LHKFLFHGEKC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IAFAHIKEAFF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IAFAHIKEAFF_LHKFLFHGEKC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DKHCEFEIHPB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DKHCEFEIHPB&, ::System::Int32&))((::PBYTE)hIl2Cpp + IAFAHIKEAFF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFAHIKEAFF_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DKHCEFEIHPB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DKHCEFEIHPB&))((::PBYTE)hIl2Cpp + IAFAHIKEAFF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFAHIKEAFF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::IAFAHIKEAFF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IAFAHIKEAFF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IAFAHIKEAFF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IAFAHIKEAFF LHKFLFHGEKC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IAFAHIKEAFF EIFONLCJOPG)
	{
		return ((::IAFAHIKEAFF(*)(::FlatBuffers::ByteBuffer*, ::IAFAHIKEAFF))((::PBYTE)hIl2Cpp + IAFAHIKEAFF_LHKFLFHGEKC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
