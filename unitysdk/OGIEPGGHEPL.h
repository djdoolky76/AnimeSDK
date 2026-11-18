#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DOFDPDAKDEO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OGIEPGGHEPL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OGIEPGGHEPL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E6C40)
#define OGIEPGGHEPL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OGIEPGGHEPL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OGIEPGGHEPL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E6C80)
#define OGIEPGGHEPL_PAPKOFAIFKG_1_OFFSET UNITYSDK_OFFSET(0x195C4260)
#define OGIEPGGHEPL_PAPKOFAIFKG_OFFSET UNITYSDK_OFFSET(0x195C41C0)
#define OGIEPGGHEPL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E6C90)
#define OGIEPGGHEPL___INIT_OFFSET UNITYSDK_OFFSET(0x7E6C20)

inline static constexpr unsigned int OGIEPGGHEPL_TypeDefinitionIndex = 14733;

struct alignas(8) OGIEPGGHEPL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIEPGGHEPL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGIEPGGHEPL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OGIEPGGHEPL PAPKOFAIFKG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OGIEPGGHEPL EIFONLCJOPG)
	{
		return ((::OGIEPGGHEPL(*)(::FlatBuffers::ByteBuffer*, ::OGIEPGGHEPL))((::PBYTE)hIl2Cpp + OGIEPGGHEPL_PAPKOFAIFKG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::OGIEPGGHEPL PAPKOFAIFKG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OGIEPGGHEPL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGIEPGGHEPL_PAPKOFAIFKG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DOFDPDAKDEO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DOFDPDAKDEO&))((::PBYTE)hIl2Cpp + OGIEPGGHEPL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::OGIEPGGHEPL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OGIEPGGHEPL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGIEPGGHEPL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DOFDPDAKDEO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DOFDPDAKDEO&, ::System::Int32&))((::PBYTE)hIl2Cpp + OGIEPGGHEPL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIEPGGHEPL_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIEPGGHEPL_PPOMNIFACOL_OFFSET))(this);
	}
};
