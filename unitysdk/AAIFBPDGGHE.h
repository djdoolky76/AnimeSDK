#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HAKNOJAEJKN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AAIFBPDGGHE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AAIFBPDGGHE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FAAE0)
#define AAIFBPDGGHE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AAIFBPDGGHE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AAIFBPDGGHE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FAB20)
#define AAIFBPDGGHE_LOGIJOHHDPD_1_OFFSET UNITYSDK_OFFSET(0x1A567C90)
#define AAIFBPDGGHE_LOGIJOHHDPD_OFFSET UNITYSDK_OFFSET(0x1A567AF0)
#define AAIFBPDGGHE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FAAD0)
#define AAIFBPDGGHE___INIT_OFFSET UNITYSDK_OFFSET(0x7FAAB0)

inline static constexpr unsigned int AAIFBPDGGHE_TypeDefinitionIndex = 16430;

struct alignas(8) AAIFBPDGGHE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAIFBPDGGHE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AAIFBPDGGHE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AAIFBPDGGHE LOGIJOHHDPD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AAIFBPDGGHE EIFONLCJOPG)
	{
		return ((::AAIFBPDGGHE(*)(::FlatBuffers::ByteBuffer*, ::AAIFBPDGGHE))((::PBYTE)hIl2Cpp + AAIFBPDGGHE_LOGIJOHHDPD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAIFBPDGGHE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::AAIFBPDGGHE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AAIFBPDGGHE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AAIFBPDGGHE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAIFBPDGGHE_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HAKNOJAEJKN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HAKNOJAEJKN&))((::PBYTE)hIl2Cpp + AAIFBPDGGHE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::AAIFBPDGGHE LOGIJOHHDPD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AAIFBPDGGHE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AAIFBPDGGHE_LOGIJOHHDPD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HAKNOJAEJKN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HAKNOJAEJKN&, ::System::Int32&))((::PBYTE)hIl2Cpp + AAIFBPDGGHE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
