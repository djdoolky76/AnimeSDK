#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MHDNLAKNCHJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AGIAGHOLPCF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AGIAGHOLPCF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E1D00)
#define AGIAGHOLPCF_DONAMBMFHCE_1_OFFSET UNITYSDK_OFFSET(0x194E97B0)
#define AGIAGHOLPCF_DONAMBMFHCE_OFFSET UNITYSDK_OFFSET(0x194E9650)
#define AGIAGHOLPCF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AGIAGHOLPCF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AGIAGHOLPCF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E1D40)
#define AGIAGHOLPCF___INIT_OFFSET UNITYSDK_OFFSET(0x7E1CE0)

inline static constexpr unsigned int AGIAGHOLPCF_TypeDefinitionIndex = 13989;

struct alignas(8) AGIAGHOLPCF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIAGHOLPCF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGIAGHOLPCF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::AGIAGHOLPCF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AGIAGHOLPCF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGIAGHOLPCF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AGIAGHOLPCF DONAMBMFHCE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AGIAGHOLPCF EIFONLCJOPG)
	{
		return ((::AGIAGHOLPCF(*)(::FlatBuffers::ByteBuffer*, ::AGIAGHOLPCF))((::PBYTE)hIl2Cpp + AGIAGHOLPCF_DONAMBMFHCE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIAGHOLPCF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MHDNLAKNCHJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MHDNLAKNCHJ&))((::PBYTE)hIl2Cpp + AGIAGHOLPCF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::AGIAGHOLPCF DONAMBMFHCE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AGIAGHOLPCF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGIAGHOLPCF_DONAMBMFHCE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIAGHOLPCF_GHKKNCCLPAN_OFFSET))(this);
	}
};
