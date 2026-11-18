#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JGACIEGHCON.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HIFGMKFNLMI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HIFGMKFNLMI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80DC00)
#define HIFGMKFNLMI_BOMKMNLNEAK_1_OFFSET UNITYSDK_OFFSET(0x1B4DE920)
#define HIFGMKFNLMI_BOMKMNLNEAK_OFFSET UNITYSDK_OFFSET(0x1B4DE8B0)
#define HIFGMKFNLMI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HIFGMKFNLMI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HIFGMKFNLMI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80DBF0)
#define HIFGMKFNLMI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80DBE0)
#define HIFGMKFNLMI___INIT_OFFSET UNITYSDK_OFFSET(0x80DBC0)

inline static constexpr unsigned int HIFGMKFNLMI_TypeDefinitionIndex = 13848;

struct alignas(8) HIFGMKFNLMI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFGMKFNLMI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HIFGMKFNLMI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFGMKFNLMI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HIFGMKFNLMI BOMKMNLNEAK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HIFGMKFNLMI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HIFGMKFNLMI_BOMKMNLNEAK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JGACIEGHCON& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JGACIEGHCON&))((::PBYTE)hIl2Cpp + HIFGMKFNLMI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFGMKFNLMI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HIFGMKFNLMI BOMKMNLNEAK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HIFGMKFNLMI EIFONLCJOPG)
	{
		return ((::HIFGMKFNLMI(*)(::FlatBuffers::ByteBuffer*, ::HIFGMKFNLMI))((::PBYTE)hIl2Cpp + HIFGMKFNLMI_BOMKMNLNEAK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JGACIEGHCON& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JGACIEGHCON&, ::System::Int32&))((::PBYTE)hIl2Cpp + HIFGMKFNLMI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::HIFGMKFNLMI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HIFGMKFNLMI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HIFGMKFNLMI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
