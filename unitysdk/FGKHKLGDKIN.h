#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AIIMPEPGEKL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FGKHKLGDKIN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FGKHKLGDKIN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FC0D0)
#define FGKHKLGDKIN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FGKHKLGDKIN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FGKHKLGDKIN_GIIHGLNNPOM_1_OFFSET UNITYSDK_OFFSET(0x1A5A5610)
#define FGKHKLGDKIN_GIIHGLNNPOM_OFFSET UNITYSDK_OFFSET(0x1A5A55A0)
#define FGKHKLGDKIN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FC0C0)
#define FGKHKLGDKIN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FC110)
#define FGKHKLGDKIN___INIT_OFFSET UNITYSDK_OFFSET(0x7FC0A0)

inline static constexpr unsigned int FGKHKLGDKIN_TypeDefinitionIndex = 12169;

struct alignas(8) FGKHKLGDKIN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGKHKLGDKIN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FGKHKLGDKIN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AIIMPEPGEKL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AIIMPEPGEKL&, ::System::Int32&))((::PBYTE)hIl2Cpp + FGKHKLGDKIN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::FGKHKLGDKIN GIIHGLNNPOM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FGKHKLGDKIN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FGKHKLGDKIN_GIIHGLNNPOM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::FGKHKLGDKIN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FGKHKLGDKIN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FGKHKLGDKIN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AIIMPEPGEKL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AIIMPEPGEKL&))((::PBYTE)hIl2Cpp + FGKHKLGDKIN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::FGKHKLGDKIN GIIHGLNNPOM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FGKHKLGDKIN EIFONLCJOPG)
	{
		return ((::FGKHKLGDKIN(*)(::FlatBuffers::ByteBuffer*, ::FGKHKLGDKIN))((::PBYTE)hIl2Cpp + FGKHKLGDKIN_GIIHGLNNPOM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGKHKLGDKIN_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGKHKLGDKIN_GHKKNCCLPAN_OFFSET))(this);
	}
};
