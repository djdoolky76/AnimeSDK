#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JGJNBHNCNFD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define APPFDJPMNGJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define APPFDJPMNGJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ECCD0)
#define APPFDJPMNGJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define APPFDJPMNGJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define APPFDJPMNGJ_HPKIMPIIGJD_1_OFFSET UNITYSDK_OFFSET(0x19BDF260)
#define APPFDJPMNGJ_HPKIMPIIGJD_OFFSET UNITYSDK_OFFSET(0x19BDF0C0)
#define APPFDJPMNGJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7ECD10)
#define APPFDJPMNGJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7ECCC0)
#define APPFDJPMNGJ___INIT_OFFSET UNITYSDK_OFFSET(0x7ECCA0)

inline static constexpr unsigned int APPFDJPMNGJ_TypeDefinitionIndex = 11808;

struct alignas(8) APPFDJPMNGJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + APPFDJPMNGJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + APPFDJPMNGJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::APPFDJPMNGJ HPKIMPIIGJD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::APPFDJPMNGJ EIFONLCJOPG)
	{
		return ((::APPFDJPMNGJ(*)(::FlatBuffers::ByteBuffer*, ::APPFDJPMNGJ))((::PBYTE)hIl2Cpp + APPFDJPMNGJ_HPKIMPIIGJD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + APPFDJPMNGJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::APPFDJPMNGJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::APPFDJPMNGJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + APPFDJPMNGJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APPFDJPMNGJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JGJNBHNCNFD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JGJNBHNCNFD&))((::PBYTE)hIl2Cpp + APPFDJPMNGJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::APPFDJPMNGJ HPKIMPIIGJD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::APPFDJPMNGJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + APPFDJPMNGJ_HPKIMPIIGJD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JGJNBHNCNFD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JGJNBHNCNFD&, ::System::Int32&))((::PBYTE)hIl2Cpp + APPFDJPMNGJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
