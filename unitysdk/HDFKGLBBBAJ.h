#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FIJKMIEJLHI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HDFKGLBBBAJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HDFKGLBBBAJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x814250)
#define HDFKGLBBBAJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HDFKGLBBBAJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HDFKGLBBBAJ_KHJOIKOOAFP_1_OFFSET UNITYSDK_OFFSET(0x1B875A00)
#define HDFKGLBBBAJ_KHJOIKOOAFP_OFFSET UNITYSDK_OFFSET(0x1B875760)
#define HDFKGLBBBAJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x814240)
#define HDFKGLBBBAJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x814290)
#define HDFKGLBBBAJ___INIT_OFFSET UNITYSDK_OFFSET(0x814220)

inline static constexpr unsigned int HDFKGLBBBAJ_TypeDefinitionIndex = 11733;

struct alignas(8) HDFKGLBBBAJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDFKGLBBBAJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HDFKGLBBBAJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDFKGLBBBAJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HDFKGLBBBAJ KHJOIKOOAFP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HDFKGLBBBAJ EIFONLCJOPG)
	{
		return ((::HDFKGLBBBAJ(*)(::FlatBuffers::ByteBuffer*, ::HDFKGLBBBAJ))((::PBYTE)hIl2Cpp + HDFKGLBBBAJ_KHJOIKOOAFP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FIJKMIEJLHI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FIJKMIEJLHI&, ::System::Int32&))((::PBYTE)hIl2Cpp + HDFKGLBBBAJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::HDFKGLBBBAJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HDFKGLBBBAJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HDFKGLBBBAJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HDFKGLBBBAJ KHJOIKOOAFP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HDFKGLBBBAJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HDFKGLBBBAJ_KHJOIKOOAFP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FIJKMIEJLHI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FIJKMIEJLHI&))((::PBYTE)hIl2Cpp + HDFKGLBBBAJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDFKGLBBBAJ_PPOMNIFACOL_OFFSET))(this);
	}
};
