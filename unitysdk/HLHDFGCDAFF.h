#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CLHDJGBLNBD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HLHDFGCDAFF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HLHDFGCDAFF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76EEA0)
#define HLHDFGCDAFF_DOKPBMOJIJD_1_OFFSET UNITYSDK_OFFSET(0x15A8FBC0)
#define HLHDFGCDAFF_DOKPBMOJIJD_OFFSET UNITYSDK_OFFSET(0x15A8FB50)
#define HLHDFGCDAFF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HLHDFGCDAFF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HLHDFGCDAFF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x76EEF0)
#define HLHDFGCDAFF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76EEE0)
#define HLHDFGCDAFF___INIT_OFFSET UNITYSDK_OFFSET(0x76EE80)

inline static constexpr unsigned int HLHDFGCDAFF_TypeDefinitionIndex = 10353;

struct alignas(8) HLHDFGCDAFF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHDFGCDAFF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLHDFGCDAFF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HLHDFGCDAFF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HLHDFGCDAFF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLHDFGCDAFF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HLHDFGCDAFF DOKPBMOJIJD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HLHDFGCDAFF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLHDFGCDAFF_DOKPBMOJIJD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHDFGCDAFF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HLHDFGCDAFF DOKPBMOJIJD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HLHDFGCDAFF EIFONLCJOPG)
	{
		return ((::HLHDFGCDAFF(*)(::FlatBuffers::ByteBuffer*, ::HLHDFGCDAFF))((::PBYTE)hIl2Cpp + HLHDFGCDAFF_DOKPBMOJIJD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHDFGCDAFF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CLHDJGBLNBD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CLHDJGBLNBD&))((::PBYTE)hIl2Cpp + HLHDFGCDAFF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CLHDJGBLNBD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CLHDJGBLNBD&, ::System::Int32&))((::PBYTE)hIl2Cpp + HLHDFGCDAFF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
