#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MINBODCIHAN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FECPHHDBIBP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FECPHHDBIBP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x789EE0)
#define FECPHHDBIBP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FECPHHDBIBP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FECPHHDBIBP_LILDNOIHOEL_1_OFFSET UNITYSDK_OFFSET(0x16635E80)
#define FECPHHDBIBP_LILDNOIHOEL_OFFSET UNITYSDK_OFFSET(0x16635E10)
#define FECPHHDBIBP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x789ED0)
#define FECPHHDBIBP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x789F20)
#define FECPHHDBIBP___INIT_OFFSET UNITYSDK_OFFSET(0x789EB0)

inline static constexpr unsigned int FECPHHDBIBP_TypeDefinitionIndex = 14438;

struct alignas(8) FECPHHDBIBP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FECPHHDBIBP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FECPHHDBIBP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FECPHHDBIBP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::FECPHHDBIBP LILDNOIHOEL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FECPHHDBIBP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FECPHHDBIBP_LILDNOIHOEL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MINBODCIHAN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MINBODCIHAN&, ::System::Int32&))((::PBYTE)hIl2Cpp + FECPHHDBIBP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MINBODCIHAN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MINBODCIHAN&))((::PBYTE)hIl2Cpp + FECPHHDBIBP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::FECPHHDBIBP LILDNOIHOEL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FECPHHDBIBP EIFONLCJOPG)
	{
		return ((::FECPHHDBIBP(*)(::FlatBuffers::ByteBuffer*, ::FECPHHDBIBP))((::PBYTE)hIl2Cpp + FECPHHDBIBP_LILDNOIHOEL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::FECPHHDBIBP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FECPHHDBIBP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FECPHHDBIBP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FECPHHDBIBP_PPOMNIFACOL_OFFSET))(this);
	}
};
