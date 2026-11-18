#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CPPHADHKBCN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GLPCFHCDOFL_ABBIGJEGBJC_1_OFFSET UNITYSDK_OFFSET(0x1746B590)
#define GLPCFHCDOFL_ABBIGJEGBJC_OFFSET UNITYSDK_OFFSET(0x1746B520)
#define GLPCFHCDOFL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GLPCFHCDOFL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A8050)
#define GLPCFHCDOFL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GLPCFHCDOFL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GLPCFHCDOFL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A8040)
#define GLPCFHCDOFL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A8030)
#define GLPCFHCDOFL___INIT_OFFSET UNITYSDK_OFFSET(0x7A8010)

inline static constexpr unsigned int GLPCFHCDOFL_TypeDefinitionIndex = 12173;

struct alignas(8) GLPCFHCDOFL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPCFHCDOFL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLPCFHCDOFL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPCFHCDOFL_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPCFHCDOFL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GLPCFHCDOFL ABBIGJEGBJC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GLPCFHCDOFL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLPCFHCDOFL_ABBIGJEGBJC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::GLPCFHCDOFL ABBIGJEGBJC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GLPCFHCDOFL EIFONLCJOPG)
	{
		return ((::GLPCFHCDOFL(*)(::FlatBuffers::ByteBuffer*, ::GLPCFHCDOFL))((::PBYTE)hIl2Cpp + GLPCFHCDOFL_ABBIGJEGBJC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CPPHADHKBCN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CPPHADHKBCN&))((::PBYTE)hIl2Cpp + GLPCFHCDOFL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CPPHADHKBCN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CPPHADHKBCN&, ::System::Int32&))((::PBYTE)hIl2Cpp + GLPCFHCDOFL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::GLPCFHCDOFL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GLPCFHCDOFL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLPCFHCDOFL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
