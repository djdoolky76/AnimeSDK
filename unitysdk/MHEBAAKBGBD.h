#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FKCPPDNICPA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MHEBAAKBGBD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MHEBAAKBGBD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C4120)
#define MHEBAAKBGBD_DNBLHGFGLAH_1_OFFSET UNITYSDK_OFFSET(0x17FC60A0)
#define MHEBAAKBGBD_DNBLHGFGLAH_OFFSET UNITYSDK_OFFSET(0x17FC6000)
#define MHEBAAKBGBD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MHEBAAKBGBD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MHEBAAKBGBD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C4110)
#define MHEBAAKBGBD___INIT_OFFSET UNITYSDK_OFFSET(0x7C40F0)

inline static constexpr unsigned int MHEBAAKBGBD_TypeDefinitionIndex = 14602;

struct alignas(8) MHEBAAKBGBD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEBAAKBGBD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHEBAAKBGBD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEBAAKBGBD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FKCPPDNICPA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FKCPPDNICPA&))((::PBYTE)hIl2Cpp + MHEBAAKBGBD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MHEBAAKBGBD DNBLHGFGLAH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MHEBAAKBGBD EIFONLCJOPG)
	{
		return ((::MHEBAAKBGBD(*)(::FlatBuffers::ByteBuffer*, ::MHEBAAKBGBD))((::PBYTE)hIl2Cpp + MHEBAAKBGBD_DNBLHGFGLAH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::MHEBAAKBGBD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MHEBAAKBGBD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHEBAAKBGBD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEBAAKBGBD_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MHEBAAKBGBD DNBLHGFGLAH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MHEBAAKBGBD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHEBAAKBGBD_DNBLHGFGLAH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
