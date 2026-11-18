#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FBDLINOKJLA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IOKHJEFEIIM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IOKHJEFEIIM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80F900)
#define IOKHJEFEIIM_EJKIHKMOJNM_1_OFFSET UNITYSDK_OFFSET(0x1B62CE80)
#define IOKHJEFEIIM_EJKIHKMOJNM_OFFSET UNITYSDK_OFFSET(0x1B62CE10)
#define IOKHJEFEIIM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IOKHJEFEIIM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IOKHJEFEIIM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80F8F0)
#define IOKHJEFEIIM___INIT_OFFSET UNITYSDK_OFFSET(0x80F8D0)

inline static constexpr unsigned int IOKHJEFEIIM_TypeDefinitionIndex = 14250;

struct alignas(8) IOKHJEFEIIM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOKHJEFEIIM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOKHJEFEIIM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOKHJEFEIIM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::IOKHJEFEIIM EJKIHKMOJNM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IOKHJEFEIIM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOKHJEFEIIM_EJKIHKMOJNM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOKHJEFEIIM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FBDLINOKJLA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FBDLINOKJLA&))((::PBYTE)hIl2Cpp + IOKHJEFEIIM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::IOKHJEFEIIM EJKIHKMOJNM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IOKHJEFEIIM EIFONLCJOPG)
	{
		return ((::IOKHJEFEIIM(*)(::FlatBuffers::ByteBuffer*, ::IOKHJEFEIIM))((::PBYTE)hIl2Cpp + IOKHJEFEIIM_EJKIHKMOJNM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::IOKHJEFEIIM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IOKHJEFEIIM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOKHJEFEIIM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
