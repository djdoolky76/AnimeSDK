#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GNHOJOIJMHO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HANAGKPAPFG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HANAGKPAPFG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81B6F0)
#define HANAGKPAPFG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HANAGKPAPFG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HANAGKPAPFG_JCFDDJFJDBK_1_OFFSET UNITYSDK_OFFSET(0x1BAD4900)
#define HANAGKPAPFG_JCFDDJFJDBK_OFFSET UNITYSDK_OFFSET(0x1BAD4890)
#define HANAGKPAPFG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81B6E0)
#define HANAGKPAPFG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81B730)
#define HANAGKPAPFG___INIT_OFFSET UNITYSDK_OFFSET(0x81B6C0)

inline static constexpr unsigned int HANAGKPAPFG_TypeDefinitionIndex = 12102;

struct alignas(8) HANAGKPAPFG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HANAGKPAPFG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HANAGKPAPFG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HANAGKPAPFG JCFDDJFJDBK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HANAGKPAPFG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HANAGKPAPFG_JCFDDJFJDBK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GNHOJOIJMHO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GNHOJOIJMHO&, ::System::Int32&))((::PBYTE)hIl2Cpp + HANAGKPAPFG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::HANAGKPAPFG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HANAGKPAPFG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HANAGKPAPFG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HANAGKPAPFG_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GNHOJOIJMHO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GNHOJOIJMHO&))((::PBYTE)hIl2Cpp + HANAGKPAPFG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HANAGKPAPFG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HANAGKPAPFG JCFDDJFJDBK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HANAGKPAPFG EIFONLCJOPG)
	{
		return ((::HANAGKPAPFG(*)(::FlatBuffers::ByteBuffer*, ::HANAGKPAPFG))((::PBYTE)hIl2Cpp + HANAGKPAPFG_JCFDDJFJDBK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
