#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KLHCLDPFNCC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EONJAJBPIKH_BALACABCFCE_1_OFFSET UNITYSDK_OFFSET(0x19C13750)
#define EONJAJBPIKH_BALACABCFCE_OFFSET UNITYSDK_OFFSET(0x19C136E0)
#define EONJAJBPIKH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EONJAJBPIKH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EE390)
#define EONJAJBPIKH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EONJAJBPIKH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EONJAJBPIKH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EE3E0)
#define EONJAJBPIKH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EE3D0)
#define EONJAJBPIKH___INIT_OFFSET UNITYSDK_OFFSET(0x7EE370)

inline static constexpr unsigned int EONJAJBPIKH_TypeDefinitionIndex = 12956;

struct alignas(8) EONJAJBPIKH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EONJAJBPIKH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EONJAJBPIKH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EONJAJBPIKH BALACABCFCE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EONJAJBPIKH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EONJAJBPIKH_BALACABCFCE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::EONJAJBPIKH BALACABCFCE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EONJAJBPIKH EIFONLCJOPG)
	{
		return ((::EONJAJBPIKH(*)(::FlatBuffers::ByteBuffer*, ::EONJAJBPIKH))((::PBYTE)hIl2Cpp + EONJAJBPIKH_BALACABCFCE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::EONJAJBPIKH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EONJAJBPIKH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EONJAJBPIKH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EONJAJBPIKH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EONJAJBPIKH_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KLHCLDPFNCC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KLHCLDPFNCC&, ::System::Int32&))((::PBYTE)hIl2Cpp + EONJAJBPIKH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KLHCLDPFNCC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KLHCLDPFNCC&))((::PBYTE)hIl2Cpp + EONJAJBPIKH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
