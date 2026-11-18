#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CGHKIHCDOFB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PBKMPGNPLPF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PBKMPGNPLPF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DAB70)
#define PBKMPGNPLPF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PBKMPGNPLPF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PBKMPGNPLPF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DAB60)
#define PBKMPGNPLPF_NEHCJAJFJJF_1_OFFSET UNITYSDK_OFFSET(0x1913A5A0)
#define PBKMPGNPLPF_NEHCJAJFJJF_OFFSET UNITYSDK_OFFSET(0x1913A3A0)
#define PBKMPGNPLPF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DABB0)
#define PBKMPGNPLPF___INIT_OFFSET UNITYSDK_OFFSET(0x7DAB40)

inline static constexpr unsigned int PBKMPGNPLPF_TypeDefinitionIndex = 10742;

struct alignas(8) PBKMPGNPLPF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBKMPGNPLPF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PBKMPGNPLPF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBKMPGNPLPF_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CGHKIHCDOFB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CGHKIHCDOFB&))((::PBYTE)hIl2Cpp + PBKMPGNPLPF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PBKMPGNPLPF NEHCJAJFJJF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PBKMPGNPLPF EIFONLCJOPG)
	{
		return ((::PBKMPGNPLPF(*)(::FlatBuffers::ByteBuffer*, ::PBKMPGNPLPF))((::PBYTE)hIl2Cpp + PBKMPGNPLPF_NEHCJAJFJJF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CGHKIHCDOFB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CGHKIHCDOFB&, ::System::Int32&))((::PBYTE)hIl2Cpp + PBKMPGNPLPF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::PBKMPGNPLPF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PBKMPGNPLPF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PBKMPGNPLPF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PBKMPGNPLPF NEHCJAJFJJF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PBKMPGNPLPF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PBKMPGNPLPF_NEHCJAJFJJF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBKMPGNPLPF_PPOMNIFACOL_OFFSET))(this);
	}
};
