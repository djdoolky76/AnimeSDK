#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GLHOICNAFHD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IIGKNMOIIFA_BDOGAGAHNIL_1_OFFSET UNITYSDK_OFFSET(0x1B88C780)
#define IIGKNMOIIFA_BDOGAGAHNIL_OFFSET UNITYSDK_OFFSET(0x1B88C710)
#define IIGKNMOIIFA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IIGKNMOIIFA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x814AB0)
#define IIGKNMOIIFA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IIGKNMOIIFA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IIGKNMOIIFA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x814AF0)
#define IIGKNMOIIFA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x814B00)
#define IIGKNMOIIFA___INIT_OFFSET UNITYSDK_OFFSET(0x814A90)

inline static constexpr unsigned int IIGKNMOIIFA_TypeDefinitionIndex = 16231;

struct alignas(8) IIGKNMOIIFA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGKNMOIIFA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IIGKNMOIIFA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::IIGKNMOIIFA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IIGKNMOIIFA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IIGKNMOIIFA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IIGKNMOIIFA BDOGAGAHNIL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IIGKNMOIIFA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IIGKNMOIIFA_BDOGAGAHNIL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GLHOICNAFHD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GLHOICNAFHD&, ::System::Int32&))((::PBYTE)hIl2Cpp + IIGKNMOIIFA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGKNMOIIFA_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGKNMOIIFA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GLHOICNAFHD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GLHOICNAFHD&))((::PBYTE)hIl2Cpp + IIGKNMOIIFA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::IIGKNMOIIFA BDOGAGAHNIL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IIGKNMOIIFA EIFONLCJOPG)
	{
		return ((::IIGKNMOIIFA(*)(::FlatBuffers::ByteBuffer*, ::IIGKNMOIIFA))((::PBYTE)hIl2Cpp + IIGKNMOIIFA_BDOGAGAHNIL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
