#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EEJFNOGBKNC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EELDIANEKIB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EELDIANEKIB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7633C0)
#define EELDIANEKIB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EELDIANEKIB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EELDIANEKIB_ILJPFAIPAII_1_OFFSET UNITYSDK_OFFSET(0x15767E80)
#define EELDIANEKIB_ILJPFAIPAII_OFFSET UNITYSDK_OFFSET(0x15767E20)
#define EELDIANEKIB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x763410)
#define EELDIANEKIB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x763400)
#define EELDIANEKIB___INIT_OFFSET UNITYSDK_OFFSET(0x7633A0)

inline static constexpr unsigned int EELDIANEKIB_TypeDefinitionIndex = 12092;

struct alignas(8) EELDIANEKIB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EELDIANEKIB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EELDIANEKIB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::EELDIANEKIB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EELDIANEKIB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EELDIANEKIB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EELDIANEKIB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::EELDIANEKIB ILJPFAIPAII(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EELDIANEKIB EIFONLCJOPG)
	{
		return ((::EELDIANEKIB(*)(::FlatBuffers::ByteBuffer*, ::EELDIANEKIB))((::PBYTE)hIl2Cpp + EELDIANEKIB_ILJPFAIPAII_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EELDIANEKIB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::EELDIANEKIB ILJPFAIPAII_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EELDIANEKIB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EELDIANEKIB_ILJPFAIPAII_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EEJFNOGBKNC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EEJFNOGBKNC&, ::System::Int32&))((::PBYTE)hIl2Cpp + EELDIANEKIB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EEJFNOGBKNC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EEJFNOGBKNC&))((::PBYTE)hIl2Cpp + EELDIANEKIB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
