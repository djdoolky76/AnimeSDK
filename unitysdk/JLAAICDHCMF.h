#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CCNDDEACPPF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JLAAICDHCMF_BACDGLHKDLN_1_OFFSET UNITYSDK_OFFSET(0x17C2C1F0)
#define JLAAICDHCMF_BACDGLHKDLN_OFFSET UNITYSDK_OFFSET(0x17C2C180)
#define JLAAICDHCMF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JLAAICDHCMF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7BF5B0)
#define JLAAICDHCMF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JLAAICDHCMF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JLAAICDHCMF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7BF5A0)
#define JLAAICDHCMF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7BF590)
#define JLAAICDHCMF___INIT_OFFSET UNITYSDK_OFFSET(0x7BF570)

inline static constexpr unsigned int JLAAICDHCMF_TypeDefinitionIndex = 11372;

struct alignas(8) JLAAICDHCMF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAAICDHCMF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JLAAICDHCMF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JLAAICDHCMF BACDGLHKDLN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JLAAICDHCMF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JLAAICDHCMF_BACDGLHKDLN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAAICDHCMF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CCNDDEACPPF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CCNDDEACPPF&))((::PBYTE)hIl2Cpp + JLAAICDHCMF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CCNDDEACPPF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CCNDDEACPPF&, ::System::Int32&))((::PBYTE)hIl2Cpp + JLAAICDHCMF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::JLAAICDHCMF BACDGLHKDLN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JLAAICDHCMF EIFONLCJOPG)
	{
		return ((::JLAAICDHCMF(*)(::FlatBuffers::ByteBuffer*, ::JLAAICDHCMF))((::PBYTE)hIl2Cpp + JLAAICDHCMF_BACDGLHKDLN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAAICDHCMF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::JLAAICDHCMF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JLAAICDHCMF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JLAAICDHCMF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
