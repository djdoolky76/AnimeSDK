#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PNIIJECMBIM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FCNACCDIBEI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FCNACCDIBEI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x789D90)
#define FCNACCDIBEI_DAMBOFLPBBM_1_OFFSET UNITYSDK_OFFSET(0x16634910)
#define FCNACCDIBEI_DAMBOFLPBBM_OFFSET UNITYSDK_OFFSET(0x166348A0)
#define FCNACCDIBEI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FCNACCDIBEI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FCNACCDIBEI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x789DD0)
#define FCNACCDIBEI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x789DE0)
#define FCNACCDIBEI___INIT_OFFSET UNITYSDK_OFFSET(0x789D70)

inline static constexpr unsigned int FCNACCDIBEI_TypeDefinitionIndex = 15955;

struct alignas(8) FCNACCDIBEI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNACCDIBEI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCNACCDIBEI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::FCNACCDIBEI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FCNACCDIBEI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCNACCDIBEI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNACCDIBEI_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PNIIJECMBIM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PNIIJECMBIM&, ::System::Int32&))((::PBYTE)hIl2Cpp + FCNACCDIBEI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::FCNACCDIBEI DAMBOFLPBBM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FCNACCDIBEI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCNACCDIBEI_DAMBOFLPBBM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::FCNACCDIBEI DAMBOFLPBBM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FCNACCDIBEI EIFONLCJOPG)
	{
		return ((::FCNACCDIBEI(*)(::FlatBuffers::ByteBuffer*, ::FCNACCDIBEI))((::PBYTE)hIl2Cpp + FCNACCDIBEI_DAMBOFLPBBM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNACCDIBEI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PNIIJECMBIM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PNIIJECMBIM&))((::PBYTE)hIl2Cpp + FCNACCDIBEI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
