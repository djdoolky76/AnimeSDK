#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JBGKOOAFEBJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GPIKCNODKIO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GPIKCNODKIO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EB780)
#define GPIKCNODKIO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GPIKCNODKIO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GPIKCNODKIO_GJNALGKPGND_1_OFFSET UNITYSDK_OFFSET(0x19B00590)
#define GPIKCNODKIO_GJNALGKPGND_OFFSET UNITYSDK_OFFSET(0x19B00520)
#define GPIKCNODKIO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EB7C0)
#define GPIKCNODKIO___INIT_OFFSET UNITYSDK_OFFSET(0x7EB760)

inline static constexpr unsigned int GPIKCNODKIO_TypeDefinitionIndex = 16676;

struct alignas(8) GPIKCNODKIO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIKCNODKIO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GPIKCNODKIO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GPIKCNODKIO GJNALGKPGND(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GPIKCNODKIO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GPIKCNODKIO_GJNALGKPGND_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::GPIKCNODKIO GJNALGKPGND_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GPIKCNODKIO EIFONLCJOPG)
	{
		return ((::GPIKCNODKIO(*)(::FlatBuffers::ByteBuffer*, ::GPIKCNODKIO))((::PBYTE)hIl2Cpp + GPIKCNODKIO_GJNALGKPGND_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::GPIKCNODKIO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GPIKCNODKIO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GPIKCNODKIO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIKCNODKIO_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIKCNODKIO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JBGKOOAFEBJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JBGKOOAFEBJ&))((::PBYTE)hIl2Cpp + GPIKCNODKIO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
