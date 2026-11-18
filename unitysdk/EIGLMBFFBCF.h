#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MOGAKLIPJDM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EIGLMBFFBCF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EIGLMBFFBCF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7665E0)
#define EIGLMBFFBCF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EIGLMBFFBCF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EIGLMBFFBCF_GPKKHKIPHHJ_1_OFFSET UNITYSDK_OFFSET(0x157B2630)
#define EIGLMBFFBCF_GPKKHKIPHHJ_OFFSET UNITYSDK_OFFSET(0x157B2390)
#define EIGLMBFFBCF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7665D0)
#define EIGLMBFFBCF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x766620)
#define EIGLMBFFBCF___INIT_OFFSET UNITYSDK_OFFSET(0x7665B0)

inline static constexpr unsigned int EIGLMBFFBCF_TypeDefinitionIndex = 16634;

struct alignas(8) EIGLMBFFBCF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGLMBFFBCF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIGLMBFFBCF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EIGLMBFFBCF GPKKHKIPHHJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EIGLMBFFBCF EIFONLCJOPG)
	{
		return ((::EIGLMBFFBCF(*)(::FlatBuffers::ByteBuffer*, ::EIGLMBFFBCF))((::PBYTE)hIl2Cpp + EIGLMBFFBCF_GPKKHKIPHHJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MOGAKLIPJDM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MOGAKLIPJDM&, ::System::Int32&))((::PBYTE)hIl2Cpp + EIGLMBFFBCF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::EIGLMBFFBCF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EIGLMBFFBCF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIGLMBFFBCF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::EIGLMBFFBCF GPKKHKIPHHJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EIGLMBFFBCF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIGLMBFFBCF_GPKKHKIPHHJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGLMBFFBCF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGLMBFFBCF_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MOGAKLIPJDM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MOGAKLIPJDM&))((::PBYTE)hIl2Cpp + EIGLMBFFBCF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
