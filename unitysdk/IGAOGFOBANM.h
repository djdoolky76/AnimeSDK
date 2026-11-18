#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/POEDAJDNNPD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IGAOGFOBANM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IGAOGFOBANM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DF2D0)
#define IGAOGFOBANM_ENHOEBCAKML_1_OFFSET UNITYSDK_OFFSET(0x1934BFE0)
#define IGAOGFOBANM_ENHOEBCAKML_OFFSET UNITYSDK_OFFSET(0x1934BF40)
#define IGAOGFOBANM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IGAOGFOBANM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IGAOGFOBANM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DF2C0)
#define IGAOGFOBANM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DF310)
#define IGAOGFOBANM___INIT_OFFSET UNITYSDK_OFFSET(0x7DF2A0)

inline static constexpr unsigned int IGAOGFOBANM_TypeDefinitionIndex = 14752;

struct alignas(8) IGAOGFOBANM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGAOGFOBANM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGAOGFOBANM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::POEDAJDNNPD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::POEDAJDNNPD&))((::PBYTE)hIl2Cpp + IGAOGFOBANM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::IGAOGFOBANM ENHOEBCAKML(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IGAOGFOBANM EIFONLCJOPG)
	{
		return ((::IGAOGFOBANM(*)(::FlatBuffers::ByteBuffer*, ::IGAOGFOBANM))((::PBYTE)hIl2Cpp + IGAOGFOBANM_ENHOEBCAKML_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::IGAOGFOBANM ENHOEBCAKML_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IGAOGFOBANM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGAOGFOBANM_ENHOEBCAKML_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::POEDAJDNNPD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::POEDAJDNNPD&, ::System::Int32&))((::PBYTE)hIl2Cpp + IGAOGFOBANM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::IGAOGFOBANM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IGAOGFOBANM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGAOGFOBANM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGAOGFOBANM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGAOGFOBANM_GHKKNCCLPAN_OFFSET))(this);
	}
};
