#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EDOKEDCMGEI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MLHKHOFIIMD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MLHKHOFIIMD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80BC80)
#define MLHKHOFIIMD_EONHHLDPLNB_1_OFFSET UNITYSDK_OFFSET(0x1B31B450)
#define MLHKHOFIIMD_EONHHLDPLNB_OFFSET UNITYSDK_OFFSET(0x1B31B1F0)
#define MLHKHOFIIMD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MLHKHOFIIMD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MLHKHOFIIMD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80BC60)
#define MLHKHOFIIMD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80BC70)
#define MLHKHOFIIMD___INIT_OFFSET UNITYSDK_OFFSET(0x80BC40)

inline static constexpr unsigned int MLHKHOFIIMD_TypeDefinitionIndex = 12107;

struct alignas(8) MLHKHOFIIMD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLHKHOFIIMD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MLHKHOFIIMD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EDOKEDCMGEI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EDOKEDCMGEI&))((::PBYTE)hIl2Cpp + MLHKHOFIIMD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MLHKHOFIIMD EONHHLDPLNB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MLHKHOFIIMD EIFONLCJOPG)
	{
		return ((::MLHKHOFIIMD(*)(::FlatBuffers::ByteBuffer*, ::MLHKHOFIIMD))((::PBYTE)hIl2Cpp + MLHKHOFIIMD_EONHHLDPLNB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLHKHOFIIMD_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EDOKEDCMGEI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EDOKEDCMGEI&, ::System::Int32&))((::PBYTE)hIl2Cpp + MLHKHOFIIMD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLHKHOFIIMD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MLHKHOFIIMD EONHHLDPLNB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MLHKHOFIIMD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MLHKHOFIIMD_EONHHLDPLNB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::MLHKHOFIIMD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MLHKHOFIIMD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MLHKHOFIIMD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
