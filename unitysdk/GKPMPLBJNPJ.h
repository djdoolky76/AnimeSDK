#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HDAPIMIAHFF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GKPMPLBJNPJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GKPMPLBJNPJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x756A80)
#define GKPMPLBJNPJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GKPMPLBJNPJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GKPMPLBJNPJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x756AC0)
#define GKPMPLBJNPJ_NKFELPHEEEP_1_OFFSET UNITYSDK_OFFSET(0x152CEA40)
#define GKPMPLBJNPJ_NKFELPHEEEP_OFFSET UNITYSDK_OFFSET(0x152CE9A0)
#define GKPMPLBJNPJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x756A70)
#define GKPMPLBJNPJ___INIT_OFFSET UNITYSDK_OFFSET(0x756A50)

inline static constexpr unsigned int GKPMPLBJNPJ_TypeDefinitionIndex = 16071;

struct alignas(8) GKPMPLBJNPJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPMPLBJNPJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GKPMPLBJNPJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPMPLBJNPJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPMPLBJNPJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GKPMPLBJNPJ NKFELPHEEEP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GKPMPLBJNPJ EIFONLCJOPG)
	{
		return ((::GKPMPLBJNPJ(*)(::FlatBuffers::ByteBuffer*, ::GKPMPLBJNPJ))((::PBYTE)hIl2Cpp + GKPMPLBJNPJ_NKFELPHEEEP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::GKPMPLBJNPJ NKFELPHEEEP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GKPMPLBJNPJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GKPMPLBJNPJ_NKFELPHEEEP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HDAPIMIAHFF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HDAPIMIAHFF&))((::PBYTE)hIl2Cpp + GKPMPLBJNPJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::GKPMPLBJNPJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GKPMPLBJNPJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GKPMPLBJNPJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HDAPIMIAHFF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HDAPIMIAHFF&, ::System::Int32&))((::PBYTE)hIl2Cpp + GKPMPLBJNPJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
