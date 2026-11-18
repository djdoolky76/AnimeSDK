#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DHCGNJELFNN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BCFCLDMJJGN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BCFCLDMJJGN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ECF20)
#define BCFCLDMJJGN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BCFCLDMJJGN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BCFCLDMJJGN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7ECF10)
#define BCFCLDMJJGN_NMFFEPKGKOA_1_OFFSET UNITYSDK_OFFSET(0x19BE2CD0)
#define BCFCLDMJJGN_NMFFEPKGKOA_OFFSET UNITYSDK_OFFSET(0x19BE2A30)
#define BCFCLDMJJGN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7ECF00)
#define BCFCLDMJJGN___INIT_OFFSET UNITYSDK_OFFSET(0x7ECEE0)

inline static constexpr unsigned int BCFCLDMJJGN_TypeDefinitionIndex = 17619;

struct alignas(8) BCFCLDMJJGN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCFCLDMJJGN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BCFCLDMJJGN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCFCLDMJJGN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::BCFCLDMJJGN NMFFEPKGKOA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BCFCLDMJJGN EIFONLCJOPG)
	{
		return ((::BCFCLDMJJGN(*)(::FlatBuffers::ByteBuffer*, ::BCFCLDMJJGN))((::PBYTE)hIl2Cpp + BCFCLDMJJGN_NMFFEPKGKOA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DHCGNJELFNN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DHCGNJELFNN&, ::System::Int32&))((::PBYTE)hIl2Cpp + BCFCLDMJJGN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DHCGNJELFNN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DHCGNJELFNN&))((::PBYTE)hIl2Cpp + BCFCLDMJJGN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCFCLDMJJGN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::BCFCLDMJJGN NMFFEPKGKOA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BCFCLDMJJGN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BCFCLDMJJGN_NMFFEPKGKOA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::BCFCLDMJJGN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BCFCLDMJJGN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BCFCLDMJJGN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
