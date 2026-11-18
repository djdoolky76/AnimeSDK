#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FMMBMCOEOBL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OKOLIIFHEKH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OKOLIIFHEKH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x85E280)
#define OKOLIIFHEKH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OKOLIIFHEKH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OKOLIIFHEKH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x85E260)
#define OKOLIIFHEKH_MBMKLLIPDOO_1_OFFSET UNITYSDK_OFFSET(0x1CD00000)
#define OKOLIIFHEKH_MBMKLLIPDOO_OFFSET UNITYSDK_OFFSET(0x1CCFFF90)
#define OKOLIIFHEKH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x85E270)
#define OKOLIIFHEKH___INIT_OFFSET UNITYSDK_OFFSET(0x85E240)

inline static constexpr unsigned int OKOLIIFHEKH_TypeDefinitionIndex = 11453;

struct alignas(8) OKOLIIFHEKH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOLIIFHEKH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OKOLIIFHEKH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OKOLIIFHEKH MBMKLLIPDOO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OKOLIIFHEKH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OKOLIIFHEKH_MBMKLLIPDOO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FMMBMCOEOBL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FMMBMCOEOBL&, ::System::Int32&))((::PBYTE)hIl2Cpp + OKOLIIFHEKH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOLIIFHEKH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOLIIFHEKH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::OKOLIIFHEKH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OKOLIIFHEKH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OKOLIIFHEKH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OKOLIIFHEKH MBMKLLIPDOO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OKOLIIFHEKH EIFONLCJOPG)
	{
		return ((::OKOLIIFHEKH(*)(::FlatBuffers::ByteBuffer*, ::OKOLIIFHEKH))((::PBYTE)hIl2Cpp + OKOLIIFHEKH_MBMKLLIPDOO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FMMBMCOEOBL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FMMBMCOEOBL&))((::PBYTE)hIl2Cpp + OKOLIIFHEKH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
