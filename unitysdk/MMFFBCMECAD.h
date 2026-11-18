#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ICHMNPEDHOO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MMFFBCMECAD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MMFFBCMECAD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EF8F0)
#define MMFFBCMECAD_DAMPFAACAFJ_1_OFFSET UNITYSDK_OFFSET(0x19DB7710)
#define MMFFBCMECAD_DAMPFAACAFJ_OFFSET UNITYSDK_OFFSET(0x19DB7570)
#define MMFFBCMECAD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MMFFBCMECAD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MMFFBCMECAD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EF930)
#define MMFFBCMECAD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EF8E0)
#define MMFFBCMECAD___INIT_OFFSET UNITYSDK_OFFSET(0x7EF8C0)

inline static constexpr unsigned int MMFFBCMECAD_TypeDefinitionIndex = 9410;

struct alignas(8) MMFFBCMECAD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFFBCMECAD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMFFBCMECAD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MMFFBCMECAD DAMPFAACAFJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MMFFBCMECAD EIFONLCJOPG)
	{
		return ((::MMFFBCMECAD(*)(::FlatBuffers::ByteBuffer*, ::MMFFBCMECAD))((::PBYTE)hIl2Cpp + MMFFBCMECAD_DAMPFAACAFJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFFBCMECAD_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ICHMNPEDHOO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ICHMNPEDHOO&))((::PBYTE)hIl2Cpp + MMFFBCMECAD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFFBCMECAD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MMFFBCMECAD DAMPFAACAFJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MMFFBCMECAD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMFFBCMECAD_DAMPFAACAFJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::MMFFBCMECAD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MMFFBCMECAD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMFFBCMECAD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ICHMNPEDHOO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ICHMNPEDHOO&, ::System::Int32&))((::PBYTE)hIl2Cpp + MMFFBCMECAD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
