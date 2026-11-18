#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EJMBCDMFIGF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BNKDEKJDCHL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BNKDEKJDCHL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F9840)
#define BNKDEKJDCHL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BNKDEKJDCHL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BNKDEKJDCHL_GKOOFAGMMDC_1_OFFSET UNITYSDK_OFFSET(0x1A537F20)
#define BNKDEKJDCHL_GKOOFAGMMDC_OFFSET UNITYSDK_OFFSET(0x1A537DB0)
#define BNKDEKJDCHL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F9880)
#define BNKDEKJDCHL___INIT_OFFSET UNITYSDK_OFFSET(0x7F9820)

inline static constexpr unsigned int BNKDEKJDCHL_TypeDefinitionIndex = 16138;

struct alignas(8) BNKDEKJDCHL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKDEKJDCHL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BNKDEKJDCHL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKDEKJDCHL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::BNKDEKJDCHL GKOOFAGMMDC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BNKDEKJDCHL EIFONLCJOPG)
	{
		return ((::BNKDEKJDCHL(*)(::FlatBuffers::ByteBuffer*, ::BNKDEKJDCHL))((::PBYTE)hIl2Cpp + BNKDEKJDCHL_GKOOFAGMMDC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EJMBCDMFIGF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EJMBCDMFIGF&))((::PBYTE)hIl2Cpp + BNKDEKJDCHL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::BNKDEKJDCHL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BNKDEKJDCHL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BNKDEKJDCHL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BNKDEKJDCHL GKOOFAGMMDC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BNKDEKJDCHL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BNKDEKJDCHL_GKOOFAGMMDC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKDEKJDCHL_PPOMNIFACOL_OFFSET))(this);
	}
};
