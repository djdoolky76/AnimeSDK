#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JIJHNDADGPM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OEIHGMOEKOB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OEIHGMOEKOB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DA860)
#define OEIHGMOEKOB_FMMBCIKNCML_1_OFFSET UNITYSDK_OFFSET(0x191333F0)
#define OEIHGMOEKOB_FMMBCIKNCML_OFFSET UNITYSDK_OFFSET(0x19133380)
#define OEIHGMOEKOB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OEIHGMOEKOB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OEIHGMOEKOB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DA8A0)
#define OEIHGMOEKOB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DA850)
#define OEIHGMOEKOB___INIT_OFFSET UNITYSDK_OFFSET(0x7DA830)

inline static constexpr unsigned int OEIHGMOEKOB_TypeDefinitionIndex = 14487;

struct alignas(8) OEIHGMOEKOB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEIHGMOEKOB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OEIHGMOEKOB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OEIHGMOEKOB FMMBCIKNCML(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OEIHGMOEKOB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OEIHGMOEKOB_FMMBCIKNCML_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JIJHNDADGPM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JIJHNDADGPM&))((::PBYTE)hIl2Cpp + OEIHGMOEKOB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::OEIHGMOEKOB FMMBCIKNCML_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OEIHGMOEKOB EIFONLCJOPG)
	{
		return ((::OEIHGMOEKOB(*)(::FlatBuffers::ByteBuffer*, ::OEIHGMOEKOB))((::PBYTE)hIl2Cpp + OEIHGMOEKOB_FMMBCIKNCML_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEIHGMOEKOB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEIHGMOEKOB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::OEIHGMOEKOB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OEIHGMOEKOB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OEIHGMOEKOB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JIJHNDADGPM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JIJHNDADGPM&, ::System::Int32&))((::PBYTE)hIl2Cpp + OEIHGMOEKOB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
