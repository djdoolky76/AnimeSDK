#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JJJBGPCBJOP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FMGOLPHINLK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FMGOLPHINLK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76DF50)
#define FMGOLPHINLK_ELHIBNLGKKO_1_OFFSET UNITYSDK_OFFSET(0x15A77F30)
#define FMGOLPHINLK_ELHIBNLGKKO_OFFSET UNITYSDK_OFFSET(0x15A77EC0)
#define FMGOLPHINLK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FMGOLPHINLK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FMGOLPHINLK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x76DF40)
#define FMGOLPHINLK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76DF90)
#define FMGOLPHINLK___INIT_OFFSET UNITYSDK_OFFSET(0x76DF20)

inline static constexpr unsigned int FMGOLPHINLK_TypeDefinitionIndex = 12197;

struct alignas(8) FMGOLPHINLK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGOLPHINLK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMGOLPHINLK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FMGOLPHINLK ELHIBNLGKKO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FMGOLPHINLK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMGOLPHINLK_ELHIBNLGKKO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JJJBGPCBJOP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JJJBGPCBJOP&, ::System::Int32&))((::PBYTE)hIl2Cpp + FMGOLPHINLK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::FMGOLPHINLK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FMGOLPHINLK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMGOLPHINLK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGOLPHINLK_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGOLPHINLK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JJJBGPCBJOP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JJJBGPCBJOP&))((::PBYTE)hIl2Cpp + FMGOLPHINLK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::FMGOLPHINLK ELHIBNLGKKO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FMGOLPHINLK EIFONLCJOPG)
	{
		return ((::FMGOLPHINLK(*)(::FlatBuffers::ByteBuffer*, ::FMGOLPHINLK))((::PBYTE)hIl2Cpp + FMGOLPHINLK_ELHIBNLGKKO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
