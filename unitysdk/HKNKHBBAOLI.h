#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OAGEGPEHNGB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HKNKHBBAOLI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HKNKHBBAOLI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80A310)
#define HKNKHBBAOLI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HKNKHBBAOLI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HKNKHBBAOLI_HENLKINGFME_1_OFFSET UNITYSDK_OFFSET(0x1B125530)
#define HKNKHBBAOLI_HENLKINGFME_OFFSET UNITYSDK_OFFSET(0x1B125490)
#define HKNKHBBAOLI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80A300)
#define HKNKHBBAOLI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80A2F0)
#define HKNKHBBAOLI___INIT_OFFSET UNITYSDK_OFFSET(0x80A2D0)

inline static constexpr unsigned int HKNKHBBAOLI_TypeDefinitionIndex = 10207;

struct alignas(8) HKNKHBBAOLI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNKHBBAOLI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKNKHBBAOLI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HKNKHBBAOLI HENLKINGFME(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HKNKHBBAOLI EIFONLCJOPG)
	{
		return ((::HKNKHBBAOLI(*)(::FlatBuffers::ByteBuffer*, ::HKNKHBBAOLI))((::PBYTE)hIl2Cpp + HKNKHBBAOLI_HENLKINGFME_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::HKNKHBBAOLI HENLKINGFME_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HKNKHBBAOLI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKNKHBBAOLI_HENLKINGFME_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNKHBBAOLI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OAGEGPEHNGB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OAGEGPEHNGB&, ::System::Int32&))((::PBYTE)hIl2Cpp + HKNKHBBAOLI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OAGEGPEHNGB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OAGEGPEHNGB&))((::PBYTE)hIl2Cpp + HKNKHBBAOLI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNKHBBAOLI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::HKNKHBBAOLI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HKNKHBBAOLI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKNKHBBAOLI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
