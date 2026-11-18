#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PELDJALAIHO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FLGJJLPFCGG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FLGJJLPFCGG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x808690)
#define FLGJJLPFCGG_DJEOPJAOADP_1_OFFSET UNITYSDK_OFFSET(0x1ADE75E0)
#define FLGJJLPFCGG_DJEOPJAOADP_OFFSET UNITYSDK_OFFSET(0x1ADE7570)
#define FLGJJLPFCGG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FLGJJLPFCGG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FLGJJLPFCGG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8086D0)
#define FLGJJLPFCGG___INIT_OFFSET UNITYSDK_OFFSET(0x808670)

inline static constexpr unsigned int FLGJJLPFCGG_TypeDefinitionIndex = 10079;

struct alignas(8) FLGJJLPFCGG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLGJJLPFCGG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FLGJJLPFCGG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::FLGJJLPFCGG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FLGJJLPFCGG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FLGJJLPFCGG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLGJJLPFCGG_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLGJJLPFCGG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::FLGJJLPFCGG DJEOPJAOADP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FLGJJLPFCGG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FLGJJLPFCGG_DJEOPJAOADP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::FLGJJLPFCGG DJEOPJAOADP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FLGJJLPFCGG EIFONLCJOPG)
	{
		return ((::FLGJJLPFCGG(*)(::FlatBuffers::ByteBuffer*, ::FLGJJLPFCGG))((::PBYTE)hIl2Cpp + FLGJJLPFCGG_DJEOPJAOADP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PELDJALAIHO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PELDJALAIHO&))((::PBYTE)hIl2Cpp + FLGJJLPFCGG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
