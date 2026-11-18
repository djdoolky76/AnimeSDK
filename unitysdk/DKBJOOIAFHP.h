#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HEMLGBIEFHN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DKBJOOIAFHP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DKBJOOIAFHP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FB970)
#define DKBJOOIAFHP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DKBJOOIAFHP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DKBJOOIAFHP_IJFEEFOOHND_1_OFFSET UNITYSDK_OFFSET(0x1A591D30)
#define DKBJOOIAFHP_IJFEEFOOHND_OFFSET UNITYSDK_OFFSET(0x1A591CC0)
#define DKBJOOIAFHP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FB950)
#define DKBJOOIAFHP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FB960)
#define DKBJOOIAFHP___INIT_OFFSET UNITYSDK_OFFSET(0x7FB930)

inline static constexpr unsigned int DKBJOOIAFHP_TypeDefinitionIndex = 10572;

struct alignas(8) DKBJOOIAFHP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBJOOIAFHP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DKBJOOIAFHP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBJOOIAFHP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DKBJOOIAFHP IJFEEFOOHND(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DKBJOOIAFHP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DKBJOOIAFHP_IJFEEFOOHND_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HEMLGBIEFHN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HEMLGBIEFHN&, ::System::Int32&))((::PBYTE)hIl2Cpp + DKBJOOIAFHP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBJOOIAFHP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DKBJOOIAFHP IJFEEFOOHND_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DKBJOOIAFHP EIFONLCJOPG)
	{
		return ((::DKBJOOIAFHP(*)(::FlatBuffers::ByteBuffer*, ::DKBJOOIAFHP))((::PBYTE)hIl2Cpp + DKBJOOIAFHP_IJFEEFOOHND_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HEMLGBIEFHN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HEMLGBIEFHN&))((::PBYTE)hIl2Cpp + DKBJOOIAFHP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::DKBJOOIAFHP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DKBJOOIAFHP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DKBJOOIAFHP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
