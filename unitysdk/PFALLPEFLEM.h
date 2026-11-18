#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NLEMBBDGPHK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PFALLPEFLEM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PFALLPEFLEM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8061B0)
#define PFALLPEFLEM_CECGCCMEEGP_1_OFFSET UNITYSDK_OFFSET(0x1AD96EE0)
#define PFALLPEFLEM_CECGCCMEEGP_OFFSET UNITYSDK_OFFSET(0x1AD96E80)
#define PFALLPEFLEM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PFALLPEFLEM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PFALLPEFLEM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8061A0)
#define PFALLPEFLEM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8061F0)
#define PFALLPEFLEM___INIT_OFFSET UNITYSDK_OFFSET(0x806180)

inline static constexpr unsigned int PFALLPEFLEM_TypeDefinitionIndex = 16692;

struct alignas(8) PFALLPEFLEM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFALLPEFLEM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFALLPEFLEM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NLEMBBDGPHK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NLEMBBDGPHK&, ::System::Int32&))((::PBYTE)hIl2Cpp + PFALLPEFLEM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::PFALLPEFLEM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PFALLPEFLEM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFALLPEFLEM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFALLPEFLEM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NLEMBBDGPHK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NLEMBBDGPHK&))((::PBYTE)hIl2Cpp + PFALLPEFLEM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFALLPEFLEM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PFALLPEFLEM CECGCCMEEGP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PFALLPEFLEM EIFONLCJOPG)
	{
		return ((::PFALLPEFLEM(*)(::FlatBuffers::ByteBuffer*, ::PFALLPEFLEM))((::PBYTE)hIl2Cpp + PFALLPEFLEM_CECGCCMEEGP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::PFALLPEFLEM CECGCCMEEGP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PFALLPEFLEM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFALLPEFLEM_CECGCCMEEGP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
