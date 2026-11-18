#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BFFEFLDCNMB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NCFIFCOPCDC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NCFIFCOPCDC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81E0A0)
#define NCFIFCOPCDC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NCFIFCOPCDC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NCFIFCOPCDC_KHFOLKAIOLE_1_OFFSET UNITYSDK_OFFSET(0x1BF694B0)
#define NCFIFCOPCDC_KHFOLKAIOLE_OFFSET UNITYSDK_OFFSET(0x1BF69210)
#define NCFIFCOPCDC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81E0F0)
#define NCFIFCOPCDC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81E0E0)
#define NCFIFCOPCDC___INIT_OFFSET UNITYSDK_OFFSET(0x81E080)

inline static constexpr unsigned int NCFIFCOPCDC_TypeDefinitionIndex = 10891;

struct alignas(8) NCFIFCOPCDC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFIFCOPCDC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NCFIFCOPCDC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFIFCOPCDC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::NCFIFCOPCDC KHFOLKAIOLE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NCFIFCOPCDC EIFONLCJOPG)
	{
		return ((::NCFIFCOPCDC(*)(::FlatBuffers::ByteBuffer*, ::NCFIFCOPCDC))((::PBYTE)hIl2Cpp + NCFIFCOPCDC_KHFOLKAIOLE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::NCFIFCOPCDC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NCFIFCOPCDC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NCFIFCOPCDC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BFFEFLDCNMB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BFFEFLDCNMB&))((::PBYTE)hIl2Cpp + NCFIFCOPCDC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFIFCOPCDC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BFFEFLDCNMB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BFFEFLDCNMB&, ::System::Int32&))((::PBYTE)hIl2Cpp + NCFIFCOPCDC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::NCFIFCOPCDC KHFOLKAIOLE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NCFIFCOPCDC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NCFIFCOPCDC_KHFOLKAIOLE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
